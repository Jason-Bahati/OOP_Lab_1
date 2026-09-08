#include <iostream>
#include <vector>
#include <cctype>
#include <iomanip>

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
     
    double Ledger::Total(std::string kind) {
        double sum = 0;
        for (size_t i = 0; i < history.size(); i++){
            if(kind == history[i].getKind()) {
                sum += history[i].getAmount();
            }
        }
        return sum;
    }

    void Ledger::PrintStatement() {
        cout << std::string(40,'=') << endl;

        std::string name = account.getOwner();

        for(size_t i = 0; i < name.size(); i++) {
            name[i] = toupper(name[i]);
        }

        cout << " STATEMENT FOR " << name << endl;
        cout << std::string(40,'=') << endl;
        cout << left << setw(5) << " ID" << setw(12) << "TYPE"
         << right << setw(11) << "AMOUNT" << endl;

        cout << std::string(40,'-') << endl;
        for(size_t i = 0; i < history.size(); i++) {
            cout << history[i].Describe() << endl;
        }
        cout << std::string(40,'-') << endl;

        cout << left << setw(17) << "Deposits:" << "$"
        << right << setw(10) << fixed << setprecision(2)
        << Total("Deposit") << endl;

        cout << left << setw(17) << "Withdrawals:" << "$"
        << right << setw(10) << fixed << setprecision(2)
        << Total("Withdrawal") << endl;

        cout << left << setw(17) << "Ending balance:" << "$"
        << right << setw(10) << fixed << setprecision(2)
        << account.getBalance() << endl;

        cout << std::string(40,'=') << endl;
    }
           

    