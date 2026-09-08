#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

#include "transaction.h"
#include "account.h"
#include "ledger.h"

using namespace std;


int main() {

    Account ada("Ada Lovelace", 500.00);
    Ledger ledger(ada);

    cout << "Opening account: " << ada.ToString();
    cout << endl << endl;
    cout << "Recording five requests..." << endl;

    std::string kinds[5] = {"Deposit", "Withdrawal", "Withdrawal", "Deposit", "Deposit"};
    double amounts[5] = {250.0, 125.50, 10000.00, -40.00, 75.25};

    for (int i = 0; i < 5; i++) {
        bool y = ledger.Record(kinds[i], amounts[i]);
        if (!y) {
            cout << " REJECTED: " << kinds[i] << " of $"
             << fixed << setprecision(2) << amounts[i] << endl;
        }
    }

    cout << endl;
    cout << "Transactions accepted: " << ledger.getCount();
    cout << endl << endl;
    ledger.PrintStatement();




    return 0;
}
