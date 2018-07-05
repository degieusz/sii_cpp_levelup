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

using namespace std;

int main()
{
    shared_ptr<ob<string>> s(new ob<string>("aaa"));
    s = make_shared<ob<string>>("bbb");
    s.reset(new ob<string>("ccc"));
    auto e(s);

    return 0;
}

