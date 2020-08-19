#include "referenceOrPointer.h"

void multiplyByPointer(int* ptr, int mult) {
    if (ptr && *ptr)
        *ptr = *ptr * mult;
}

void multiplyByReference(int& ref, int mult) {
    ref = ref * mult;
}

int main(void) {
    int name = 2;

    multiplyByPointer(&name, 2);
    multiplyByReference(name, 2);
    std::cout << name;

}