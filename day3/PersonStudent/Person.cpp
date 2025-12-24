#pragma once 

#include <cassert>
#include <iostream>
#include <string>

#include "Person.h"

using namespace std;



Person::Person() : name("Kim Person"), id(0) {
    cout << "[Class:Person:" << this->name <<"] Default Constructor\n";
}

Person::Person(long int id, string name) : id(id), name(name) {

    cout << "[Class:Person:" << this->name << "] Parameter Constructor\n";
}

Person::Person(const Person& other) : id(other.id), name(other.name) {
    cout << "[Class:Person:" << this->name << "] Copy Constructor\n";
}

void Person::setId(long id)
{
    this->id = id;
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
    cout << "[Class:Person:" << this->name << "] Destructor\n";
}
