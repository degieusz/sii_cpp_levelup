#pragma once
#include <iostream>

using namespace std;

template <typename T>
class ob {
public:
    ob() {
        cout << m++;
        cout << "ob()" << endl;
    }

    ob(const ob& ob) {
        cout << m;
        cout << "ob(const ob&)" << endl;
        this->m = ob.m;
    }

    ob(ob&& ob) {
        cout << m;
        cout << "ob(const ob&&)" << endl;
        this->m = ob.m;
        ob.m = -1;
    }

    ob& operator=(const ob& ob) {
        cout << m;
        cout << "operator=" << endl;
        this->m = ob.m;

        return *this;
    }

    ob& operator=(ob&& ob) {
        cout << m;
        cout << "operator=&&" << endl;
        this->m = ob.m;
        ob.m = -1;

        return *this;
    }

    ~ob() {
        cout << m;
        cout << "destr" << endl;
    }

//private:
    //int m;
    T m {};
};
