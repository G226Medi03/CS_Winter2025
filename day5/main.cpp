#include "person.h"

int main()
{
	// 인스턴스화
	Date date1(1980, 5, 6);
	Person person1("111111456", date1, Name("Kim", "Inha"));
	Date  date2(1978, 4, 23);
	Person person2(345332446, date2, Name("Park ", "Inha"));
	// 출력
	person1.print();
	person2.print();
	return 0;
}
