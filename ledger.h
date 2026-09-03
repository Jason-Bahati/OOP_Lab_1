#ifndef LEDGER_H
#define LEDGER_H

#include "account.h"
#include "transaction.h"
#include <vector>


class Ledger {
    private:

        Account account;
        int nextId;
        std::vector<Transaction> history;

    public:

        Ledger(Account account);

        bool Record(std::string kind, double amount);
        
        double Total(std::string kind);

        void PrintStatement();

        int getCount() const;
        
};

#endif