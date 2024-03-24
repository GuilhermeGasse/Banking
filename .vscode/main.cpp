#include <iostream>
#include <iomanip>

void show(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "-------------------\n";
        std::cout << "Enter your choice: \n";
        std::cout << "-------------------\n";
        std::cout << "1. Show balance Account\n";
        std::cout << "-\n";
        std::cout << "2. Deposit money\n";
        std::cout << "-\n";
        std::cout << "3. Withdraw money\n";
        std::cout << "-\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        switch (choice)
        {
        case 1:
            show(balance);
            break;
        case 2:
            balance += deposit();
            show(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            show(balance);
            break;
        case 4:
            std::cout << "Thanks! \n";
            break;
        default:
            std::cout << "Invalid choice \n";
           
        }

    } while (choice != 4);
    return 0;
}
// methods
void show(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit()
{
    double amount = 0;
    std::cout << "Enter amount to be deposit: \n";
    std::cin >> amount;

    if (amount > 0)
        return amount;
    else
    {
        std::cout << "Its Nothing. \n";
        return 0;
    }
}

double withdraw(double balance)
{
    double amount = 0;

    std::cout << "Enter amount to be withdraw: \n";
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient founds. \n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "Thats not valid. \n";
    }
    else
    {
        return amount;
    }
}