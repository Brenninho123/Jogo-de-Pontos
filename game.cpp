#include <emscripten.h>

extern "C" {
    EMSCRIPTEN_KEEPALIVE int addPoint(int s) { return s + 1; }
    EMSCRIPTEN_KEEPALIVE int resetPoints() { return 0; }
}