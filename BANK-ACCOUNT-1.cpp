#include <iostream>
using namespace std;

/// structure for a bank certificate of deposit.
struct CDAccount
{
    double balance;
    double interest_rate;
    int term;
};

void get_data(CDAccount& the_account);
/// to get the input from the user about his CD.

int main()
{
    CDAccount account;
    get_data(account);

    double rate_fraction,interest;
    rate_fraction = account.interest_rate/100.0;
    interest = account.balance*rate_fraction*(account.term/12.0);
    account.balance = account.balance + interest;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "When your CD matures in " << account.term
         << " months, it will have a balance of $ " << account.balance << endl;

    return 0;
}
void get_data(CDAccount& the_account)
{
    cout << "Enter the account balance:- ";
    cin >> the_account.balance;
    cout << "Enter the rate of interest for your CD:- ";
    cin >> the_account.interest_rate;
    cout << "Enter the number of months until maturity:- ";
    cin >> the_account.term;
}










