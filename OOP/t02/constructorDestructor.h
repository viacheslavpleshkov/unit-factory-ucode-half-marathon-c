#pragma once

#include <iostream>
#include <string>

using namespace std;

class A {
public:
    A() {
        cout << "Constructor insert class A" << endl;
    }
    ~A() {
        cout << "Destructor delete class A" << endl;
    }
};

class B : public A {
public:
    B(){
        cout << "Constructor insert class B" << endl;
    }
    ~B() {
        cout << "Destructor delete class B" << endl;
    }
};

class C : public B {
public:
    C(){
        cout << "Constructor insert class C" << endl;
    }
    ~C() {
        cout << "Destructor delete class C" << endl;
    }
    void print() {
        cout << "Class C is finish" << endl;
    }
};
