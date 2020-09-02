#pragma once

#include <iostream>
#include <string>

using namespace std;

class A {
public:
    virtual const char* getName() {
        return "A";
    }
};

class B : public A {
    virtual const char* getName() override final {
        return "B";
    }

};

//class C : public B {
//public:
//    virtual const char* getName() override {
//        return "C";
//    }
//};

class AA {
public:
    virtual const char* getName() { return "A"; }
};

class BB final : public AA {
public:
    virtual const char* getName() override { return "B"; }
};

//class CC : public BB {
//public:
//    virtual const char* getName() override { return "C"; }
//};