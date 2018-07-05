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

int main()
{
    using namespace std::chrono;
    vector<int> v(10000, 0);
    std::iota(begin(v), end(v), 0);
    //std::reverse(begin(v), end(v));

    std::vector<int> times;
    std::vector<int> times1;
    for(int i=0; i<100 ; ++i) {

        random_shuffle(begin(v), end(v));
        std::vector<int> vcpy(v);
        auto th1= high_resolution_clock::now();
        sort(begin(v), end(v));
        auto th2= high_resolution_clock::now();
        times.push_back(duration_cast<microseconds>(th2-th1).count());


        auto th11= high_resolution_clock::now();
        make_heap(begin(vcpy), end(vcpy));
        sort_heap(begin(vcpy), end(vcpy));

        auto th12= high_resolution_clock::now();
        times1.push_back(duration_cast<microseconds>(th12-th11).count());
    }
    cout << "mean 1:" << mean(begin(times), end(times))<< endl;
    cout << "mean 2:" << mean(begin(times1), end(times1))<< endl;

    //sort
    //make heap sort heap
    //cout << mean(begin(v), end(v));

    return 0;
}

