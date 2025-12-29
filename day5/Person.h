#pragma once

#include "date.h"
#include "Name.h"

class Person
{
private:
    long id;
    Date birthDate;
    Name name;
public:
    Person(long identity, Date birthDate, const Name name);

    Person(long identity, Date birthDate, const string familyName, const string lastName);
    Person(string identity, Date birthDate, const Name name);
    ~Person();
    void print() const;
};
