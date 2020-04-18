#include <iostream>

using namespace std;

int main()
{
    double w,h,a,bmr,n;
    char s;
    cout << "Enter your sex : ";
    cin >> s;
    cout << "Enter your weight : ";
    cin >> w;
    cout << "Enter your height : ";
    cin >> h;
    cout << "Enter your age : ";
    cin >> a;
    if((s =='m')||(s == 'M'))
    {
        bmr=66+(6.3*w)+(12.9*h)-(6.8*a);
    }
    else
    {
         bmr=655+(4.3*w)+(4.7*h)-(4.7*a);
    }
        n = bmr/230;
        cout << "You can eat " << n << " chocolate bars";
        return 0;
}
