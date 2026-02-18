#include <iostream>
using namespace std;

class BankAccount {
private:
    static float interestRate;

public:
    static void changeRate(float rate) {
        interestRate = rate;
    }

    void showRate() {
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

float BankAccount::interestRate = 5.0;

int main() {
    BankAccount acc1, acc2, acc3;

    acc1.showRate();
    acc2.showRate();

    BankAccount::changeRate(7.5);

    acc1.showRate();
    acc2.showRate();
    acc3.showRate();

    return 0;
}
