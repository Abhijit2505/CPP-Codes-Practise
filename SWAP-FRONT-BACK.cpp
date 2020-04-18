#include <iostream>

void fill_array(int array[],int size);
void swapFrontBack(int array[],const int size);

int main()
{
    using namespace std;
    int size;
    cout << "Enter the size of the array :- " ;
    cin >> size;
    int array[size];
    fill_array(array,size);
    swapFrontBack(array,size);
    return 0;
}
void fill_array(int array[],int size)
{
    using namespace std;
    cout << "Enter " << size << " array entries :- ";
    for(int i=0;i<size;i++)
    {
        cin >> array[i];
    }
}
void swapFrontBack(int array[],const int size)
{
    using namespace std;
    int tem = array[0];
    array[0]=array[size-1];
    array[size-1]=tem;
    cout << "The new array is :- ";
    for(int i=0;i<size;i++)
    {
        cout << array[i] << " ";
    }
}









