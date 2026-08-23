#include<iostream>
using namespace std;



//Function Overloading
class Loading {

    public:
    void saySomething() {
        cout << "Loading..." << endl;
    }

    // int saySomething(string str) {
    //     cout << "Loading..." << endl;
    //     return 0;
    // }

    void saySomething(string str) {
        cout << "Loading..." << endl;
    }

};


//OPerator Overloading
class Loading2 {

    public:
    int a;
    int b;

    public:

    int add() {
        return a+b;
    }

    void operator+ (Loading2 &obj) {
        int value1 = this -> a;
        int value2= obj.a;
        cout << "output " << value1 - value2 << endl;
    }

    void operator() () {
        cout << "Hello I am using () operator overloading" << this -> a <<endl;
    }
};


//RUN_TIME POLYMORPHISM
class Animal {

    public:

    void speak() {
        cout << "Speaking" << endl;
    }
};

class Dog: public Animal {
    
    public:

    void speak() {
        cout << "Barking" << endl;
    }
};


int main ()  {

    Dog obj;
    obj.speak(); // It will call the speak method of Dog class because it is overriding the speak method of Animal class


    // Loading obj;


    // Loading2 obj1, obj2;

    // obj1.a = 10;
    // obj2.a = 5;

    // obj1 + obj2;

    // obj1();

    return 0;
}