#include <iostream>
#include <string>
using namespace std;

class Account {
public:
    string accountHolder;
    double balance;

    static string bankName;
    static float interestRate;

    Account(string name, double bal) {
        accountHolder = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void showBalance() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Bank: " << bankName << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << endl;
    }
};

string Account::bankName = "National Bank";
float Account::interestRate = 5.5;

int main() {
    Account a1("Ali", 5000);
    Account a2("Sara", 8000);
    Account a3("Ahmed", 12000);

    a1.deposit(2000);
    a2.deposit(1500);

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();

    return 0;
}
