#include <iostream>
#include <string>
#include <cctype>
using namespace std;

double withdraw(double balance)
{
    double amount;

    cout << "\n\t>> How much would you like to withdraw? ";
    cin >> amount;

    return (balance - amount);
}//end of withdraw

double deposit(double balance)
{
    double amount;

    cout << "\n\t>> How much would you like to deposit? ";
    cin >> amount;

    return (balance + amount);
}//end of deposit

void view(double b)
{
    cout << "\n- Your current balance is : "
        << b << " S.R\n";
}//end of view

void view(string n, double old_b, double new_b)
{
    cout << "\n\tCustomer name : " << n
        << "\n\t- Old Balance: " << old_b << " S.R"
        << "\n\t- New Balance: " << new_b << " S.R"
        << "\n\t************************************\n";
}//end of view

char menu()
{
    char choice;

    cout << "\n>> Please choose a task:"
        << "\n\t w - withdraw"
        << "\n\t d - deposit"
        << "\n\t e - exit"
        << "\n\t >> ";

    cin >> choice;

    return choice;
}//end of menu

int main()
{
    string customer_name;
    char choice;

    double balance = 10000, new_balance = 0;

    cout << "\n\t*** Bank System ***\n\n";

    cout << ">> Please type your name: ";
    cin >> customer_name;

    do {
        view(balance);  //view current customer's balance

        choice = tolower(menu());

        switch (choice)
        {
        case 'w':
            new_balance = withdraw(balance);
            break;

        case 'd':
            new_balance = deposit(balance);
            break;

        case 'e':
            cout << "\nThanks for using our system..\n";
            break;

        default:
            cout << "\nError: Invalid choice!!\n";

        }//end of switch

        if (choice == 'w' || choice == 'd')
        {
            view(customer_name, balance, new_balance);
            balance = new_balance;
        }//end if

    } while (choice != 'e');

    return 0;
}//end of main
