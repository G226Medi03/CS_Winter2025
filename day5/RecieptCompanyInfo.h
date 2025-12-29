#pragma once

#include <string>
struct ReceiptCompanyInfo {
private:
	std::string companyName;
	std::string companyphoneNumber;
public:
	ReceiptCompanyInfo(const std::string companyName, const std::string compnayPhoneNumber) : companyName(companyName), companyphoneNumber(companyphoneNumber);

	std::string getCompanyName();
	std::string getCompanyPhoneNumber();
};
