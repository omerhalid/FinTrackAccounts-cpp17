#include "Account.h"

// Account implementations
Account::Account(int balance, std::string name) : balance(balance), name(name) {}

std::string Account::getName() const { return name; }

int Account::printBalance() const { return balance; }

Account::~Account() {}

// CheckingAccount implementations
CheckingAccount::CheckingAccount(int balance, std::string name) : Account(balance, name) {}

void CheckingAccount::withdraw(int amount) {
    balance -= amount;
}

void CheckingAccount::deposit(int amount) {
    balance += amount;
}

// SavingsAccount implementations
SavingsAccount::SavingsAccount(int balance, std::string name) : Account(balance, name) {}

void SavingsAccount::withdraw(int amount) {
    balance -= amount;
}

void SavingsAccount::deposit(int amount) {
    balance += amount;
}

// TrustAccount implementations
TrustAccount::TrustAccount(int balance, std::string name) : Account(balance, name) {}

void TrustAccount::withdraw(int amount) {
    balance -= amount;
}

void TrustAccount::deposit(int amount) {
    balance += amount;
}
