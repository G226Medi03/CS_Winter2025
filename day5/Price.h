#pragma once

struct Price {
private:
	double _price;

public:
	Price(double price);

	double getPrice() const;
};
