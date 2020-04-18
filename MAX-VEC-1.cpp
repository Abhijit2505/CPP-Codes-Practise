
#include <iostream>
#include <vector>

void fill_array(int a);
void max_element(int a);


int main()
{
    using namespace std;
    vector<int> a;
    cout << "Enter the values you want to sort :- ";
    fill_array(a);
    max_element(a);
    return 0;
}
void fill_array(vector<int> a)
{
    int next;
    for(int i=0;i<a.size();i++)
    {
        cin >> next;
        a.push_back(next);
    }
}
void max_element(int a)
{
    using namespace std;
    int max;
    max = a[0];
    for(int i=0;i<a.size();i++)
    {
        if(a[i]>max)
        {
            max = a[i]
        }
    }
    cout << "The maximum among the entered numbers is " << max;
}





