# Makefile for building the project with x86_64-w64-mingw32-g++
ifeq ($(OS),Windows_NT)
    export PATH := C:/msys64/ucrt64/bin:$(PATH)
	CXX = x86_64-w64-mingw32-c++
	TARGET = main.exe
else
    CXX = g++
	TARGET = main
endif

CXXFLAGS = -std=c++17 -Wall -I./point

ifdef DEBUG
	CXXFLAGS += -g
endif

SRCDIR = .
POINTDIR = ./point
SOURCES = $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(POINTDIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)



all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX)  -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(SRCDIR)/*.o $(POINTDIR)/*.o $(TARGET)
