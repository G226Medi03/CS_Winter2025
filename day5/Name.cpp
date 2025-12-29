#include "Name.h"



Name::Name() {

}

Name::Name(const Name& other) : familyName(other.familyName), lastName(other.lastName) {

}
Name::Name(const string familyName, const string lastName) : familyName(familyName), lastName(lastName) {

}
