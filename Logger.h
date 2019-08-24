#ifndef LOGGER9_H
#define LOGGER9_H

#include <iostream>

using namespace std;

namespace logger9 {
    class Logger {
        public:
            Logger() {}
            void log(string val_) {
                cout << "DEBUG " << val_ << endl;
            }
    };
}

#endif // LOGGER_H
