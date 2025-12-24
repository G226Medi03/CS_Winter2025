#include <iostream>


#include "Student.h"


using namespace std;

class Vector {
    int x, y;
public:
    Vector(int x, int y) : x(x), y(y) {}

    int getX() const { return x; }
    int getY() const { return y; }

    friend Vector operator+(int scalar, const Vector& v);
};

Vector operator+(int scalar, const Vector& v) {
    return { v.getX() + scalar, v.getY() + scalar };
}

int main()
{
    Person p1;
    p1.setName("Kim Inha");
    p1.setId(123);
    
    cout << "Person 객체의 정보:\n";
    cout << "사람의 구분 번호: " << p1.getId() << '\n';
    cout << '\n';


    Person p2(333, "Hong Inha");
    cout << "p2.id :" << p2.getId() << '\n';
    cout << "p2.name :" << p2.getName() << '\n';
    cout << '\n';


    Student s;
    s.setName("Choi Inha");
    s.setId(234);
    s.setGPA(3.9);

    cout << "Student 객체의 정보:\n";
    cout << "학생의 구분 번호: " << s.getId() << '\n';
    cout << "학생의 학점: " << s.getGPA() << '\n';
    return 0;
}
