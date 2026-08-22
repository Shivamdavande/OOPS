#include<iostream>
using namespace std;

class Animal {
    public:
        string name;
        int age;

    public:
        void eat() {
            cout << "eating..." << endl;
        }
};

class Cat: public Animal {
   
};

class pushi: public Cat {

};

int main() {

    pushi t1;
    t1.eat();


    return 0;
}