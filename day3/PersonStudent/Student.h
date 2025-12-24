#pragma once

#include "Person.h"

class Student final : public Person
{
private:
    double gpa;
public:
    Student();
    Student(int id, string name);
    Student(int id, string name, double gpa);
    void setGPA(double gpa);
    double getGPA() const;
    ~Student();
};
