
#include <iostream>

#include "Student.h"
#include "Vector.h"

using namespace std;


Person p3(300, "Global Inha");

int main()
{
    Person* p1 = new Person();
    p1->setName("Kim Inha");
    p1->setId(123);
    
    cout << "Person 객체의 정보:\n";
    cout << "사람의 구분 번호: " << p1->getId() << '\n';
    cout << '\n';


    delete p1;
    p1 = nullptr;

    Person p2(333, "Hong Inha");
    cout << "p2.id :" << p2.getId() << '\n';
    cout << "p2.name :" << p2.getName() << '\n';
    cout << '\n';

    p3.setId(300);
    p3.setName("Global Inha");

    cout << "p3.id :" << p3.getId() << '\n';
    cout << "p3.name :" << p3.getName() << '\n';
    cout << '\n';


    Student s;
    s.setName("Choi Inha");
    s.setId(234);
    s.setGPA(3.9);

    cout << "Student 객체의 정보:\n";
    cout << "학생의 구분 번호: " << s.getId() << '\n';
    cout << "학생의 학점: " << s.getGPA() << '\n';
    

    Person* p4 =  new Student(s);


    delete p4;
    p4 = nullptr;

    return 0;
}
