# Nome do executável
EXEC = main.exe

# Compilador e flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Ofast -Iinclude

# Diretórios
SRC_DIR = src
INC_DIR = include
OBJ_DIR = obj

# Arquivos-fonte
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Alvo padrão
all: $(EXEC)

# Compilação do executável
$(EXEC): main.cpp $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compilação dos arquivos objeto
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@if not exist $(OBJ_DIR) mkdir $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	@if exist $(OBJ_DIR) del /q $(OBJ_DIR)\*.o
	@if exist $(OBJ_DIR) rmdir /s /q $(OBJ_DIR)
	@if exist $(EXEC) del /q $(EXEC)
