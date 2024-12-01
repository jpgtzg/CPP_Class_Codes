# Compiler and flags
CXX = clang++
CXXFLAGS = -std=c++11 -Wall -Wextra -Wpedantic -Wshadow -Wformat=2 -Wcast-align -Wconversion -Wsign-conversion -Wnull-dereference -g3 -O0

# Directories
SRC_DIR = Situacion_Problema
BUILD_DIR = build
TARGET = $(BUILD_DIR)/programa

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Main targets
all: $(BUILD_DIR) $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Object files
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Clean
clean:
	rm -rf $(BUILD_DIR)

# Phony targets
.PHONY: all clean