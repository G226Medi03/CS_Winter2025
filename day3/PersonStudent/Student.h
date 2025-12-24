#pragma once

#include "Person.h"

class Student : public Person
{
private:
    double gpa;
public:
    Student();
    void setGPA(double gpa);
    double getGPA() const;
    ~Student();
};
