
#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
    double s, c;

    cout << "s = ";
    cin >> s;

    c = calculateC(s);

    cout << "c = " << c << endl;

    return 0;
}
