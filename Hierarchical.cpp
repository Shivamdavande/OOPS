#include<iostream>
using namespace std;

class A {
    public:
        void display() {
            cout << "Class A" << endl;
        }
};

class B: public A {
    public:
        void display1() {
            cout << "Class B" << endl;
        }
};

class D: public B {
    public:
        void display() {
            cout << "Class D" << endl;
        }
};


class C: public A{

};

int main() {
   
    D obj1;
    obj1.display();

    B obj2;
    obj2.display1();
    obj2.display();

    return 0;
}