#include <iostream>
#include <boost/optional.hpp>
#include "llib.h"
#include "ob.h"
#include "iprint.h"
#include "print.h"
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <memory>
#include <algorithm>
#include <numeric>
#include <chrono>

using namespace std;


template<typename T>
void print(T c) {
    for(auto& e: c) {
        cout << e << " ";

    }
    cout << endl;

}

//booost irange ( 0,6);
int main()
{
    using namespace std::chrono;
    vector<int> v(100, 0);
    std::iota(begin(v), end(v), 0);
    print(v);

    std::sort(begin(v), end(v), [](int a, int b){return a>b;});
    print(v);

    return 0;
}

