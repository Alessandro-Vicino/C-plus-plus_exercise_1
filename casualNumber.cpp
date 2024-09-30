#include <iostream>
#include <string>

int secretNumber = 5;
int userNumber;
int attemps;

int main ()

{
do{
    std::cout << "guess the number: ";
    std::cin >> userNumber;

    if (userNumber == secretNumber)
    {
        std::cout << "you win" << std::endl;
    }else 
    {
        std::cout << "try again" << std::endl;
    }
} while (userNumber != secretNumber);

return 0;
}


