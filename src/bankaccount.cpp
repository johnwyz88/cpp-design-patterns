//
// Created by Wang, John on 2021-06-30.
//

#include <iostream>
#include <vector>

using namespace std;

struct BankAccount
{
    int balance{0};
    int overdraft_limit{-500};

    void deposit(int amount) {
        balance += amount;
        cout << "deposited " << amount
             << ", balance is now " << balance << endl;
    }

    bool withdraw(int amount) {
        if (balance - amount >= overdraft_limit) {
            balance -= amount;
            cout << "withdrew " << amount
                 << ", balance is now " << balance << endl;
            return true;
        }
        return false;
    }

    friend ostream &operator<<(ostream &os, const BankAccount &account) {
        os << "balance: " << account.balance << " overdraft_limit: " << account.overdraft_limit;
        return os;
    }
};

struct Command
{
    virtual void call() = 0;
    virtual void undo() = 0;
};

struct BankAccountCommand : Command
{
    bool succeeded;
    BankAccount& account;
    enum Action { deposit, withdraw } action;
    int amount;

    BankAccountCommand(BankAccount &account, Action action, int amount) : account(account), action(action),
                                                                          amount(amount) {}

    void call() override {
        switch (action) {
            case deposit:
                account.deposit(amount);
                succeeded = true;
                break;
            case withdraw:
                succeeded = account.withdraw(amount);
                break;
        }
    }

    void undo() override {
        if (!succeeded) return;
        switch (action) {
            case deposit:
                account.withdraw(amount);
                break;
            case withdraw:
                account.deposit(amount);
                break;
        }
    }


};

int main()
{
    BankAccount ba;
    vector<BankAccountCommand> commands {
            BankAccountCommand{ba, BankAccountCommand::deposit, 100},
            BankAccountCommand{ba, BankAccountCommand::withdraw, 200}
    };

    cout << ba << endl;

    for (BankAccountCommand& bac : commands) {
        bac.call();
    }

    cout << ba << endl;
    cout << "undo.." << endl;

    for (auto bac = commands.rbegin(); bac != commands.rend(); bac++) {
        bac->undo();
    }

    cout << ba << endl;

    return 0;
}
