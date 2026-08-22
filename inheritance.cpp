#include<iostream>
using namespace std;

class Student {

    protected:
       int height;
    public:
       int age;
       int weight;
       int height;

    public:
       int getAge() {
          return this->age;
       }

       int setWeight(int w) {
          this->weight = w;
       }
};

class Clg: private Student {

    public:
        string colour;

    void sleep() {
        cout << "student are sleeping" << endl;
    }
    
    int getHeight() {
        return this->height;
    }

};


int main() 

    Clg test;
    // cout << test.age << endl;
    // cout << test.weight << endl;
    test.height;
    // cout << test.height << endl;

    cout << test.colour << endl;
    test.sleep();

    cout << "kee haal haa badshaoo" << endl;
}