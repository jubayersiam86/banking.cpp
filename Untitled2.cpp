

//Name:Jubayer Alom Shiam
//ID:20244103086

#include <iostream>
using namespace std;

class Bank {
public:
    string name;
    int accountnumber;
    double balance;

    void createaccount(string accname, int accno, double initialbalance) {
        name = accname;
        accountnumber = accno;
        balance = initialbalance;
        cout << "Account created for " << name << " | Acc No: " << accountnumber << " | Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << name << " deposited " << amount << " | New Balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << name << " has insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << name << " withdrew " << amount << " | New Balance: " << balance << endl;
        }
    }

    void fdr(double amount, int years) {
        double rate = 0.06;
        double interest = amount * rate * years;
        cout << name << " FDR interest after " << years << " years: " << interest << endl;
    }

    void dps(double monthly, int months) {
        double total = monthly * months;
        double interest = total * 0.06;
        cout << name << " DPS return after " << months << " months: " << total + interest << endl;
    }
};

int main() {
    Bank users[10];

    for (int i = 0; i < 10; i++) {
        string uname = "User" + to_string(i + 1);
        int acc = 1001 + i;
        double initial = 5000;
        users[i].createaccount(uname, acc, initial);
    }

    users[0].deposit(1000);
    users[0].withdraw(2000);
    users[0].fdr(3000, 2);
    users[0].dps(1000, 12);

    return 0;
}


