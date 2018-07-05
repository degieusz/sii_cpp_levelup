#include <iostream>
#include "ob.h"
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <memory>
#include <algorithm>
#include <numeric>
#include <chrono>

#include <boost/range/adaptors.hpp>
#include <boost/range/algorithm.hpp>
#include <iostream>
#include <vector>

//uzywaj release do benchmarku bo dziala duzo szybciej
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
    std::vector<int> vec;
    boost::copy( vec | boost::adaptors::reversed,
                 std::ostream_iterator<int>(std::cout) );

    return 0;
}

