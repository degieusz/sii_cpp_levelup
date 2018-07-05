#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"
#include "iprint.h"
#include "print.h"
#include <vector>

//wyjatek nie powinien byc rzucony w destruktorze, jesli jest to nie powinien wychodzic poza destruktor/obsluga tam/
//stack unwinding
using namespace std;

template<typename First>
void f(First e) {
    cout << e << endl;
}

template<typename First, typename... Types>
void f(First e, Types... args) {
    cout << e;
    f(args...);
}

template<typename T>
T adder(T v) {
  return v;
}

template<typename T, typename... Args>
T adder(T first, Args... args) {
  return first + adder(args...);
}


template<typename T>
void print(){
    T el;
    el.print();
}

int main()
{

    f("dd", "weert", "ddsfgff");
    long sum = adder(1, 2, 3, 8, 7);
    cout << "VARIADIC SUM " << sum << std::endl;

    return 0;

}

