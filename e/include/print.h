
#pragma once
#include <iprint.h>

class print1 : public iprint {
public:
    void print() {
    cout << "1";
    };
};

class print2 : public iprint {
public:
    void print() {
    cout << "2";
    };
};

class print3 : public iprint {
public:
    void print() {
    cout << "3";
    };
};
