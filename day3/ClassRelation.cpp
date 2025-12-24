#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};

// protected 상속
class DerivedProtected : protected Base {
public:
    void show() {
        cout << "pub = " << pub << endl;   
        cout << "prot = " << prot << endl; 
        //cout << "priv = " << priv << endl; //  불가
    }
};

// private 상속
class DerivedPrivate : private Base {
public:
    void show() {
        cout << "pub = " << pub << endl;   
        cout << "prot = " << prot << endl; 
        // cout << "priv = " << priv << endl; //  불가
    }
};

class DDerived : protected DerivedProtected {
public:
    void test() {
        this->pub = 1;
        this->prot = 2;
        // this->priv = 3; //  불가
    }
};
int main() {
    DerivedProtected dp;
    DerivedPrivate dv;

    // dp.pub = 10; // 불가
    // dv.pub = 10; // 불가

    dp.show();  
    dv.show(); 

    return 0;
}
