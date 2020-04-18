#include <iostream>
#include <string>

void newline();

int main()
{
    using namespace std;
    string first_name,last_name,record_name;
    string motto = "Your records are our records ";
    cout << "Enter your first and last name ";
    cin >> first_name >> last_name;
    newline();

    record_name = last_name + " , " + first_name;
    cout << "Your name in our record is :- " << record_name << endl;
    cout << "our motto is \n" << motto << endl;
    cout << "Please suggest a better one liner " << endl;
    getline(cin,motto);
    cout << "our new motto will be :- " << motto << endl;

    return 0;
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




