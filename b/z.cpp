#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"
#include "iprint.h"
#include "print.h"
#include <vector>

using namespace std;

template<typename T>
void print(){
    T el;
    el.print();
}

int main() {
    std::vector<iprint*> vec;
    vec.push_back(new print1());
    vec.push_back(new print2());
    vec.push_back(new print3());

    for (auto& e : vec) {
        e->print();
        cout << " : " << e << endl;
    }

    iprint** printers= new iprint*[3];
    printers[0] = new print1();
    printers[1] = new print2();
    printers[2] = new print3();

    cout <<"DDD";
    for(int i = 0; i <3; ++i) {
        printers[i]->print();
        delete printers[i];
    }
    delete []printers;
    cout << endl;


    cout <<"DDD";
    cout << endl;
    print<print1>();
    print<print2>();

    cout <<"DDD333";
    cout << endl;

    std::vector<std::function<void()>> funVec;
    funVec.emplace_back(print<print1> );
    funVec.push_back(std::bind(print<print2> ));
    funVec.push_back([](){print<print3>();});

    for(auto& f : funVec) {
        f();
    }

    cout << endl;
    cout <<"DDD444";
    cout << endl;

    return 0;
}

