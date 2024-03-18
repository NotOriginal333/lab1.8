#pragma once
#include <iostream>
#include <string>

using namespace std;

class Goods
{
	class Date
	{
		unsigned int year;
		unsigned int month;
		unsigned int day;
	public:
		void initNum(unsigned int, unsigned int, unsigned int);
		void initStr(string);
		void initDate(const Date&);

		bool isVisok();
		bool isBefore(const Date&);
		bool isAfter(const Date&);
		bool isNow(const Date&);

		void setYear(unsigned int y) { year = y; };
		void setMonth(unsigned int m) { month = m; };
		void setDay(unsigned int d) { day = d; };

		unsigned int getYear() const { return year; };
		unsigned int getMonth() const { return month; };
		unsigned int getDay() const { return day; };

		void Read();
		void Display() const;
	};
	Date dateNad;
	Date dateOform;
	string name;
	int cost;
	int amount;
	int nomer;
public:
	void Init(Date, Date, string, int, int, int);

	Date getDateNad() const { return dateNad; };
	Date getDateOform() const { return dateOform; };
	string getName() const { return name; };
	int getCost() const { return cost; };
	int getAmount() const { return amount; };
	int getNomer() const { return nomer; };

	void setDateNad(const Date&);
	void setDateOform(const Date&);
	void setName(const string&);
	void setCost(int);
	void setAmount(int);
	void setNomer(int);

	int calc();

	string toString();

	void Read();
	void Display() const;

	void initNum(unsigned int y, unsigned int m, unsigned int d);
	void initStr(string dateStr);
};

