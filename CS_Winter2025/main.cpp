#include <iostream>
#include <cstdint>

using namespace std;
int main() {
	size_t kid = 3000;
	size_t adult = 10000;
	size_t senior = 5000;

	int human; 
	
	cout << "How many?\n";
	cin >> human;

	int* ages = new int[human] {};

	for (size_t i = 0; i < human; ++i) {
		cout << "Input Age :";
		cin >> *(ages + i);
	}


	//Fn:Get Total Price
	size_t total = 0; 
	{
		for (size_t i = 0; i < human; ++i) {
			int age = ages[i];

			if (age < 9) {
				total += kid;
			}
			else if (age < 65) {
				total += adult;
			}
			else {
				total += senior;
			}
		}
	}
	delete[] ages;
	ages = nullptr;

	cout << human << "분의 가격은 " << total << "입니다." << endl;


	return 0;
}