#include <iostream>
using namespace std;

class day_of_year
{
public:
    void output();
    int month;
    int day;
};

int main()
{
    day_of_year today, birthday;

    cout << "Enter today's date " << endl;
    cout << "Enter month as a number:- ";
    cin >> today.month;
    cout << "Enter the day of the month:- ";
    cin >> today.day;
    cout << "Enter your birthday " << endl;
    cout << "Enter month as a number:- ";
    cin >> birthday.month;
    cout << "Enter the day of the month:- ";
    cin >> birthday.day;

    cout << endl;
    cout << "   Today's date is:- ";
    today.output();
    cout << "   Your birthday is:- ";
    birthday.output();

    if(today.month==birthday.month && today.day==birthday.day)
    {
        cout << "Happy birthday!\n";
    }
    else
    {
        cout << "It is not your birthday!\n";
    }
    return 0;
}
void day_of_year::output()
{
    cout << " month = " << month
         << " day = " << day << endl;
}


/// This is the second program
/// Kindly run in another console

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class day_of_year
{
public:
    void input();
    void output();
    void set(int new_month, int new_day);
    /// mutator function
    /// to set the birthday of the person;

    int get_month();
    /// accessors function
    /// to return the month number

    int get_day();
    /// accessors function
    /// to return the day
private:
    void check_date();
    int month;
    int day;
};
int main()
{
    day_of_year today, birthday;
    cout << "Enter today's date:- ";
    today.input();
    cout << "Today's date is:- ";
    today.output();

    birthday.set(5,25);
    cout << "\nAbhijit Tripathy's birthday is on:- ";
    birthday.output();

    if((today.get_month()==birthday.get_month())&&(today.get_day()==birthday.get_day()))
    {
        cout << "\nHappy Birthday Abhijit";
    }
    else
    {
        cout << "\nIt is not your birthday Abhijit";
    }
    return 0;
}
void day_of_year::input()
{
    cout << "\nEnter the month as a number:- ";
    cin >> month;
    cout << "Enter the day:- ";
    cin >> day;
    check_date();
}
void day_of_year::output()
{
    cout << " month = " << month << " day = " << day;
}
void day_of_year::set(int new_month, int new_day)
{
    month = new_month;
    day = new_day;
    check_date();
}
void day_of_year::check_date()
{
    if((month < 1)||(month > 12)||(day < 1)||(day > 31))
    {
        cout << "\nThis is an invalid input \n"
             << "The program is terminated ";
        exit(1);
    }
}
int day_of_year::get_month()
{
    return month;
}
int day_of_year::get_day()
{
    return day;
}
















