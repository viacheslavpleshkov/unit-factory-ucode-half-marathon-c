#pragma once

#include <iostream>
#include <string>

using namespace std;

class A {
public:
    int a = 1;
protected:
    int b = 2;
private:
    int c = 3;

public:
};

class B : public A {
public:
    void print() {
        cout << a << b << endl;
    }
};