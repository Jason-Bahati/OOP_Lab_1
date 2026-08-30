#ifndef ACCOUNT_H
#define ACCOUNT_H


class Account {
    private:
    
    std::string owner;
    double balance;
    
    public:
    
    Account(std::string owner, double balance);

        bool Deposit(double amount);
        
        bool Withdraw(double amount);

        std::string ToString();
        
    };

#endif