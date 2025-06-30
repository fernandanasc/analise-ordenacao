#include <iostream>
#include <vector>
#include "utils.hpp"
#include "bubble_sort.hpp"
#include "insertion_sort.hpp"
#include "selection_sort.hpp"
#include "merge_sort.hpp"
#include "quick_sort.hpp"


using namespace std;

int main() {
    // Tamanho e tipo do vetor
    size_t tamanho = 1000;
    TipoVetor tipo = TipoVetor::ALEATORIO;

    // Gerar vetor base
    vector<int> original = gerarVetor(tamanho, tipo);

    // Testar Bubble Sort
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

    return 0;
}
