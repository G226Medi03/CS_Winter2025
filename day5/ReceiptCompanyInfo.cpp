#include "RecieptCompanyInfo.h"

ReceiptCompanyInfo::ReceiptCompanyInfo(const std::string companyName, const std::string compnayPhoneNumber) : companyName(companyName), companyphoneNumber(companyphoneNumber) {
}

std::string ReceiptCompanyInfo::getCompanyName() {
	return this->companyName;
}

std::string ReceiptCompanyInfo::getCompanyPhoneNumber() {
	return this->companyphoneNumber;
}
