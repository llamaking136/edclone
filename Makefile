SOURCES = $(shell find . -name "*.c*")
TARGET = edclone

CXX = g++
CXX_ARGS = -std=c++17 -Ilib -Wall -Werror -o $(TARGET)

all: $(SOURCE)
	$(CXX) $(CXX_ARGS) $(SOURCES)

clean: $(TARGET)
	rm $(TARGET)
