#include <iostream>
using namespace std;

typedef int* intptr;

int main()
{
    int d1, d2;
    cout << "Enter the row and column dimensions of the array " << endl;
    cin >> d1 >> d2;

    /// declaration of dimensions of array
    intptr *m=new intptr[d1];
    int i, j;
    for(i=0;i<d1;i++)
    {
        m[i] = new int[d2];
    }

    cout << "Enter " << d1 << "rows of" << d2 << "integers each:\n";

    for(i=0;i<d1;i++)
    {
        for(j=0;j<d2;j++)
        {
           cin >> m[i][j];
        }
        cout << endl;
    }
    for(i=0;i<d1;i++)
    {
        for(j=0;j<d2;j++)
        {
           cout << m[i][j] << " ";
        }
        cout << endl;
    }
    for(i=0;i<d1;i++)
    {
        delete[] m[i];
    }
    delete[] m;

    return 0;
}
