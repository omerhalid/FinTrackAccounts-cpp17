#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <memory>
#include <vector>

// Base abstract class
class Account {
protected:
    int balance;
    std::string name;
public:
    Account(int balance, std::string name);
    virtual void withdraw(int amount) = 0;
    virtual void deposit(int amount) = 0;
    virtual std::string getName() const;
    virtual int printBalance() const;
    virtual ~Account();
};

class CheckingAccount : public Account {
public:
    explicit CheckingAccount(int balance, std::string name);
    void withdraw(int amount) override;
    void deposit(int amount) override;
};

class SavingsAccount : public Account {
public:
    explicit SavingsAccount(int balance, std::string name);
    void withdraw(int amount) override;
    void deposit(int amount) override;
};

class TrustAccount : public Account {
public:
    explicit TrustAccount(int balance, std::string name);
    void withdraw(int amount) override;
    void deposit(int amount) override;
};

#endif // ACCOUNT_H
