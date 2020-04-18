# include<iostream>
const int MAX_NUMBER_SCORES = 10;

void fill_array(int a[],int size,int& number_used);
double compute_average(const int a[],int number_used);
void show_difference(const int a[],int number_used);

int main()
{
    using namespace std;
    int score[MAX_NUMBER_SCORES],number_used;
    cout << "This program reads golf scores and shows the difference from average\n";
    cout << "Enter golf scores:\n";
    fill_array(score,MAX_NUMBER_SCORES,number_used);
    show_difference(score,number_used);
    return 0;
}
void fill_array(int a[],int size,int& number_used)
{
    using namespace std;
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
         << "Mark the end of the list with a negative number";
    int next,i = 0;
    cin >> next;
    while((next >= 0)&&(i < size))
    {
        a[i]=next;
        i++;
        cin >> next;
    }
    number_used = i;
}
double compute_average(const int a[],int number_used)
{
    double total=0;
    for(int i=0;i<number_used;i++)
    {
        total = total+a[i];
    }
    if(number_used > 0)
    {
        return(total/number_used);
    }
    else
    {
        using namespace std;
        cout << "ERROR: number of elements is zero in compute_average";
        return 0;
    }
}
void show_difference(const int a[],int number_used)
{
    using namespace std;
    double average = compute_average(a,number_used);
    cout << "Average of the " << number_used << "scores =  " << average << endl
         << "The scores are:\n";
    for(int i=0;i<number_used;i++)
    {
        cout << a[i] << " differs from average by " << (a[i]-average) << endl;
    }

}









