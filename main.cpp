#include <iostream>
#include <iomanip>
#include "transaction.h"
#include "account.h"
using namespace std;


int main() {

    cout << fixed << setprecision(2);

    Account ada("Ada Lovelace", 500.00);

    cout << "Opening account: " << ada.ToString();

    cout << endl << endl;

    cout << "Recording five requests...";



    return 0;
}
