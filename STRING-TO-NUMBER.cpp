#include <iostream>
#include <cstdlib>
#include <cctype>

void read_and_clean(int& n);

void newline();

int main()
{
    using namespace std;
    int n;
    char ans;
    do
    {
        cout << "Enter an integer and press return :- ";
        read_and_clean(n);
        cout << "The string converts to the integer " << n << endl;
        cout << "Again(y/n)";
        cin >> ans;
        newline();
    }while((ans!='n')&&(ans !='N'));
    return 0;
}
void read_and_clean(int& n)
{
    using namespace std;
    const int ARRAY_SIZE=6;
    char digitstring[ARRAY_SIZE];

    char next;
    int i=0;
    cin.get(next);
    while(next!='\n')
    {
        if((isdigit(next)) && (i < ARRAY_SIZE-1))
        {
            digitstring[i]=next;
            i++;
        }
        cin.get(next);
    }
    n=atoi(digitstring);
}
void newline()
{
    using namespace std;
    char symbol;
    do
    {
        cin.get(symbol);
    }while(symbol!='\n');
}





