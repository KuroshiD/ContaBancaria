#pragma once
#include <iostream>
#include <ctime>

struct Date {
	int year;
	int month;
	int day;
};

Date getCurrentDate() {
	Date currentDate;

	std::time_t now = std::time(nullptr);
	std::tm* timeinfo = std::localtime(&now);

	currentDate.year = 1900 + timeinfo->tm_year;
	currentDate.month = 1 + timeinfo->tm_mon;
	currentDate.day = timeinfo->tm_mday;

	return currentDate;
}

class Transacao
{
private:
	std::string transactionType;
	float transactionValue;
	Date transactionDate = getCurrentDate();

	
};

