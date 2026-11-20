// Interactive shell for Mini_Database.
//
//   ./bin/main                 start an interactive session
//   ./bin/main < script.sql    run commands from a file, one per line
//   ./bin/main --verbose       also show the engine's internal trace
//                              (tokenizer, RPN evaluation, B+ tree ops)
//
// Tables are persisted as binary files in the current working directory,
// so data survives between sessions.
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <unistd.h>

#include "sql/sql.h"
using namespace std;

static bool is_blank_or_comment(const string& line) {
    size_t i = line.find_first_not_of(" \t\r");
    return i == string::npos || line.compare(i, 2, "--") == 0;
}

int main(int argc, char** argv) {
    const bool interactive = isatty(STDIN_FILENO);
    const bool verbose = argc > 1 && strcmp(argv[1], "--verbose") == 0;

    // The engine writes a detailed execution trace to stdout. Unless
    // --verbose is given, send that trace to a buffer we throw away and
    // print only the query results.
    streambuf* console = cout.rdbuf();
    ostringstream trace;
    auto quiet = [&] { if (!verbose) cout.rdbuf(trace.rdbuf()); };
    auto loud = [&] { cout.rdbuf(console); trace.str(""); };

    quiet();
    SQL sql;
    loud();

    if (interactive) {
        cout << "Mini_Database shell. Supported commands:\n"
             << "  make table <name> fields <f1>, <f2>, ...\n"
             << "  insert into <name> values <v1>, <v2>, ...\n"
             << "  select <*|f1, f2> from <name> [where <condition>]\n"
             << "Type 'exit' to quit.\n";
    }

    string line;
    while (true) {
        if (interactive) cout << "\nsql> " << flush;
        if (!getline(cin, line)) break;
        if (line == "exit" || line == "quit") break;
        if (is_blank_or_comment(line)) continue;
        if (!interactive) cout << "\nsql> " << line << '\n';

        quiet();
        Table result = sql.command(line);
        loud();
        if (line.find("select") != string::npos) cout << result;
    }
    return 0;
}
