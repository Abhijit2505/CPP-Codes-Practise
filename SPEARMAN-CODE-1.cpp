# include<bits/stdc++.h>
using namespace std;

void fill_array1(double a[],int size);
void fill_array2(double b[],int size);
double ranks(double l[],double p,int size);
void bubble_sort(double a[],int size);
double rank_coefficient(double d,int n);

int main()
{
    int n;
    cin >> n;
    double a[n],b[n],rnk1,rnk2,rc,d;
    fill_array1(a,n);
    fill_array2(b,n);
    double sum = 0;
    for(int j=0;j<n;j++)
    {
        rnk1 = ranks(a,a[j],n);
        rnk2 = ranks(b,b[j],n);
        sum += pow((rnk1 - rnk2),2);
    }
    d = sum;
    cout << d << endl;
    rc = rank_coefficient(d,n);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);
    cout << rc << endl;
    return 0;
}
void fill_array1(double a[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> a[i];
    }
}
void fill_array2(double b[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin >> b[i];
    }
}
double rank_coefficient(double d,int n)
{
    double rc;
    rc = 1 - ((6*d)/(n*(pow(n,2)-1)));
    return rc;
}
double ranks(double l[],double p,int size)
{
    int count;
    for(int i=0;i<size;i++)
    {
        bubble_sort(l,size);
        if(p==l[i])
        {
            count = i+1;
            break;
        }
    }
    cout << count << endl;
    return count;
}
void bubble_sort(double a[],int size)
{
    for(int i=size-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j] > a[j+1])
            {
                double temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
