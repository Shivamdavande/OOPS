#include<iostream>
using namespace std;

class A {
    public:
        void display() {
            cout << "Class A" << endl;
        }
};

class B {
    public:
        void display() {
            cout << "Class B" << endl;
        }
};

class C: public A, public B {
    public:
       
};


int main() {
   
     C obj;
    //obj.display();  Ambiguity error because both A and B have display() method

    obj.A::display(); // To resolve ambiguity we can use scope resolution operator

    return 0;
}