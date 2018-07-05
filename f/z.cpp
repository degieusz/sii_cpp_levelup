#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"
#include "iprint.h"
#include "print.h"
#include <vector>
#include <list>
#include <deque>
//#include "complicated.h"

//wyjatek nie powinien byc rzucony w destruktorze, jesli jest to nie powinien wychodzic poza destruktor/obsluga tam/
//stack unwinding
using namespace std;

template<typename C>
void printC(C& v)
{
    for( auto& e : v) {
        cout << e.m << " ";
    }
    cout << endl;
}

void vectExe() {
    std::vector<ob<string>> v;
    cout << "vec\n";
    v.reserve(5);
    cout << "reserve\n";

    v.push_back(ob<string>("a"));
    v.emplace_back("z");
    v.push_back(ob<string>("b"));
    v.push_back(ob<string>("c"));

    cout << " erase " <<endl;
    v.erase(begin(v));

    cout << " erase " <<endl;

    printC(v);

    //cout << "--------------- ---- ---- sortuj\n";
    //std::sort(begin(v), end(v),
        //[](ob<string>& a, ob<string>& b)
            //{
                //return a.m < b.m;
            //});

    //printC(v);
}

//template<typename C>
//void sort(C& v) {
    //std::sort(begin(v), end(v),
        //[](ob<string>& a, ob<string>& b)
            //{
                //return a.m < b.m;
            //});

//}

void listE() {
    std::list<ob<string>> l;
    l.emplace_back("a");
    l.emplace_back("b");
    l.push_back(ob<string>("d"));
    l.push_back(ob<string>("c"));
    cout << "pop front\n";
    l.pop_front();
    cout << "pop front\n";
    printC(l);
}

void vectDeque() {
    std::deque<ob<string>> v;
    cout << "vec\n";

    v.push_back(ob<string>("a"));
    v.emplace_back("z");
    v.push_back(ob<string>("b"));
    v.push_back(ob<string>("c"));
    cout << "pop front\n";
    v.pop_front();
    cout << "pop front\n";

    v.erase(begin(v));

    cout << " erase " <<endl;

    printC(v);

    //cout << "--------------- ---- ---- sortuj\n";
    //std::sort(begin(v), end(v),
        //[](ob<string>& a, ob<string>& b)
            //{
                //return a.m < b.m;
            //});

    //printC(v);
}
int main()
{
    vectDeque();

    return 0;
}

