
/* Making an application that prints the price of making Bus card. It asks for age to check for student discount

The prise list in Euro as follows: Adults :5 €,Children (0-18) : 2.50 €, Seniors (60+):2.50 €, Students: 2.50 € */

#include <iostream>

int main()
{
    int age;
    char student;

    float price = 4.60;

    std::cout << "Enter age: \n";
    std::cin >> age;

    std::cout << "Are you a student [y/n]\n";
    std::cin >> student;

    if (student == 'y' || age <= 16 || age >= 65)
        price = 2.50;

    std::cout << "Application price is " << price << "€\n";
}
