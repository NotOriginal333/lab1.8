#include "Goods.h"

#include <iostream>

void Goods::Init(Date nad, Date oform, std::string n, int c, int a, int nom) {
    dateNad.initDate(nad);
    dateOform.initDate(oform);
    name = n;
    cost = c;
    amount = a;
    nomer = nom;
}

void Goods::setName(const std::string& n) {
    name = n;
}

void Goods::setCost(int c) {
    cost = c;
}

void Goods::setAmount(int a) {
    amount = a;
}

void Goods::setNomer(int nom) {
    nomer = nom;
}

int Goods::calc() {
    return cost * amount;
}

std::string Goods::toString() {
    return "Name: " + name + ", Cost: " + std::to_string(cost) + ", Amount: " + std::to_string(amount) +
        ", Nomer: " + std::to_string(nomer);
}

void Goods::Read() {
    std::cout << "Enter name: ";
    std::cin >> name;
    std::cout << "Enter cost: ";
    std::cin >> cost;
    std::cout << "Enter amount: ";
    std::cin >> amount;
    std::cout << "Enter nomer: ";
    std::cin >> nomer;
    std::cout << "Enter dateNad: ";
    dateNad.Read();
    std::cout << "Enter dateOform: ";
    dateOform.Read();
}

void Goods::Display() const {
    std::cout << "Name: " << name << ", Date Nad: ";
    dateNad.Display();
    std::cout << ", Date Oform: ";
    dateOform.Display();
    std::cout << ", Cost: " << cost << ", Amount: " << amount << ", Nomer: " << nomer << std::endl;
}

void Goods::Date::initNum(unsigned int y, unsigned int m, unsigned int d) {
    year = y;
    month = m;
    day = d;
}

void Goods::initNum(unsigned int y, unsigned int m, unsigned int d) {
    dateOform.initNum(y, m, d);
}

void Goods::Date::initStr(string dateStr) {
    sscanf_s(dateStr.c_str(), "%d.%d.%d", &year, &month, &day);
}

void Goods::initStr(string dateStr) {
    dateNad.initStr(dateStr);
}

void Goods::Date::initDate(const Date& other) {
    year = other.year;
    month = other.month;
    day = other.day;
}

bool Goods::Date::isVisok() {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool Goods::Date::isBefore(const Date& other) {
    if (year < other.year)
        return true;
    else if (year == other.year && month < other.month)
        return true;
    else if (year == other.year && month == other.month && day < other.day)
        return true;
    return false;
}

bool Goods::Date::isAfter(const Date& other) {
    if (year > other.year)
        return true;
    else if (year == other.year && month > other.month)
        return true;
    else if (year == other.year && month == other.month && day > other.day)
        return true;
    return false;
}

bool Goods::Date::isNow(const Date& other) {
    return year == other.year && month == other.month && day == other.day;
}

void Goods::Date::Read() {
    std::cout << "Enter year, month and day: ";
    std::cin >> year >> month >> day;
}

void Goods::Date::Display() const {
    std::cout << year << "." << month << "." << day;
}