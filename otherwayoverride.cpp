#include <iostream>
using namespace std;

class BankAccount {
protected:
    string holder;
    double balance;

public:
    BankAccount(string h, double b) : holder(h), balance(b) {}

     void displayInfo() {
        cout << "[BankAccount] " << holder << ", Balance: $" << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(string h, double b, double r)
        : BankAccount(h, b), interestRate(r) {}

    void displayInfo()  {
        cout << "[SavingsAccount] " << holder << ", Balance: $" << balance
             << ", Interest Rate: " << interestRate << "%" << endl;
    }
};

int main() {
    SavingsAccount sa("Majd",1000,5);
    sa.displayInfo();
    return 0;
}
