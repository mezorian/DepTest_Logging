#ifndef LOGGER10_H
#define LOGGER10_H

#include <iostream>

using namespace std;

namespace logger10 {
    class Logger {
        public:
            Logger() {}
            void log(string val_) {
                cout << val_ << endl;
            }
    };
}

#endif // LOGGER_H
