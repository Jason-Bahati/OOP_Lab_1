#include <iostream>
#include "account.h"


using namespace std;

    
    Account::Account(std::string Owner, double startingBalance){
            owner = Owner;
            balance = startingBalance;
        }

        bool Account::Deposit(double amount) {
            if (amount <= 0) {
                return false;
            }
            else {
                balance = amount + balance;
                return true;
            }
        }

        bool Account::Withdraw(double amount){
            if (amount <= 0 || amount > balance){
                return false;
            }
            else {
                balance = balance - amount;
                return true;
            }
        } 
        std::string Account::ToString(){
            return owner + ", $" + std::to_string(balance);
        }
        
        std::string Account::getOwner() const {
            return owner;
        }

        double Account::getBalance() const {
            return balance;
        }
