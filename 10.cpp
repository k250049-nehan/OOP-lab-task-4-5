#include <iostream>
#include <string>
using namespace std;

class Branch {
public:
    string branchName;
    string city;

    Branch(string b = "", string c = "") {
        branchName = b;
        city = c;
    }
};

class Account {
public:
    string accountHolder;
    double balance;
    Branch* branch; //Aggregation
    static string bankName;
    static float interestRate;

    Account(string name, double bal, Branch* br) {
        accountHolder = name;
        balance = bal;
        branch = br;
    }

    static void updateInterestRate(float rate) {
        interestRate = rate;
    }

    void showBalance() const {
        cout << "Bank: " << bankName << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Branch: " << branch->branchName
             << ", " << branch->city << endl;
        cout << endl;
    }
};

string Account::bankName = "Global Bank";
float Account::interestRate = 6.0;

int main() {
    Branch b1("Main Branch", "Karachi");
    Branch b2("City Branch", "Lahore");

    Account accounts[3] = {
        Account("Nehan", 50000, &b1),
        Account("Malik", 75000, &b2),
        Account("Muhammad", 62000, &b1)
    };

    Account::updateInterestRate(7.5);

    for(int i = 0; i < 3; i++) {
        accounts[i].showBalance();
    }

    return 0;
}
