#include<bits/stdc++.h>
using namespace std;

void fill_array(int a[],int size);
double std_dev(int a[],int size);

int main()
{
    int n;
    cin >> n;
    int a[n];
    double std_d;
    fill_array(a,n);
    std_d = std_dev(a,n);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(1);
    cout << std_d;
    return 0;
}
void fill_array(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }
}
double std_dev(int a[],int size)
{
    double sum1=0,sum2=0,m,v,sd;
    for(int i=0;i<size;i++)
    {
        sum1+=a[i];
    }
    m = sum1/size;
    for(int j=0;j<size;j++)
    {
        sum2+=pow((a[j]-m),2);
    }
    v = sum2/size;
    sd = sqrt(v);
    return sd;
}
