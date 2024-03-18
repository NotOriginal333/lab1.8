#include <iostream>
#include "Goods.h"

int main() {
    Goods item;
    item.initNum(2024, 3, 1);
    item.initStr("2000.12.31");

    std::cout << "Today's date: ";
    item.getDateNad().Display();
    std::cout << std::endl;

    std::cout << "Date of birth: ";
    item.getDateOform().Display();
    std::cout << std::endl;

    std::cout << "Is today a leap year? " << (item.getDateOform().isVisok() ? "Yes" : "No") << std::endl;
    std::cout << "Is today before date of birth? " << (item.getDateOform().isBefore(item.getDateNad()) ? "Yes" : "No") << std::endl;
    std::cout << "Is today after date of birth? " << (item.getDateOform().isAfter(item.getDateNad()) ? "Yes" : "No") << std::endl;

    item.Read();

    std::cout << "\nItem information:" << std::endl;
    std::cout << "Name: " << item.getName() << std::endl;
    std::cout << "Cost: " << item.getCost() << std::endl;
    std::cout << "Amount: " << item.getAmount() << std::endl;
    std::cout << "Nomer: " << item.getNomer() << std::endl;
    std::cout << "Date Nad: ";
    item.getDateNad().Display();
    std::cout << std::endl;
    std::cout << "Date Oform: ";
    item.getDateOform().Display();
    std::cout << std::endl;

    std::cout << "Total cost: " << item.calc() << std::endl;

    return 0;
}
