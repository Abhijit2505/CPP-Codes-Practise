# include<bits/stdc++.h>
using namespace std;

void fill_array1(double a[],int size);
void fill_array2(double b[],int size);
double mean(double a[],int size);
double std_dev(double a[],int size);
double pearson_coefficient(double mean1,double mean2,double sd1,double sd2,double a[],double b[],int size);

int main()
{
    int n;
    cin >> n;
    double a[n],b[n],mean1,mean2,sd1,sd2,rc;
    fill_array1(a,n);
    fill_array2(b,n);
    mean1 = mean(a,n);
    mean2 = mean(b,n);
    sd1 = std_dev(a,n);
    sd2 = std_dev(b,n);
    rc = pearson_coefficient(mean1,mean2,sd1,sd2,a,b,n);
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
double mean(double a[],int size)
{
    double sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=a[i];
    }
    return sum/size;
}
double std_dev(double a[],int size)
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
double pearson_coefficient(double mean1,double mean2,double sd1,double sd2,double a[],double b[],int size)
{
    double p=0,pearson_coeff;
    for(int i=0;i<size;i++)
    {
        p+=(a[i]-mean1)*(b[i]-mean2);
    }
    pearson_coeff = p/(size*sd1*sd2);
    return pearson_coeff;
}
