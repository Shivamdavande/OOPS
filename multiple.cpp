#include<iostream>
using namespace std;

class Animal {
    public:
        string name;
        int age;

    public:
        void bark() {
            cout << "barking..." << endl;
        }
};

class Human {
    public:
        string colour;

    public:
        void Speak() {
            cout << "speaking..." << endl;
        }
};

// Multiple Inheritance

class Hybrid: public Animal, public Human {

};


int main() {

   Hybrid obj1;
   obj1.bark();
   obj1.Speak();

    return 0;
}