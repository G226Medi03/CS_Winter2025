#include "Price.h"


Price::Price(double price) : _price(price) {

}

double Price::getPrice() const {
	return this->_price;
}
