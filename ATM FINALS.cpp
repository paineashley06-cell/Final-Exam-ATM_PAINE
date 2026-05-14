#include <iostream>
using namespace std;

class Account {

public:

    int id;
    string accName;
    int pin;
    double balance;

    void checkbal() {

        cout << "\n=== YOUR BALANCE ===" << endl;
        cout << "Account Name : " << accName << endl;
        cout << "Current Balance: " << balance << endl;
    }

    
    void depositMoney() {

        double amount;

        cout << "\nEnter amount to Deposit : ";
        cin >> amount;

        balance += amount;

        cout << "Money added successfully!" << endl;
        cout << "New Balance: " << balance << endl;
    }

    void withdraw() {

        double amount;

        cout << "\nEnter amount to withdraw: ";
        cin >> amount;

        if(amount > balance) {

            cout << "Sorry, you don't have enough balance." << endl;
        }
        else {

            balance -= amount;

            cout << "Withdrawal completed successfully!" << endl;
            cout << "Remaining Balance: " << balance << endl;
        }
    }

    void changePin() {

        int oldpin, newpin;

        cout << "\nEnter your current PIN: ";
        cin >> oldpin;

        if(oldpin == pin) {

            cout << "Enter your new PIN: ";
            cin >> newpin;

            pin = newpin;

            cout << "Your PIN has been updated successfully!" << endl;
        }
        else {

            cout << "Wrong PIN entered!" << endl;
        }
    }

    void menu() {

        int choice;

        do {

            cout << "\n==== ATM MENU ====" << endl;
            cout << "1. View Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Change PIN" << endl;
            cout << "5. Logout" << endl;

            cout << "\nChoose an option: ";
            cin >> choice;

            switch(choice) {

                case 1:
                    checkbal();
                    break;

                case 2:
                    depositMoney();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    changePin();
                    break;

                case 5:
                    cout << "\nLogged out successfully!" << endl;
                    break;

                default:
                    cout << "\nInvalid option. Please try again." << endl;
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
    myacc[1].pin = 1111;
    myacc[1].balance = 3000;

    myacc[2].id = 3;
    myacc[2].accName = "Analiza";
    myacc[2].pin = 2222;
    myacc[2].balance = 7000;

    myacc[3].id = 4;
    myacc[3].accName = "Teresita";
    myacc[3].pin = 3333;
    myacc[3].balance = 10000;

    myacc[4].id = 5;
    myacc[4].accName = "Jose";
    myacc[4].pin = 4444;
    myacc[4].balance = 6000;

    myacc[5].id = 6;
    myacc[5].accName = "Francis";
    myacc[5].pin = 5555;
    myacc[5].balance = 8000;

    myacc[6].id = 7;
    myacc[6].accName = "Gleza";
    myacc[6].pin = 6666;
    myacc[6].balance = 4500;

    myacc[7].id = 8;
    myacc[7].accName = "Glaiza";
    myacc[7].pin = 7777;
    myacc[7].balance = 12000;

    myacc[8].id = 9;
    myacc[8].accName = "Arlyn";
    myacc[8].pin = 8888;
    myacc[8].balance = 9000;

    myacc[9].id = 10;
    myacc[9].accName = "Alliyah Jade";
    myacc[9].pin = 9999;
    myacc[9].balance = 15000;

    string name;
    int pin;
    bool found;

    do {

        found = false;

        cout << "\n====== ATM LOGIN ======" << endl;

        cout << "Enter Account Name: ";
        cin >> name;

        cout << "Enter PIN: ";
        cin >> pin;

        for(int i = 0; i < 10; i++) {

            if(myacc[i].accName == name && myacc[i].pin == pin) {

                cout << "Login successful." << endl;

                myacc[i].menu();

                found = true;
            }
        }

        if(found == false) {

            cout << "\nIncorrect account name or PIN. Please try again!" << endl;
        }

    } while(true);

    return 0;
}
