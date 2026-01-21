#include <emscripten.h>
#include <cstdlib>
#include <ctime>

extern "C" {
EMSCRIPTEN_KEEPALIVE
void initRandom() { std::srand(static_cast<unsigned int>(std::time(nullptr))); }

EMSCRIPTEN_KEEPALIVE
int addPoint(int currentScore) {
    int bonus = 0;
    if(std::rand() % 100 < 20) bonus = 2; // 20% chance bônus
    return currentScore + 1 + bonus;
}

EMSCRIPTEN_KEEPALIVE
int resetPoints() { return 0; }
}