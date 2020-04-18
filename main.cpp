#include <iostream>

using namespace std;

int main()
{
    cout << "\t\t\t\t\tBLACK JACK GAME\n";
    int nc,t=0,int_value,total=0;
    char card_values,ans;
    do
    {
        cout << "How many cards do you have ? :- ";
        cin >> nc;
        for(t=0;t<nc;t++)
        {
            cout << "Enter card number " << t+1 << " = ";
            cin >> card_values;
            switch(card_values)
            {
            case '2':
                int_value=2;
                total=total+int_value;
                break;
            case '3':
                int_value=3;
                total=total+int_value;
                break;
            case '4':
                int_value=4;
                total=total+int_value;
                break;
            case '5':
                int_value=5;
                total=total+int_value;
                break;
            case '6':
                int_value=6;
                total=total+int_value;
                break;
            case '7':
                int_value=7;
                total=total+int_value;
                break;
            case '8':
                int_value=8;
                total=total+int_value;
                break;
            case '9':
                int_value=9;
                total=total+int_value;
                break;
            case 't':
            case 'T':
                int_value=10;
                total=total+int_value;
                break;
            case 'J':
            case 'j':
                int_value=10;
                total=total+int_value;
                break;
            case 'q':
            case 'Q':
                int_value=10;
                total=total+int_value;
                break;
            case 'K':
            case 'k':
                int_value=10;
                total=total+int_value;
                break;
            case 'a':
            case 'A':
                if(total<=10)
                {
                    int_value=11;
                }
                else
                {
                    int_value=1;
                }
                total=total+int_value;
                break;
            }

        }
        if(total<=21)
            {
                cout << "Your total value is : " << total;
            }
        else
            {
                cout << "\nBusted\n";
            }
        cout << "\nDo you want to continue again[Y/N]: ";
        cin >> ans;
    }while(ans!='N'||ans!='n');
}
