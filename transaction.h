#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <string>


class Transaction {
    private:
    
    int id;
    std::string kind;
    double amount;
    
    public:
    
    Transaction(int Id, std::string Kind, double Amount);

        bool isDeposit();

        std::string Describe();

        std::string getKind() const;

        double getAmount() const;

        int getId() const;  
        
    };

#endif