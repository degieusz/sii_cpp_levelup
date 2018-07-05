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

template<typename It>
double mean(It b, It e) {
    size_t cnt;
    std::count(b,e, cnt);
    double sum = std::accumulate(b,e,0.0);
    return sum/cnt;
}

template<typename T>
void print(T c) {
    for(auto& e: c) {
        cout << e << " ";

    }
    cout << endl;

}

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

