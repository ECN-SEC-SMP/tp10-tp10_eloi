# A mettre a jour : répertoire d'installation de Google Test
GTEST_DIR = ../googletest/googletest
GTEST_LIB = ../googletest/lib

CPP_FLAGS = -isystem $(GTEST_DIR)/include  -g -Wall -Wextra -pthread -std=c++17

GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

myTest.o: myTest.cpp Calculator.h
	g++ -c $(CPP_FLAGS) myTest.cpp

Calculator.o: Calculator.cpp Calculator.h
	g++ -c $(CPP_FLAGS) Calculator.cpp

myTest.out: myTest.o Calculator.o
	g++ $(CPP_FLAGS) -o myTest.out myTest.o Calculator.o -lpthread $(GTEST_LIB)/libgtest.a $(GTEST_LIB)/libgtest_main.a
