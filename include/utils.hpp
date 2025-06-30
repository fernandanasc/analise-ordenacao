#ifndef UTILS_HPP
#define UTILS_HPP

#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
#include <chrono>
#include <functional>
#include <iostream>

using namespace std;

enum class TipoVetor {
    ALEATORIO,
    QUASE_ORDENADO,
    INVERSO
};

struct SortMetrics {
    size_t comparacoes = 0;
    size_t trocas = 0;
};

vector<int> gerarVetor(size_t tamanho, TipoVetor tipo);

void imprimirVetor(const vector<int>& v);

// Função template para medir tempo de execução (em milissegundos)
template<typename Func>
long long medirTempo(Func func) {
    auto inicio = chrono::high_resolution_clock::now();
    func();
    auto fim = chrono::high_resolution_clock::now();
    return chrono::duration_cast<chrono::milliseconds>(fim - inicio).count();
}

bool desejaContinuar();

#endif
