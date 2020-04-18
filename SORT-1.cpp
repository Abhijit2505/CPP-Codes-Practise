#include <iostream>
#include <cstdlib>
#include <cstddef>

typedef int* intptr;

void fill_array(int a[],int size);
/// fills the array by prompting the users.

void sort(int a[],int size);
/// sorts the array from lower to higher using bubble sort

int main()
{
    using namespace std;
    cout << "This program sorts an array given in input" << endl;

    int array_size;
    cout << "How many numbers do you want to sort:- ";
    cin >> array_size;

    intptr a;
    a= new int[array_size];

    fill_array(a,array_size);
    sort(a, array_size);

    cout << "In sorted order the numbers are:- ";
    for(int i = 0;i < array_size;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    delete [] a;

    return 0;
}
void fill_array(int a[],int size)/// uses iostream
{
    using namespace std;
    cout << "Enter " << size << " integers.\n";
    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }
}
void sort(int a[],int size)/// uses iostream
{
    for(int i=size-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}
