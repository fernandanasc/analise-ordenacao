# Pasta Data

Esta pasta contém os arquivos CSV gerados pelo programa de análise de algoritmos de ordenação.

## Arquivos gerados automaticamente:

- `tempo_por_tamanho.csv` - Dados para gráficos de linha (tempo × tamanho)
- `comparacoes_trocas_[tamanho]_[tipo].csv` - Dados para gráficos de barras duplas
- `tempo_por_tipo_[tamanho].csv` - Dados para gráficos de barras agrupadas

## Formato dos CSVs:

- **Separador de colunas**: Ponto e vírgula (`;`)
- **Separador decimal**: Vírgula (`,`)
- **Compatibilidade**: Excel brasileiro

## Limpeza:

Use `make clean-data` para remover todos os CSVs desta pasta.
