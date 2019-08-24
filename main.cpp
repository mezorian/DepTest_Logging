#include "Logger.h"

// only visible in current compilation unit
using Logger = logger8::Logger;

int main() {
    Logger l;
    l.log("Hello World!");
    return 0;
}
