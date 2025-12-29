#pragma once


#include "Price.h"
#include "RecieptCompanyInfo.h"
struct Receipt {
private:
	ReceiptCompanyInfo companyInfo;
	double totalPrice;
	int receiptId;

public: 
	Receipt(const std::string companyName, const std::string companyPhoneNumber, int receiptId);
	~Receipt();

	void add(int quantity, Price price);
	void print();
};
