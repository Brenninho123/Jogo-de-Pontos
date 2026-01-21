#include <emscripten.h>
#include <cstdlib>
#include <ctime>

extern "C" {

// Inicializa semente aleatória
EMSCRIPTEN_KEEPALIVE
void initRandom() { std::srand(static_cast<unsigned int>(std::time(nullptr))); }

// Adiciona ponto (com 20% de chance de bônus +2)
EMSCRIPTEN_KEEPALIVE
int addPoint(int currentScore) {
    int bonus = 0;
    if(std::rand() % 100 < 20) bonus = 2;
    return currentScore + 1 + bonus;
}

// Resetar pontuação
EMSCRIPTEN_KEEPALIVE
int resetPoints() { return 0; }

}