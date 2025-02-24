// Simple ATM Machine in C++

#include <iostream>
using namespace std;

int main() {
    int pin = 1234, balance = 10000, withdraw, deposit;
    int choice, attempt = 0;

    cout << "Welcome to ATM Machine" << endl;
    cout << "Enter your PIN: ";
    cin >> pin;

    if (pin == 1234) {
        do {
            cout << "\n1. Check Balance" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Deposit" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    cout << "Your balance is: " << balance << endl;
                    break;
                case 2:
                    cout << "Enter amount to withdraw: ";
                    cin >> withdraw;
                    if (withdraw <= balance) {
                        balance -= withdraw;
                        cout << "Withdrawal successful!" << endl;
                    } else {
                        cout << "Insufficient balance!" << endl;
                    }
                    break;
                case 3:
                    cout << "Enter amount to deposit: ";
                    cin >> deposit;
                    balance += deposit;
                    cout << "Deposit successful!" << endl;
                    break;
                case 4:
                    cout << "Goodbye!" << endl;
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } while (choice != 4);
    } else {
        while (pin != 1234 && attempt < 3) {
            cout << "Incorrect PIN. Try again: ";
            cin >> pin;
            attempt++;
        }
        if (attempt == 3) {
            cout << "Maximum attempts reached. Exiting..." << endl;
        }
    }

    return 0;
}

