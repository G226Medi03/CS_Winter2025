#pragma once

#include <string>


using namespace std;

class Person
{
private:
    long id;
    string name;

    Person(const Person& other);
public:
    Person();
    Person(long int id, string name);
    void setId(long identity);
    long getId() const;

    void setName(string name);
    string getName() const;

    ~Person();
};
