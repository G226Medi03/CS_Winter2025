

#include "person.h"

#include <cassert>
#include <iostream>
#include <string>


 // 생성자
Person::Person(long id, Date bd, Name name)
	: id(id), birthDate(bd), name(name)
{
	assert(id > 111111111 && id < 999999999);
}

Person::Person(string id, Date birthDate, const Name name) : id(stoi(id)), birthDate(birthDate), name(name) {
	assert(id > "111111111" && id < "999999999 ");
}
// 소멸자
Person::~Person()
{
}
// print 함수
void Person::print() const
{
	cout << "주민등록번호: " << id << endl;
	cout << "생년월일: ";
	birthDate.print();
	cout << endl << endl;
}
