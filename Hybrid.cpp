#include<iostream>
using namespace std;

class A{
    public:
        void display3() {
            cout << "Class A" << endl;
        }
};

class D{
    public:
        void display4() {
            cout << "Class D" << endl;
        }
};

class B: public A{
    public:
        void display1() {
            cout << "Class B" << endl;
        }
};

class C: public A, public D{
    public:
        void display2() {
            cout << "Class C" << endl;
        }
};

int main() {
    C obj;
    obj.display3();
    obj.display4();
    obj.display2();

    return  0;
}