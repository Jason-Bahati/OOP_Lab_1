#ifndef ACCOUNT_H
#define ACCOUNT_H
#include <string>

/*
This class represents the bank account of a single owner
all deposits and withdrawal must go through this class
*/


class Account {
    private:
    
    std::string owner;
    double balance;
    
    public:

    // stores owner name and starting balance
    Account(std::string owner, double balance);

        //adds amount to balance and returns true
        //returns false if amount is 0 or negative
        bool Deposit(double amount);
        
        //subtracts amount from balance and returns true
        //returns false if amount is 0, negative, or if amount is bigger
        //than the current balance
        bool Withdraw(double amount);

        //returns owner and balance
        std::string ToString();

    //getters for owner and balance

        std::string getOwner() const;

        double getBalance() const;
        
    };

#endif