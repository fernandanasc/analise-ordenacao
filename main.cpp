#include <iostream>
#include <vector>
#include "utils.hpp"
#include "bubble_sort.hpp"
#include "insertion_sort.hpp"
#include "selection_sort.hpp"
#include "merge_sort.hpp"
#include "quick_sort.hpp"
#include "testes.hpp"

using namespace std;


int main() {
    
    while (true) {
        size_t tamanho;
        int tipoEscolhido;

        cout << "\n===== Menu de Testes de Ordenacao =====\n";
        cout << "Digite o tamanho do vetor: ";
        cin >> tamanho;

        cout << "\nEscolha o tipo de vetor:\n";
        cout << "1 - Aleatorio\n";
        cout << "2 - Quase Ordenado\n";
        cout << "3 - Inverso\n";
        cout << "Opcao: ";
        cin >> tipoEscolhido;

        TipoVetor tipo;
        switch (tipoEscolhido) {
            case 1: tipo = TipoVetor::ALEATORIO; 
            break;
            case 2: tipo = TipoVetor::QUASE_ORDENADO;
            break;
            case 3: tipo = TipoVetor::INVERSO; 
            break;
            default:
                cout << "Opcao invalida. Usando ALEATORIO como padrao.\n";
                tipo = TipoVetor::ALEATORIO;
        }

        executarTestes(tamanho, tipo);

        if (!desejaContinuar()) {
            cout << "\nEncerrando programa. Obrigada!\n";
            return 0;
        }
    }
}
