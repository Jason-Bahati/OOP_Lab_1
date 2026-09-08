#include <iostream>
#include <sstream>
#include <iomanip>
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
            std::ostringstream os;
            os << left << setw(2) << " " << setw(3) << id << setw(12) 
            << kind << setw(5) << "$" << right << setw(2) << fixed 
            << setprecision(2) << amount;

            return os.str();
        }

        std::string Transaction::getKind() const{
            return kind;
        }

        double Transaction::getAmount() const{
            return amount;
        }

        int Transaction::getId() const{
            return id;
        }
        
