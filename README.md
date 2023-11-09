# Account Management System

## Description
This project is a simple C++ application demonstrating an account management system. It features a base `Account` class along with derived classes `CheckingAccount`, `SavingsAccount`, and `TrustAccount`. The application allows for basic operations like deposit, withdraw, and balance check.

## Setup
To set up this project, you will need a C++ compiler that supports C++17 and the Google Test framework for running unit tests.

## Building the Project
To build the project, navigate to the project directory and use the following command:

```bash
g++ -std=c++17 Account.cpp main.cpp -o AccountProgram

```
## Running the Project

After building, you can run the project by executing the following in your terminal:

```bash
./AccountProgram

```
Running Tests

To compile and run the tests, ensure you have Google Test installed and use the following command:


```bash

g++ -std=c++17 Account.cpp AccountTest.cpp -o AccountTest -lgtest -lgtest_main -pthread

```
Then, to run the tests, execute:


```bash

./AccountTest

```
Project Structure

    Account.h: Header file containing the declarations of the Account class and its derived classes.
    Account.cpp: Source file containing the implementations of the Account class and its derived classes.
    main.cpp: Main driver code of the application.
    AccountTest.cpp: Unit tests for the project using Google Test.

Contributors

    Ömer Cinar

License

This project is licensed under the MIT License.
