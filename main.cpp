#include <iostream>
#include <vector>
#include "utils.hpp"
#include "bubble_sort.hpp"
#include "insertion_sort.hpp"
#include "selection_sort.hpp"
#include "merge_sort.hpp"
#include "quick_sort.hpp"

using namespace std;

void executarTestes(size_t tamanho, TipoVetor tipo) {
    vector<int> original = gerarVetor(tamanho, tipo);
    
    if (tamanho <= 20) {
        cout << "\nVetor original:\n";
        imprimirVetor(original);
    }

    //Testar Bubble Sort
    vector<int> v1 = original;
    SortMetrics metrics1;
    long long tempo1 = medirTempo([&]() {
        bubbleSort(v1, metrics1);
    });

    cout << "=== Bubble Sort ===" << endl;
    cout << "Tempo: " << tempo1 << " ms" << endl;
    cout << "Comparacoes: " << metrics1.comparacoes << endl;
    cout << "Trocas: " << metrics1.trocas << endl;
    cout << endl;

    // Testar Insertion Sort
    vector<int> v2 = original;
    SortMetrics metrics2;
    long long tempo2 = medirTempo([&]() {
        insertionSort(v2, metrics2);
    });

    cout << "=== Insertion Sort ===" << endl;
    cout << "Tempo: " << tempo2 << " ms" << endl;
    cout << "Comparacoes: " << metrics2.comparacoes << endl;
    cout << "Trocas: " << metrics2.trocas << endl;
    cout << endl;

    //Testar Selection Sort
    vector<int> v3 = original;
    SortMetrics metrics3;
    long long tempo3 = medirTempo([&]() {
        selectionSort(v3, metrics3);
    });

    cout << "=== Selection Sort ===" << endl;
    cout << "Tempo: " << tempo3 << " ms" << endl;
    cout << "Comparacoes: " << metrics3.comparacoes << endl;
    cout << "Trocas: " << metrics3.trocas << endl;  
    cout << endl;

    //Testar Merge Sort
    vector<int> v4 = original;
    SortMetrics metrics4;
    long long tempo4 = medirTempo([&]() {
        mergeSort(v4, metrics4);
    });

    cout << "=== Merge Sort ===" << endl;
    cout << "Tempo: " << tempo4 << " ms" << endl;
    cout << "Comparacoes: " << metrics4.comparacoes << endl;
    cout << "Trocas: " << metrics4.trocas << endl;  
    cout << endl;

    //Testar Quick Sort
    vector<int> v5 = original;
    SortMetrics metrics5;
    long long tempo5 = medirTempo([&]() {
        quickSort(v5, metrics5);
    });

    cout << "=== Quick Sort ===" << endl;
    cout << "Tempo: " << tempo5 << " ms" << endl;
    cout << "Comparacoes: " << metrics5.comparacoes << endl;
    cout << "Trocas: " << metrics5.trocas << endl;
    cout << endl;

    //imprime apenas o vetor ordenado pelo Quick Sort para evitar repeticao na saida
    if (tamanho <= 20) {
        cout << "\nVetor ordenado (Quick Sort):\n";
        imprimirVetor(v5);
    }


}

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

        char repetir;
        cout << "\nDeseja realizar outro teste? (s/n): ";
        cin >> repetir;
        if (repetir != 's' && repetir != 'S') {
            break;
        }
    }
    
    cout << "\nEncerrando programa. Obrigada!\n";
    return 0;
}
