#include <iostream>

void bubble_sort(int a[],int size);

int main()
{
    using namespace std;
    int a[]={1,4,9,3,2,4};
    bubble_sort(a,6);
    for(int i=0;i<6;i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
void bubble_sort(int a[],int size)
{
    for(int i=size-1;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }
}
