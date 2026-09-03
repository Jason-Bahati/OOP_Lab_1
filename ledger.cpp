#include <iostream>
#include <vector>

#include "ledger.h"

using namespace std;

    Ledger::Ledger(Account account) 
        : account(account), nextId(1) {  
    }

    int Ledger::getCount() const {
        return static_cast<int>(history.size());
    }

    bool Ledger::Record(std::string kind, double amount){

        bool accepted = false;

        if (kind == "Deposit"){
            accepted = account.Deposit(amount);
        }
        else if (kind == "Withdrawal"){
            accepted = account.Withdraw(amount);
        }
        else {
            return false;
        }

        if (!accepted){
            return false;
        }

        
        Transaction t(nextId, kind, amount);
        history.push_back(t);
        nextId++;
        
        return true;
        
    }
    /* 
    double Ledger::Total(std::string kind) {
        for (int i = 0; i < history[]; i++){
            if()
            
            }
        }
        */    

    
