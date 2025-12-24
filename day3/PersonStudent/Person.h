#pragma once

#include <string>


using namespace std;

class Person
{
private:
    long id;
    string name;

   
public:
    Person();
    Person(long int id, string name);
    Person(const Person& other);

    void setId(long identity);
    long getId() const;

    void setName(string name);
    string getName() const;

    ~Person();
};
