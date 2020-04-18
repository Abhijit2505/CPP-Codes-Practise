#include <iostream>
int DECLARED_SIZE=20;

void fill_array(int a[],int size,int& number_used);
void sort(int a[],int number_used);
void swap_values(int& v1,int& v2);
int index_of_smallest(const int a[],int start_index,int number_used);

int main()
{
    using namespace std;
    cout << "This program sorts from lowest to highest numbers";

    int a[DECLARED_SIZE],number_used;
    fill_array(a,DECLARED_SIZE,number_used);
    sort(a,number_used);

    cout << "In sorted order numbers are:- ";
    for(int i=0;i<number_used;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
void fill_array(int a[],int size,int& number_used)
{
    using namespace std;
    cout << "Enter an array of numbers{include -ve at the end}:- ";
    int next,i=0;
    cin >> next;
    while((next>0)&&(i<size))
    {
        a[i]=next;
        i++;
        cin >> next;
    }
    number_used = i;
}
void sort(int a[],int number_used)
{
    int index_smallest;
    for(int i=0;i<number_used-1;i++)
    {
        index_smallest=index_of_smallest(a,i,number_used);
        swap_values(a[i],a[index_smallest]);
    }
}
void swap_values(int& v1,int& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}
int index_of_smallest(const int a[],int start_index,int number_used)
{
    int min=a[start_index],index_of_minimum=start_index;
    for(int i=start_index+1;i<number_used;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            index_of_minimum = i;
        }
    }
    return index_of_minimum;
}
