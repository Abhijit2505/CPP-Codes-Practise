#include <iostream>
int DECLARED_SIZE = 20;

void fill_array(int a[],int size,int& number_used);
int search(const int a[],int number_used,int target);

int main()
{
    using namespace std;
    int a[DECLARED_SIZE],number_used,target;
    fill_array(a,DECLARED_SIZE,number_used);
    char ans;
    int result;
    do
    {
        cout << "Enter a number to search for:- ";
        cin >> target;

        result = search(a,number_used,target);
        if(result == -1)
        {
            cout << "The target number is not present in an array";
        }
        else
        {
            cout << target << " is stored in the array position " << result << endl;
        }
        cout << "\nDo you want to search again ? [Y/N]:- ";
        cin >> ans;
    }while((ans!='N')&&(ans!='n'));

    cout << "End of the program";
    return 0;
}
void fill_array(int a[],int size,int& number_used)
{
    using namespace std;
    cout << "Enter numbers between the size " << size;
    int next,i = 0;
    cin >> next;
    while((next>=0)&&(i<size))
    {
        a[i]=next;
        i++;
        cin >> next;
    }
    number_used=i;
}
int search(const int a[],int number_used,int target)
{
    int i=0;
    bool found=false;
    while((!found)&&(i < number_used))
    {
        if(target == a[i])
        {
            found=true;
        }
        else
        {
            i++;
        }
    }
    if(found)
        return i;
    else
        return -1;
}
