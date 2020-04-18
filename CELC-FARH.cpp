#include <iostream>

void input(double& temp,char& scale1);
/// used to take input of temperature and scale from the user.

void conversion(double temp,char scale1,double& result);
/// used for the conversion of temperature.
/// storing the result as call-by-value.

void output(double result,char scale1,char& scale2);
/// output the result along with the temperature scale.

int main()
{
    using namespace std;
    double temp,result;
    char scale1,scale2;
    input(temp,scale1);
    conversion(temp,scale1,result);
    output(result,scale1,scale2);
    return 0;
}
void input(double& temp,char& scale1) /// uses iostream
{
    using namespace std;
    cout << "Enter the temperature:- ";
    cin >> temp;
    cout << "Enter the scale [F/C]:- ";
    cin >> scale1;
}
void conversion(double temp,char scale1,double& result) /// uses iostream
{
    if ((scale1=='F')||(scale1=='f'))
    {
        result = ((temp-32)*5)/9;
    }
    else
    {
        result = ((9*temp)/5)+32;
    }
}
void output(double result,char scale1,char& scale2) /// uses iostream
{
    using namespace std;;
    if ((scale1=='F')||(scale1=='f'))
    {
        scale2 = 'C';
    }
    else
    {
        scale2 = 'F';
    }
    cout << "The temperature after the conversion is :- " << result << " degree " << scale2;
}







