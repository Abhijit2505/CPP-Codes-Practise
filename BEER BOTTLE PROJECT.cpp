#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

string tenstring(int x);
string onestring(int x);
string teenstring(int x);
string singlestring(int x);

int main()
{
   int n;
   char ans;
   do
   {
   cout << "Enter an integer between 0 & 99 :- ";
   cin >> n;
   if((n>=20)&&(n<=99))
      {
        cout << tenstring(n)<<onestring(n)<<" bottles of beer on the wall"<< endl;
        cout << tenstring(n)<<onestring(n)<<" bottles of beer"<<"\nTake one down pass it around";
      }
    else if((n>=10)&&(n<20))
    {
        cout << teenstring(n)<<" bottles of beer on the wall"<< endl;
        cout << teenstring(n)<<" bottles of beer"<<"\nTake one down pass it around";
    }
    else if((n>0)&&(n<10))
    {
        cout << singlestring(n)<<" bottles of beer on the wall"<< endl;
        cout << singlestring(n)<<" bottles of beer"<<"\nTake one down pass it around";
    }
    else
    {
        cout << "\nZero bottles of beer on the wall";
    }
    cout << "\nDo you want to continue again ?[Y/N]:- ";
    cin >> ans;
    }while(ans!='N'&&ans!='n');
    return 0;
}
string tenstring(int x)
{
    int i;
    i=x/10;
    switch(i)
    {
        case 9:return("ninety");break;
        case 8:return("eighty");break;
        case 7:return("seventy");break;
        case 6:return("sixty");break;
        case 5:return("fifty");break;
        case 4:return("forty");break;
        case 3:return("thirty");break;
        case 2:return("twenty");break;
        case 1:return("");break;
        case 0:return("");break;
    }
    return("") ;
}
string onestring(int x)
{
    int i;
    i=x%10;
    switch(i)
    {
        case 9:return("-nine");break;
        case 8:return("-eight");break;
        case 7:return("-seven");break;
        case 6:return("-six");break;
        case 5:return("-five");break;
        case 4:return("-four");break;
        case 3:return("-three");break;
        case 2:return("-two");break;
        case 1:return("-one");break;
        case 0:return("");break;
    }
    return("");
}
string teenstring(int x)
{
    switch(x)
    {
        case 19:return("nineteen");break;
        case 18:return("eighteen");break;
        case 17:return("seventeen");break;
        case 16:return("sixteen");break;
        case 15:return("fifteen");break;
        case 14:return("fourteen");break;
        case 13:return("thirteen");break;
        case 12:return("twelve");break;
        case 11:return("eleven");break;
        case 10:return("ten");break;
    }
    return("");
}
string singlestring(int x)
{
    switch(x)
    {
        case 9:return("nine");break;
        case 8:return("eight");break;
        case 7:return("seven");break;
        case 6:return("six");break;
        case 5:return("five");break;
        case 4:return("four");break;
        case 3:return("three");break;
        case 2:return("two");break;
        case 1:return("one");break;
        case 0:return("");break;
    }
    return("");
}
