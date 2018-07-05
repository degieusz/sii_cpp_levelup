#pragma once
#include <iostream>

using namespace std;

template <typename T>
class ob {
public:
    ob(T i ): m(i) {
        cout << m;
        cout << " : ";
        cout << "ob()" << endl;
    }

    ob(const ob& ob) {
        this->m = ob.m;
        cout << m;
        cout << " : ";
        cout << "ob(const ob&)" << endl;
    }

    ob(ob&& ob) {
        this->m = ob.m;
        cout << m;
        cout << " : ";
        cout << "ob(const ob&&)" << endl;
        ob.m = -1;
    }

    ob& operator=(const ob& ob) {
        this->m = ob.m;
        cout << m;
        cout << " : ";
        cout << "operator=" << endl;

        return *this;
    }

    ob& operator=(ob&& ob) {
        this->m = ob.m;
        cout << m;
        cout << " : ";
        cout << "operator=&&" << endl;
        ob.m = -1;

        return *this;
    }

    ~ob() {
        cout << m;
        cout << " : ";
        cout << "destr" << endl;
    }

//private:
    //int m;
    T m {};
};
