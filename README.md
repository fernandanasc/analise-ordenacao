# Análise de Algoritmos de Ordenação

## Comandos de Limpeza

### `make clean`
Remove todos os arquivos gerados pelo projeto:
- Arquivos objeto (`.o`)
- Executável (`main.exe`)
- Arquivos CSV da pasta `data/`

### `make clean-data`
Remove apenas os arquivos CSV gerados na pasta `data/`:
- Útil quando você quer manter a compilação mas limpar apenas os dados gerados
- Ideal para começar uma nova bateria de testes sem recompilar o projeto