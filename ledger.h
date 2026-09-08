#ifndef LEDGER_H
#define LEDGER_H

#include "account.h"
#include "transaction.h"
#include <vector>
#include <string>

/*
This class handles tranactions for one account. it holds the account, a history of accepted transactions
and records and prints a accepted transaction request. doesnt use balance
*/


class Ledger {
    private:

        Account account;
        int nextId;
        std::vector<Transaction> history;

    public:

        //creates an empty ledger for the account
        Ledger(Account account);

        
        //records a transaction of a given kind and amount
        //by making a new Transaction and adding it to a history vector
        bool Record(std::string kind, double amount);
        
        //loops through history, adds up the amount of every
        //transaction and returns sum
        double Total(std::string kind);

        //writes the statement in a formatted table
        void PrintStatement();

        int getCount() const; //getter for count
        
};

#endif