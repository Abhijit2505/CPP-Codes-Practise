#include<bits/stdc++.h>
using namespace std;

void fill_array1(int a[],int size); /// to fill the array
void fill_array2(int b[],int size); /// to fill another array
double w_mean(int a[],int b[],int size);/// finding weight-mean

int main()
{
    int size;
    cin >> size;
    int a[size],b[size];
    double wm;
    fill_array1(a,size);
    fill_array2(b,size);
    wm = w_mean(a,b,size);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << wm << endl;
    return 0;
}
void fill_array1(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }
}
void fill_array2(int b[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> b[i];
    }
}
double w_mean(int a[],int b[],int size)
{
    double sum1 = 0.0,sum2 = 0.0;
    for(int i=0;i<size;i++)
    {
        sum1 += a[i]*b[i];
        sum2 += b[i];
    }
    return sum1/sum2;
}
