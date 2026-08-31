#include <iostream>
#include "transaction.h"


using namespace std;

    
    Transaction::Transaction(int Id, string Kind, double Amount){
            id = Id;
            kind = Kind;
            amount = Amount;
        }

        bool Transaction::isDeposit() {
            if (kind == "Deposit") {
                return true;
            }
            else {
                return false;
            }
        }

        std::string Transaction::Describe() {
            return std::to_string(id) + " " + kind + " $" + std::to_string(amount);
        }
        
