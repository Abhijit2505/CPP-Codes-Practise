#include <iostream>
using namespace std;

void get_it(int& n);
///this function is used to get input from the user and
///proceed for a correct recheck and another input if found wrong.

void newline();
///this function is used to discard other characters in the answer
///so that the code doesn't iterate infinitely.

int main()
{
    int n;
    get_it(n);
    cout << "The number you entered is :- " << n << endl;
    return 0;
}
void newline()/// uses iostream
{
    char symbol;
    do
    {
        cin.get(symbol);
    }while(symbol!='\n');
}
void get_it(int& n)/// uses iostrem
{
    char ans;
    do
    {
        cout << "Enter a number :- ";
        cin >> n;
        cout << "You entered " << n << " ";
        cout << "Is it correct ? (Yes/No) - ";
        cin >> ans;
        newline();
    }while((ans!='Y')&&(ans!='y'));
}






