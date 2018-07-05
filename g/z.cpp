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
#include <chrono>

using namespace std;
//unordered map dla np ksiazki tel bo duzo porownan dlugich stringw/bo has jest szybszy od porownania stringa
//unordered mapa dla 10 elementow jest overhead!

/*
 priority queue jest na wektorze kiedy robi sortowanie
 dlaczego nie na deque?

 * */

//podzielne przez 2,3,5
//0..10000

bool isPrime(int k) {
    if(k < 2) {
        return false;
    }
    for(int i = 2; i*i<=k ; ++k) {
        if(k % i == 0) {
            return false;
        }
    }
    return true;
}

std::vector<int> getPrimes(int k=20) {
    std::vector<int> out;
    for (int i=0; i<=k; ++i) {
        if(isPrime(i)) {
            out.push_back(i);
        }
    }
}

int main()
{
    using namespace std::chrono;
    auto ts1 = system_clock::now();
    auto th1= high_resolution_clock::now();
    std::map<int, int> m;
    //auto primes = getPrimes(20);
    //for(auto e: primes) {
        //cout << e << " ";

    //}
    //cout << endl;


    for(int i=0; i <=100000; ++i) {
        if(i % 2 == 0) {
            ++m[2];
        }
        if(i % 3 == 0) {
            ++m[3];
        }
        if(i % 5 == 0) {
            ++m[5];
        }
        if(i %37) {
            ++m[30];
        }
    }
    auto ts2 = system_clock::now();
    auto th2= high_resolution_clock::now();
    //cout<< "duration  :" << duration_cast<nanoseconds>(ts2-ts1).count() <<endl;
    //cout<< "duration h:" << duration_cast<nanoseconds>(th2-th1).count() <<endl;

    cout<< "duration  :" << duration_cast<microseconds>(ts2-ts1).count() <<endl;
    cout<< "duration h:" << duration_cast<microseconds>(th2-th1).count() <<endl;
    //cout<< "duration h:" << duration_cast<milliseconds>(th2-th1).count() <<endl;
    for(auto & e: m) {
        cout << e.first << " " << e.second<< endl;
    }
    //??
    //cout << " " << m[0] << " ";
    //cout << " " << m[1] << " ";
    //cout << " " << m[5] << " ";

    return 0;
}

