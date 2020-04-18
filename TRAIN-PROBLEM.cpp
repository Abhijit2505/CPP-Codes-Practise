#include <iostream>

void get_input(int& repeat,int n[]);
/// used to get input from the user

int main()
{
    int n[10000],i,r;
    using namespace std;
    get_input(r,n);
    for(i=0;i<r;i++)
        {
        if((n[i]%6==0)||(n[i]%6==1))
        {
            if(n[i]%12==0)
            {
                cout << n[i]-11 << " WS ";
            }
            else if(n[i]%12==1)
            {
                cout << n[i]+11 << " WS ";
            }
            else if(n[i]%6==0)
            {
                cout << n[i]+1 << " WS ";
            }
            else
            {
                cout << n[i]-1 << " WS ";
            }
        }
        else if((n[i]-2)%3==0)
        {
            if((n[i]%12)==2)
            {
               cout << n[i]+9 << " MS ";
            }
            else if((n[i]-3)%12==2)
            {
                cout << n[i]+3 << " MS ";
            }
            else if((n[i]-6)%12==0)
            {
                cout << n[i]-3 << " MS ";
            }
            else
            {
                cout << n[i]-9 << " MS ";
            }
        }
        else
        {
            if((n[i]-3)%12==0)
            {
               cout << n[i]+7 << " AS ";
            }
            else if(n[i]%12==4)
            {
                cout << n[i]+5 << " AS ";
            }
            else if(n[i]%12==9)
            {
                cout << n[i]-5 << " AS ";
            }
            else
            {
                cout << n[i]-7 << " AS ";
            }
        }
        cout << endl;
    }
    return 0;
}
void get_input(int& repeat,int n[])
{
    using namespace std;
    cin >> repeat;
    for(int i=0;i<repeat;i++)
    {
        cin >> n[i];
    }
}
