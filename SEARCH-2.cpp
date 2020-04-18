#include <iostream>
int DECLARED_SIZE = 20;

void fill_array(int a[],int size,int& number_used);
/// used to fill the array by user input

int search(const int a[],int number_used,int target);
/// used to search the array for the target number

int main()
{
  using namespace std;
  int a[DECLARED_SIZE],number_used,target,result;
  char ans;

  do
  {
      cout << "Enter the array numbers:- ";
      fill_array(a,DECLARED_SIZE,number_used);
      cout << "Enter the number you wanna search";
      cin >> target;
      result = search(a,number_used,target);
      if(result == -1)
      {
          cout << target << " is not found in the array ";
      }
      else
      {
          cout << target << " is at position " << result << " of the array ";
      }
      cout << "Want to repeat ?[Y/N]";
      cin >> ans;
  }while((ans!='N')&&(ans!='n'));
  return 0;
}
void fill_array(int a[],int size,int& number_used)
{
    using namespace std;
    cout << "\nAdd a negative integer at the end of the numbers you are writing";
    int next,index = 0;
    cin >> next;
    while((next >0)&&(index<size))
    {
        a[index]=next;
        index++;
        cin >> next;
    }
    number_used = index;
}
int search(const int a[],int number_used,int target)
{
    int index=0;
    bool found=false;
    while((!found)&&(index < number_used))
    {
        if(target==a[index])
        {
           found = true;
        }
        else
        {
           index++;
        }
    }
    if(found)
    {
        return index;
    }
    else
    {
        return -1;
    }
}
