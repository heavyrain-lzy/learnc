#include "test.h"

#include <iostream>
#include <vector>

UtilsMap* UtilsMap::m_instance = nullptr;

class test {
public:
    test(int a, int b)
    {
        UtilsMap::GetInstance()->AddItem(a);
        std::cout << "construct the data" << std::endl;
    }
};

static test a_test(1, 2);