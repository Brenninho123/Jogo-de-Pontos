#include <emscripten.h>
#include <cstdlib>
#include <ctime>

extern "C" {

EMSCRIPTEN_KEEPALIVE
void initRandom() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}

EMSCRIPTEN_KEEPALIVE
int addPoint(int currentScore) {
    int bonus = 0;

    // 20% de chance de bônus de +2 pontos
    int chance = std::rand() % 100;
    if (chance < 20) bonus = 2;

    return currentScore + 1 + bonus;
}

EMSCRIPTEN_KEEPALIVE
int resetPoints() {
    return 0;
}

}