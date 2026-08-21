#include<iostream>
using namespace std;

class Hero {
private:
    int age;
public:

    Hero() {
        cout << "Call Constructor" << endl;
    }

    Hero(int age) {
        cout << "This " << this << endl;
        this->age = age;
    }
};
  
int main() {

    cout << "Creating suresh" << endl;
    //static object creation
    Hero suresh(21);
    cout << "Address of suresh " << &suresh << endl;
  
    cout << "After creating suresh" << endl;

    // Dynamic object creation
    Hero *h = new Hero();
    
}