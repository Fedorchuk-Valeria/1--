#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float f, a, b, h, x;
    h = 0.2;
    a = 3;
    b = 4;
    for (x = a; x <= b; x += h)
    {
        f = 1 / (1 + exp(-x));
        cout << "x = " << x << "\t" << "y = " << f << endl;
    }
    return 0;
}
