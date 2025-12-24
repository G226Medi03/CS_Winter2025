#pragma once 

#include <cassert>
#include <iostream>
#include <string>

#include "Person.h"

using namespace std;



Person::Person(const Person& other) : id(other.id), name(other.name) {

}

Person::Person() : name("Kim Person"), id(0) {
    cout << "[Class:Person] Default Constructor\n";
}

    Person::Person(long int id, string name) : id(id), name(name) {

        cout << "[Class:Person] Parameter Constructor\n";
    }

void Person::setId(long id)
{
    this->id = id;
    //assert(identity >= 100000000 && identity <= 999999999);
}
long Person::getId() const
{
    return this->id;
}

void Person::setName(string name) {
    this->name = name;
}

string Person::getName() const {
    return this->name;
}

Person::~Person() {
    cout << "[Class:Person] Default Destructor\n";
}
