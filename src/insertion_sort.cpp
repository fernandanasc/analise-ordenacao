#include "insertion_sort.hpp"

using namespace std;

void insertionSort(vector<int>& vetor, SortMetrics& metrics) {
    size_t n = vetor.size();

    for (size_t i = 1; i < n; ++i) {
        int chave = vetor[i];
        size_t j = i;

        while (j > 0) {
            metrics.comparacoes++;
            if (vetor[j - 1] > chave) {
                vetor[j] = vetor[j - 1];
                metrics.trocas++;
                j--;
            } else {
                break;
            }
        }

        vetor[j] = chave;
    }
}
