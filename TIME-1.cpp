#include <iostream>

void input(int& hour1,int& hour2,int& minute1,int& minute2);
/// takes the input from the user

void calculation(int hour1,int hour2,int minute1,int minute2,int& res_hour,int& res_min);
/// calculates the resultant time
/// precondition - 24 hour time system
/// postcondition - check if the resultant time exceeds 24:00

void output(int res_hour,int res_min);
/// outputs the resultant time after the waiting time

int main()
{
    using namespace std;
    char ans;
    int h1,h2,eqv_h,m1,m2,eqv_m;
    do
    {
        input(h1,h2,m1,m2);
        calculation(h1,h2,m1,m2,eqv_h,eqv_m);
        output(eqv_h,eqv_m);
        cout << "Do you want to continue again ?[Y/N]";
        cin >> ans;
    }while((ans != 'N')&&(ans != 'n'));
    return 0;
}
void input(int& hour1,int& hour2,int& minute1,int& minute2) /// uses iostream
{
    using namespace std;
    cout << "Enter the current time below !" << endl;
    cout << "Enter the current hour as a number:- ";
    cin >> hour1;
    cout << "Enter the current minute as a number:- ";
    cin >> minute1;
    cout << "Enter the waiting time !" << endl;
    cout << "Enter the waiting hour as a number:- ";
    cin >> hour2;
    cout << "Enter the waiting minute as a number:- ";
    cin >> minute2;
    if ((hour1 > 23)||(minute1 > 59)||(hour2 > 24)||(minute2 > 59))
    {
        cout << "Invalid input, please try again" << endl;
    }
}
void calculation(int hour1,int hour2,int minute1,int minute2,int& res_hour,int& res_min)/// uses iostream
{
    using namespace std;
    int sum_min;
    sum_min = minute1+minute2;
    if(sum_min >= 60)
    {
        res_min = sum_min - 60;
        res_hour = hour1+hour2+1;
    }
    else
    {
        res_min = sum_min;
        res_hour = hour1+hour2;
    }
    if(res_hour >= 24)
    {
        res_hour = res_hour - 24;
        cout << "It's the next day" << endl;
    }
}
void output(int res_hour,int res_min)/// uses iostream
{
    using namespace std;
    cout << "The resultant time is:- ";
    cout << " Hour = " << res_hour << " Minute = " << res_min << endl;
    cout << "So the time is " << res_hour << ":" << res_min << endl;
}











