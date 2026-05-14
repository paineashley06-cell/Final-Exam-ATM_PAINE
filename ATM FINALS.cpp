#include <iostream>
using namespace std;

class Account {

public:

    int id;
    string accName;
    int pin;
    double balance;

    // CHECK BALANCE
    void checkbal() {

        cout << "\n===== YOUR BALANCE =====" << endl;
        cout << "Account Name: " << accName << endl;
        cout << "Current Balance: " << balance << endl;
    }

    // DEPOSIT MONEY
    void depositMoney() {

        double amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Deposit successful!" << endl;
        cout << "Updated Balance: " << balance << endl;
    }

    // WITHDRAW MONEY
    void withdraw() {

        double amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if(amount > balance) {

            cout << "Insufficient balance!" << endl;
        }
        else {

            balance -= amount;

            cout << "Withdrawal successful!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    // CHANGE PIN
    void changePin() {

        int oldpin, newpin;

        cout << "\nEnter current PIN: ";
        cin >> oldpin;

        if(oldpin == pin) {

            cout << "Enter new PIN: ";
            cin >> newpin;

            pin = newpin;

            cout << "PIN changed successfully!" << endl;
        }
        else {

            cout << "Incorrect PIN!" << endl;
        }
    }

    // ATM MENU
    void menu() {

        int choice;

        do {

            cout << "\n====== ATM MENU ======" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Change PIN" << endl;
            cout << "5. Logout" << endl;

            cout << "\nEnter choice: ";
            cin >> choice;

            if(choice == 1) {

                checkbal();
            }
            else if(choice == 2) {

                depositMoney();
            }
            else if(choice == 3) {

                withdraw();
            }
            else if(choice == 4) {

                changePin();
            }
            else if(choice == 5) {

                cout << "\nLogged out successfully!" << endl;
            }
            else {

                cout << "\nInvalid choice!" << endl;
            }

        } while(choice != 5);
    }
};
    int main() {

    Account myacc[10];

    myacc[0].id = 1;
    myacc[0].accName = "Ashley";
    myacc[0].pin = 1234;
    myacc[0].balance = 5000;

    myacc[1].id = 2;
    myacc[1].accName = "Analyn";
    myacc[1].pin = 1894;
    myacc[1].balance = 3000;

    myacc[2].id = 3;
    myacc[2].accName = "Analiza";
    myacc[2].pin = 2639;
    myacc[2].balance = 7000;

    myacc[3].id = 4;
    myacc[3].accName = "Teresita";
    myacc[3].pin = 3673;
    myacc[3].balance = 10000;

    myacc[4].id = 5;
    myacc[4].accName = "Jose";
    myacc[4].pin = 4701;
    myacc[4].balance = 6000;

    myacc[5].id = 6;
    myacc[5].accName = "Francis";
    myacc[5].pin = 5730;
    myacc[5].balance = 8000;

    myacc[6].id = 7;
    myacc[6].accName = "Gleza";
    myacc[6].pin = 84006;
    myacc[6].balance = 4500;

    myacc[7].id = 8;
    myacc[7].accName = "Glaiza";
    myacc[7].pin = 8907;
    myacc[7].balance = 12000;

    myacc[8].id = 9;
    myacc[8].accName = "Arlyn";
    myacc[8].pin = 7492;
    myacc[8].balance = 9000;

    myacc[9].id = 10;
    myacc[9].accName = "Alliyah Jade";
    myacc[9].pin = 1047;
    myacc[9].balance = 15000;


    string name;
    int pin;

    do {

        cout << "\n====== ATM LOGIN ======" << endl;

        cout << "Enter Account Name: ";
        cin >> name;

        cout << "Enter PIN: ";
        cin >> pin;

        for(int i = 0; i < 10; i++) {

            if(myacc[i].accName == name && myacc[i].pin == pin) {
                cout << "\nInvalid Account Name or PIN!" << endl;
            }
        }

    } while(true);

    return 0;
}

