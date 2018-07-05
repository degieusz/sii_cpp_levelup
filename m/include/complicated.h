#pragma once

#include "ob.h"
#include <memory>

using namespace std;

ob<std::string> glo{"global"};

class complicated {
public:
    complicated():
        obj2(new ob<std::string>("unique ptr"))
    {
        obj1 = new ob<std::string>("raw ptr");
        //throw 20;
    }

    ~complicated() {
        throw 30;
        cout << "~complicated()";
        delete obj1;
    }

private:
    ob<std::string> obj0{"member normal"};
    ob<std::string>* obj1;
    std::unique_ptr<ob<std::string>> obj2;
    static ob<std::string> obj3;
    const static ob<std::string> obj4;
};
ob<std::string> complicated::obj3{"static"};
const ob<std::string> complicated::obj4("const static");
