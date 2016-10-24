QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app
SOURCES += main.cpp

# C++14
QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5
QMAKE_CXXFLAGS += -Wall -Wextra -Weffc++ -Werror -std=c++14

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov
