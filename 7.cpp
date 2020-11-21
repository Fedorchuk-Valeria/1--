#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i;
    for (i = 100; i <= 999; i++)
    {
        if (pow (i/10,2) - pow (i % 10,2) == i)
        {
            cout << i << endl;
        }
    }
    return 0;
}
