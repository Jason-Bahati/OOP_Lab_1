#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>

/*
Represents a single deposit or withdrawal, unaware of account or ledger
it stores an id, a "Deposit", or "Withdrawal" and a amount
*/

class Transaction {
    private:
    
    int id;
    std::string kind;
    double amount;
    
    public:
    
    Transaction(int Id, std::string Kind, double Amount); // stores all three values in the private field

        bool isDeposit(); //returns true when kind is "Deposit"

        std::string Describe(); //returns a formatted string

// getters for kind, amount, and id
        std::string getKind() const; 

        double getAmount() const;

        int getId() const;  
        
    };

#endif