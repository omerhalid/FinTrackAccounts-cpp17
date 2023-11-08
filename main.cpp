#include <iostream>
#include <tuple>
#include "Account.h"

using namespace std;

int main() {
    vector<shared_ptr<Account>> accounts;

    // Unique pointers with names
    auto a1 = make_unique<CheckingAccount>(111, "John");
    auto a2 = make_unique<CheckingAccount>(444, "Doe");
    auto a3 = make_unique<CheckingAccount>(555, "Smith");

    // Shared pointers with names
    auto a4 = make_shared<CheckingAccount>(222, "Alice");
    auto a5 = make_shared<CheckingAccount>(333, "Bob");

    // Adding shared pointers to the vector
    accounts.push_back(a4);
    accounts.push_back(a5);

    // Moving unique pointers to the vector
    accounts.push_back(move(a1));
    accounts.push_back(move(a2));
    accounts.push_back(move(a3));

    // Adding new accounts directly to the vector
    accounts.push_back(make_unique<CheckingAccount>(100, "Frank"));
    accounts.push_back(make_unique<SavingsAccount>(200, "Claire"));
    accounts.push_back(make_unique<TrustAccount>(300, "Tom"));

    // Printing balances
    for (const auto &acc : accounts) {
        if (acc != nullptr) // Check if the pointer is not null
            cout << acc->printBalance() << endl;
    }

    // Usage of structured bindings
    // Create tuple with 2 elements to save the data of the user
    tuple<int, string> t(a4->printBalance(), a4->getName());

    auto [balance_, name_] = t;

    cout << balance_ << " " << name_ << endl;
}
