#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    float a, b, shag, y, x, mini, koren ;
    cout << "¬ведите на сколько частей разделить область поиска корн€:";
    cin >> n;
    a = 0.5;
    b = 1.5;
    shag = (b - a) / n;
    x = a;
    mini = sin(log10(x)) + x * cos(x*x) / sin(x*x);
    y = sin(log10(x)) + x * cos(x*x) / sin(x*x);
    while (fabs(y) <= fabs(mini) && x <= b)
    {
        koren = x;
        mini = y;
        x += shag;
        y = sin(log10(x)) + x * cos(x*x) / sin(x*x);
    }
    cout << "ѕриближенный корень: " << koren;
    return 0;
}
