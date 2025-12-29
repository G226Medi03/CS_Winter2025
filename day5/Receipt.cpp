#include "Reciept.h"


#include <iostream>
Receipt::Receipt(int id) : receiptId(id), totalPrice(0) {

}


Receipt::~Receipt() {

}

void Receipt::add(int quantity, Price price) {
	this->totalPrice += price.getPrice() * quantity;
}

void Receipt::print() {
	std::cout << "Receipt { recieptId :" << this->receiptId << ", totalPrice :" << this->totalPrice << "}\n";
}
