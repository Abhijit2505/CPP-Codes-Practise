#include <iostream>
#include <cstdlib>

void input(int& total);
/// take input from the user for the total money
/// precondition : 0 < total <= 99

void compute_coins(int total,int& coin_value,int& num,int& amount_left);
/// it computes the number of coins in the change.

int main()
{
    using namespace std;
    int total,coin_value,num,amount_left;
    input(total);
    compute_coins(total,coin_value,num,amount_left);
    return 0;
}
void input(int& total)
{
    using namespace std;
    cout << "Enter the total amount of coins between 0 cents to 99 cents:- ";
    cin >> total;
}
void compute_coins(int total,int& coin_value,int& num,int& amount_left)
{
    using namespace std;
    do
    {
    cout << "Enter the coin value in cents[25 cents = 1 quarter,10 cents = 1 dime,1 cents = 1 penny] :- ";
    cin >> coin_value;
    if (coin_value > total)
    {
        cout << "Invalid input or there is no further change";
        exit(1);
    }
    num = total/coin_value;
    if(coin_value == 25)
    {
        cout << "If the coin value is " << coin_value << " ,you will get " << num
             << " quarters and the amount left will be " << (total - (num*coin_value)) << endl;
    }
    else if(coin_value == 10 )
    {
       cout << "If the coin value is " << coin_value << " ,you will get " << num
            << " dimes  and the amount left will be " << (total - (num*coin_value)) << endl;
    }
    else
    {
        cout << "If the coin value is " << coin_value << " ,you will get " << num
             << " pennies  and the amount left will be " << (total - (num*coin_value)) << endl;
    }
    amount_left = total%coin_value;
    total = amount_left;
    if(amount_left<10)
    {
        cout << "You will get " << amount_left << " numbers of cents" << endl;
    }
    }while(total>0);
}












