#ifndef LOGGER8_H
#define LOGGER8_H

#include <iostream>

using namespace std;

namespace logger8 {
    class Logger {
        public:
            Logger() {}
            void log(string val_) {
                cout << "DEBUG " << val_ << endl;
            }
    };
}

#endif // LOGGER_H
