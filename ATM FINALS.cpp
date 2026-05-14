#include <iostream>
using namespace std;

class Account {

public:

    int id;
    string accName;
    int pin;
    double balance;

    void checkbal() {

        cout << "\n===== YOUR BALANCE =====" << endl;
        cout << "Account Name: " << accName << endl;
        cout << "Current Balance: " << balance << endl;
    }

    void depositMoney() {

        double amount;

        cout << "\nEnter amount to deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Deposit successful!" << endl;
        cout << "Updated Balance: " << balance << endl;
    }

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
            cout << "The Remaining Balance: " << balance << endl;
        }
    }

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

    Account acc_num[10];

    acc_num[0].id = 1;
    acc_num[0].accName = "Ashley";
    acc_num[0].pin = 12334;
    acc_num[0].balance = 5000;

    acc_num[1].id = 2;
    acc_num[1].accName = "Analyn";
    acc_num[1].pin = 18974;
    acc_num[1].balance = 3000;

    acc_num[2].id = 3;
    acc_num[2].accName = "Analiza";
    acc_num[2].pin = 26839;
    acc_num[2].balance = 7000;

    acc_num[3].id = 4;
    acc_num[3].accName = "Teresita";
    acc_num[3].pin = 36573;
    acc_num[3].balance = 10000;

    acc_num[4].id = 5;
    acc_num[4].accName = "Jose";
    acc_num[4].pin = 47031;
    acc_num[4].balance = 6000;

    acc_num[5].id = 6;
    acc_num[5].accName = "Francis";
    acc_num[5].pin = 57360;
    acc_num[5].balance = 8000;

    acc_num[6].id = 7;
    acc_num[6].accName = "Gleza";
    acc_num[6].pin = 84006;
    acc_num[6].balance = 4500;

    acc_num[7].id = 8;
    acc_num[7].accName = "Glaiza";
    acc_num[7].pin = 89807;
    acc_num[7].balance = 12000;

    acc_num[8].id = 9;
    acc_num[8].accName = "Arlyn";
    acc_num[8].pin = 74902;
    acc_num[8].balance = 9000;

    acc_num[9].id = 10;
    acc_num[9].accName = "Alliyah Jade";
    acc_num[9].pin = 10479;
    acc_num[9].balance = 15000;

    string name;
    int pin;

    do {

        cout << "\n====== ATM LOGIN ======" << endl;

        cout << "Enter Account Name: ";
        cin >> name;

        cout << "Enter PIN: ";
        cin >> pin;

        for(int i = 0; i < 10; i++) {

            if(acc_num[i].accName == name && acc_num[i].pin == pin) {


                cout << "\nInvalid Account Name or PIN!" << endl;
            }
        }

    } while(true);

    return 0;
}



