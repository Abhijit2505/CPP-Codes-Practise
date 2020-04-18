#include <iostream>
#include <cstdlib>
#include <cctype>

void read_and_clean(int& n);
/// to clean the input and keep only digits

void new_line();
/// to control iteration of loop by neglecting other characters

void get_int(int& input_number);
/// function to get the input and proceed

int main()
{
    using namespace std;
    int input_number;
    get_int(input_number);
    cout << "Final value read in = " << input_number << endl;
    return 0;
}
void get_int(int& input_number)/// uses iostream
{
    using namespace std;
    char ans;
    do
    {
        cout << "Enter input number :- ";
        read_and_clean(input_number);
        cout << "You entered " << input_number << ", Is that correct ? (yes/no): ";
        cin >> ans;
        new_line();
    }while((ans != 'y') && (ans != 'Y'));
}
void read_and_clean(int& n)/// uses iostream, cctype
{
    using namespace std;
    const int ARRAY_SIZE=10;
    char digitstring[ARRAY_SIZE];

    char next;
    cin.get(next);
    int i=0;
    while(next!='\n')
    {
        if((isdigit(next))&&(i<ARRAY_SIZE-1))
        {
            digitstring[i]=next;
            i++;
        }
        digitstring[i]='\0';
        cin.get(next);
    }
    n = atoi(digitstring);
}
void new_line()/// uses iostream, cstdlib and cctype
{
    using namespace std;
    char symbol;
    do
    {
        cin.get(symbol);
    }while(symbol!='\n');
}






