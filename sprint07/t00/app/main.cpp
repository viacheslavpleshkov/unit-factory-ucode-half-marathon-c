#include <string>
#include "src/Vector.h"
#include <vector>
#include <cassert>

using namespace CBL;

template<typename T>
void printVector(T &container) {
    for (const auto &item : container) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

static bool CheckConstructors() {
    {
        Vector<int> v = {1, 2, 3};
        Vector<int> v1({1, 2, 3});
        printVector(v);
        printVector(v1);
    }
    {
        Vector<std::string> v = {"one", "two", "tree"};
        Vector<std::string> v1({"one", "two", "tree"});
        printVector(v);
        printVector(v1);
    }
    {
        Vector<int> v(1);
        printVector(v);
    }
    {
        Vector<int> v(10, 1);
        printVector(v);
    }
    {
        Vector<std::string> v(10, "one");
        printVector(v);
    }
    {
        Vector<int> v = {1, 2, 3};
        Vector<int> v1(v);
        Vector<int> v2(v.begin(), v.end());
    }
    {

    }
    return true;
}



int main(void) {
    CheckConstructors();
    return 0;
}
