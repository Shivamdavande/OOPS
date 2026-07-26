#include<iostream>
using namespace std;

class Hero {
    public:

        Hero() {
            cout << "Call Constructor" << endl;
        }
    };

int main() {

    cout << "Creating suresh" << endl;
    Hero suresh;
    cout << "After creating suresh" << endl;
    
}