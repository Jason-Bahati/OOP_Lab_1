#include <iostream>
#include "account.h"


using namespace std;

    
    Account::Account(std::string Owner, double Balance){
            owner = Owner;
            balance = Balance;
        }

        bool Account::Deposit(double amount) {
            if (amount <= 0) {
                return false;
            }
            else {
                amount += balance;
                return true;
            }
        }

        bool Account::Withdraw(double amount){
            if (amount <= 0){
                return false;
            }
            else {
                balance -= amount;
                return true;
            }
        }
        std::string Account::ToString(){
            return "{0}, ${1:N2}";
        }
        
