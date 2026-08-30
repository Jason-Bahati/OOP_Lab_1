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
            return "{0,4}  {1,-12} ${2,10:N2}";
        }
        
