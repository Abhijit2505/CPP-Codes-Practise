#include <iostream>

void get_input(int& n1,int& n2,int& n3,int& n4);
/// to get input of four numbers from the user.

int max(int n1,int n2,int n3,int n4);
/// to find the maximum of four numbers entered by the user.

int min(int n1,int n2,int n3,int n4);
/// to find the minimum of four numbers entered by the user.

int main()
{
    using namespace std;
    char ans;
    int n1,n2,n3,n4;
    do
    {
        get_input(n1,n2,n3,n4);
        cout << "\nDo you want to continue again ? (Y/N) :- ";
        cin >> ans;
    }while((ans !='N')&&(ans !='n'));
    return 0;
}
void get_input(int& n1,int& n2,int& n3,int& n4) /// uses iostream
{
    using namespace std;
    cout << "Enter four numbers :- ";
    cin >> n1 >> n2 >> n3 >> n4;
    cout << "maximum is = " << max(n1,n2,n3,n4) << endl;
    cout << "minimum is = " << min(n1,n2,n3,n4);
}
int max(int n1,int n2,int n3,int n4) /// uses iostream
{
    if((n1 > n2)&&(n1 > n3)&&(n1 > n4))
    {
        return n1;
    }
    else if((n2 > n1)&&(n2 > n3)&&(n2 > n4))
    {
        return n2;
    }
    else if((n3 > n1)&&(n3 > n2)&&(n3 > n4))
    {
        return n3;
    }
    else
    {
        return n4;
    }
}
int min(int n1,int n2,int n3,int n4) /// uses iostream
{
    if((n1 < n2)&&(n1 < n3)&&(n1 < n4))
    {
        return n1;
    }
    else if((n2 < n1)&&(n2 < n3)&&(n2 < n4))
    {
        return n2;
    }
    else if((n3 < n1)&&(n3 < n2)&&(n3 < n4))
    {
        return n3;
    }
    else
    {
        return n4;
    }
}










