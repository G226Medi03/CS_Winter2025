#pragma once 

#include <cassert>
#include <iostream>

#include "Student.h"


Student::Student() : gpa(0) {
    this->setName("Kim Student");
    cout << "[Class:Student] Default Costructor\n";
}

Student::Student(int id, string name, double gpa = 3.5) : Person(id, name), gpa(gpa) {

}

void Student::setGPA(double newGp)
{
    assert(newGp>= 0 && newGp <= 4.5);
    this->gpa = newGp;
}
double Student::getGPA() const
{   
    return this->gpa;
}


Student::~Student() {
    cout << "[Class:Student] Default Destructor\n"; 
}
