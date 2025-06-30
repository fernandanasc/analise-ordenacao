#include "utils.hpp"
#include <algorithm>

using namespace std;

vector<int> gerarVetor(size_t tamanho, TipoVetor tipo) {
    vector<int> v(tamanho);

    srand(time(nullptr));
    for (size_t i = 0; i < tamanho; ++i)
        v[i] = rand() % 10000;

    if (tipo == TipoVetor::QUASE_ORDENADO) {
        sort(v.begin(), v.end());
        for (size_t i = 0; i < tamanho / 20; ++i)
            swap(v[rand() % tamanho], v[rand() % tamanho]);
    }
    else if (tipo == TipoVetor::INVERSO) {
        sort(v.begin(), v.end(), greater<int>());
    }

    return v;
}

void imprimirVetor(const vector<int>& v) {
    for (auto val : v)
        cout << val << " ";
    cout << endl;
}
