# Análise de Algoritmos de Ordenação

## 📖 Descrição

Implementação e análise comparativa de cinco algoritmos clássicos de ordenação em C++, coletando métricas de tempo, comparações e trocas para diferentes tipos e tamanhos de dados.

## 🔧 Algoritmos Implementados

| Algoritmo | Complexidade (Pior) | Complexidade (Melhor) | Otimizações |
|-----------|---------------------|----------------------|-------------|
| **Bubble Sort** | O(n²) | O(n) | Parada antecipada + área reduzida |
| **Insertion Sort** | O(n²) | O(n) | - |
| **Selection Sort** | O(n²) | O(n²) | - |
| **Merge Sort** | O(n log n) | O(n log n) | - |
| **Quick Sort** | O(n²) | O(n log n) | Pivô fixo |

## 📊 Dados Testados

- **Tamanhos**: 100, 500, 1K, 2K, 5K, 10K elementos
- **Tipos**: Aleatórios, Quase Ordenados (5% desordem), Inversamente Ordenados

## 🚀 Como Usar

### Compilação
```bash
make
```

### Execução
```bash
./main.exe
```

### Menu do Programa
1. **Teste Individual** - Executa teste pontual
2. **Gerar CSV: Tempo x Tamanho** - Dados para gráfico de linhas
3. **Gerar CSV: Comparações e Trocas** - Dados para gráfico de barras duplas
4. **Gerar CSV: Tempo por Tipo** - Dados para gráfico de barras agrupadas

## � Arquivos Gerados

Os CSVs são salvos na pasta `data/` (criada automaticamente):
- `tempo_por_tamanho.csv` - Para gráficos de linha
- `comparacoes_trocas_[tamanho]_[tipo].csv` - Para gráficos de barras
- `tempo_por_tipo_[tamanho].csv` - Para comparação entre tipos

**Formato**: Compatível com Excel brasileiro (`;` separador, `,` decimal)

## 🏗️ Estrutura

```
├── include/          # Headers (.hpp)
├── src/              # Implementações (.cpp)
├── data/             # CSVs gerados (não versionado)
├── main.cpp          # Programa principal
├── Makefile          # Build system
└── README.md
```

## 🧹 Comandos de Limpeza

- `make clean` - Remove executável, objetos e CSVs
- `make clean-data` - Remove apenas CSVs

## � Requisitos

- C++17
- g++ com flags: `-std=c++17 -Wall -Ofast`
- Windows/Linux/macOS

---

**Desenvolvido para análise comparativa de algoritmos de ordenação** 📊