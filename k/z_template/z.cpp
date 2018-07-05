#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"


using namespace std;


int main() {
    if(int i = 0; i >-1) {
        //cout << "cpp 17 hello";
    }
    auto genericLambda= [](auto e) { return e; };
    cout << genericLambda(1);
    cout << genericLambda("one");
    classdummy c;
    c.a =5;
    cout << c.m1() << endl;
    boost::optional<int> optvar;
    return 0;
}
