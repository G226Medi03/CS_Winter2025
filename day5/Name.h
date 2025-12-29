#pragma once

#include <string>
using namespace std;
struct Name {
private:
	string familyName;
	string lastName;

	Name();
public:
	Name(const Name& other);
	Name(const string familyName, const string lastName);
};
