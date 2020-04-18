#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> v;
    cout << "Enter a list of positive integers to include"
         << "Add a negative integer at the end";

    int next;
    cin >> next;
    while(next>0)
    {
        v.push_back(next);
        cout << next << " added ";
        cout << " size " << v.size() << endl;
        cin >> next;
    }
    cout << "You entered:\n";
    for(unsigned int i=0;i<v.size();i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
