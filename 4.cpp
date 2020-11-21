#include <iostream>
#include <math.h>
using namespace std;

double Fact( int i ) {
    if ( i == 1 || i == 0 ) { return 1; }
    else {
    return i * Fact( i - 1 );}
}
int main()
{
    float x, y, S;
    int n, m, k, i;
    cout << "Enter number of members:";
    cin >> n;
    cout << "Enter amount of numbers:";
    cin >> m;
    cout << "Enter x in the interim [0,1; 1]:";
     for (k = 1; k <= m; k++)
        {
           cin >> x;
           if (x >= 0.1 && x <= 1)
           {
             S = 0;
             for (i = 0; i <= n - 1; i++)
           {
             S += pow (-1,i) * (2*pow (i,2) + 1) * pow (x,2*i) / Fact (2*i);
           }
           y = (1 - x * x / 2) * cos(x) - x / 2 * sin(x);
           cout << "x = " << x << "\t" << "S = " << S << "\t" << "y = " << y << endl;
    }
    else {
    cout << "error" << endl;
    }
        }
return 0;
}
