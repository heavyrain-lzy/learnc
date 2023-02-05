#include <iostream>
#include <tuple>
#include <vector>

#include "test.h"
using namespace std;

template <typename T, int = 3> class Registrar_;

template <typename T>
class Registrar_<T, 1> {
    T a{3, 4};
};

template <typename T>
class Registrar_<T, 2> {
    T a{3};
};

int main()
{
    // UtilsMap::GetInstance();
    cout << "UtilsMap: " << UtilsMap::GetInstance()->GetItem()[0] << endl;
    return 0;
}