#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

using namespace std;

namespace logger6 {
    class Logger {
        public:
            Logger() {}
            void log(string val_) {
                cout << "DEBUG" << val_ << endl;
            }
    };
}

#endif // LOGGER_H
