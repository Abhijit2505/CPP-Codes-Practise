#include <iostream>

void Count2s(int array[],int size,int count2s);

int main()
{
    using namespace std;
    int size,count2s=0;
    cout << "Enter the size of the array :- ";
    cin >> size;
    int array[size];
    Count2s(array,size,count2s);
}
void Count2s(int array[],int size,int count2s)
{
    using namespace std;
    cout << "Enter " << size << " array entries :- ";
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
        if(array[i]==2)
        {
            count2s++;
        }
    }
    cout << " Number of 2s in the array = " << count2s;
}
