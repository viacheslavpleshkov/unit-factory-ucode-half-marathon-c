#include <string>
#include "src/Vector.h"
#include <vector>
#include <cassert>

using namespace CBL;

template<typename T>
void Print(T &container) {
    for (const auto &item : container) {
        std::cout << item << " ";
    }
    std::cout << std::endl;
}

static bool CheckConstructors() {
    Vector<std::string> v;
    v.push_back("1ssss");
    v.push_back("hello");
    v.resize(10, "ss");
    Print(v);
    return true;
}



int main(void) {
    CheckConstructors();
    return 0;
}
