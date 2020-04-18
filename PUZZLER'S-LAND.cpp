/// incomplete program ///
#include <iostream>
#include <cstdlib>

void shoot(bool& Bob_alive, double accuracy);           /// This program is wrong.

int main()
{
    using namespace std;
    bool bob;
    shoot(bob,0.5);
    return 0;
}
void shoot(bool& Bob_alive, double accuracy)
{
    using namespace std;
    double p;
    p = (double)rand()%2;
    if (p < accuracy)
    {
        Bob_alive = 0;
    }
    else
    {
        Bob_alive = 1;
    }
    cout << Bob_alive;
}
