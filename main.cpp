#include "Logger.h"

// only visible in current compilation unit
using Logger = logger9::Logger;

int main() {
    Logger l;
    l.log("Hello World!");
    return 0;
}
