# Compiler settings
CC = gcc
CFLAGS = -Wall -O2

# Source files
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Output
TARGET = myapp

# Detect OS
UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Linux)
    TARGET_EXT =
    RM = rm -f
else
    # Assume Windows (MinGW)
    TARGET_EXT = .exe
    RM = del /Q
endif

# Default build
all: $(TARGET)$(TARGET_EXT)

# Build target
$(TARGET)$(TARGET_EXT): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Compile source files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	$(RM) *.o $(TARGET)$(TARGET_EXT)

.PHONY: all clean
