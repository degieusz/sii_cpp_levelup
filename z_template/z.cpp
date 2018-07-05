#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"


using namespace std;


int main() {
    classdummy c;
    c.a =5;
    cout << c.m1();
    boost::optional<int> optvar;
    cout << "hello" <<endl;
    return 0;
}
