# Compiler and Flags
CC := gcc
CFLAGS := -Wall -Wextra -std=c99 -pedantic -g
LIBS := -l

# Directories
BIN_DIR := bin
OBJ_DIR := build
SRC_DIR := src
INCLUDE_DIR := include
TEST_DIR := tests

# Source Files
SRC := $(SRC_DIR)/main.c $(SRC_DIR)/lexer.c $(SRC_DIR)/parser.c $(SRC_DIR)/utils.c
OBJ := $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
EXEC := $(BIN_DIR)/my_program

# Default Target: build the executable
all: $(EXEC)

# Rule to link object files into the final executable
$(EXEC): $(OBJ)
	@echo "Linking object files into executable..."
	$(CC) $(OBJ) -o $(EXEC) $(LIBS)

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "Compiling $< to $@..."
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@

# Clean up build files and binaries
.PHONY: clean
clean:
	@echo "Cleaning up..."
	rm -rf $(OBJ_DIR) $(BIN_DIR)

# Run tests (assuming you have some test files in the tests directory)
.PHONY: test
test: $(EXEC)
	@echo "Running tests..."
	./$(TEST_DIR)/test_lexer
	./$(TEST_DIR)/test_parser

# Install (optional step, can be customized to install the program)
.PHONY: install
install:
	@echo "Installing program..."
	cp $(EXEC) /usr/local/bin/

