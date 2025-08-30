# Makefile for building the project with x86_64-w64-mingw32-g++
export PATH := C:/msys64/ucrt64/bin:$(PATH)
CXX = x86_64-w64-mingw32-c++
CXXFLAGS = -std=c++17 -Wall -I./point
SRCDIR = .
POINTDIR = ./point
SOURCES = $(wildcard $(SRCDIR)/*.cpp) $(wildcard $(POINTDIR)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = main.exe

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX)  -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(SRCDIR)/*.o $(POINTDIR)/*.o $(TARGET)
