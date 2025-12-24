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
        cout << "pub = " << pub << endl;   // ✅ 접근 가능 (protected로 격하)
        cout << "prot = " << prot << endl; // ✅ 접근 가능
        //cout << "priv = " << priv << endl; // ❌ private 접근 불가
    }
};

// private 상속
class DerivedPrivate : private Base {
public:
    void show() {
        cout << "pub = " << pub << endl;   // ✅ 접근 가능 (private로 격하)
        cout << "prot = " << prot << endl; // ✅ 접근 가능 (private로 격하)
        // cout << "priv = " << priv << endl; // ❌ private 접근 불가
    }
};

class DDerived : protected DerivedProtected {
public:
    void test() {
        this->pub = 1;
        this->prot = 2;
        //this->priv = 3;
    }
};
int main() {
    DerivedProtected dp;
    DerivedPrivate dv;

    // dp.pub = 10; // ❌ error: protected로 격하되어 외부에서 접근 불가
    // dv.pub = 10; // ❌ error: private로 격하되어 외부에서 접근 불가

    dp.show(); // ✅ pub, prot 출력 가능
    dv.show(); // ✅ pub, prot 출력 가능

    return 0;
}
