#include<iostream>
using namespace std;

class Loading {

    public:
    void saySomething() {
        cout << "Loading..." << endl;
    }

    int saySomething(string str) {
        cout << "Loading..." << endl;
        return 0;
    }

    void saySomething(string str) {
        cout << "Loading..." << endl;
    }

};


int main ()  {


    Loading obj;
    obj.saySomething(); 


    return 0;
}