#include<bits/stdc++.h>
using namespace std;

void fill_array(int a[],int size);
double quotient1(int a[],int size);
double quotient2(int a[],int size);
double quotient3(int a[],int size);
void bubble_sort(int a[],int size);

int main()
{
    int size;
    cin >> size;
    int a[size];
    double q1,q2,q3;
    fill_array(a,size);
    bubble_sort(a,size);
    q1 = quotient1(a,size);
    q2 = quotient2(a,size);
    q3 = quotient3(a,size);
    cout << q1 << endl;
    cout << q2 << endl;
    cout << q3;
    return 0;
}
void fill_array(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }
}
double quotient1(int a[],int size)
{
    bubble_sort(a,size);
    double mn;
    int t=size/2;
    if(t%2==0)
    {
        mn = (a[t/2]+a[(t/2)-1])/2;
    }
    else
    {
        mn = a[t/2];
    }
    return mn;
}
double quotient2(int a[],int size)
{
    bubble_sort(a,size);
    double mn;
    if(size%2==0)
    {
       mn = (a[size/2]+a[(size/2)-1])/2.0;
    }
    else
    {
        mn = a[size/2];
    }
    return mn;
}
double quotient3(int a[],int size)
{
    bubble_sort(a,size);
    double mn;
    int t=size/2;
    if(t%2==0)
    {
       if(size%2==0)
        {
            mn = (a[t+(t/2)]+a[t+(t/2)-1])/2.0;
        }
        else
        {
            mn = (a[t+(t/2)]+a[t+(t/2)+1])/2.0;
        }
    }
    else
    {
        mn = a[t+(t/2)];
    }
    return mn;
}
void bubble_sort(int a[],int size)
{
    for(int i=size-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
