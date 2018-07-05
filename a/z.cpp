#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"

using namespace std;
void fun() {
    ob<int> obj;
    ob<int> obj2;
    obj2= obj;
    obj2= std::move(obj);
    cout << "-------" << endl;
    obj2= ob<int>();
    cout << "-------" << endl;
    ob<int> obj3(obj);
    ob<int> obj4(std::move(obj3));
    cout << "-------" << endl;

    ob<int> obj5{ob<int>()};
    cout << "-------" << endl;
    cout << obj5.m;
}

int main() {
    fun();
    //classdummy c;
    //c.a =5;
    //cout << c.m1();
    //boost::optional<int> optvar;
    //cout << "hello" <<endl;
    return 0;
}
