#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    float a, b, c;
    cout << "<<LOOKING FOR SIDE LENGTH ON A RIGHT TRIANGLE>>\n";
    cout << "1. Finding the Length of the Hypotenuse\n";
    cout << "2. Finding the Length of the Perpendicular\n";
    cout << "3. Finding the Side Length\n";
    cout << "Choice: ";
        cin >> x;
    cout << " " << endl;
    switch (x)
{
    case 1:
            cout << "Finding the Length of the Hypotenuse" << endl;
            cout << " " << endl;
            cout << "Enter base side value: ";
                cin >> b;

            cout << "Enter the vertical side value: ";
                cin >> c;

            a = sqrt((b*b) + (c*c));

            cout << "Results: " << a;
    break;

    case 2:
            cout << "Finding the Length of the Perpendicular" << endl;
            cout << " " << endl;
            cout << "Enter the value of the hypotenuse: ";
                cin >> a;

            cout << "Enter base side value: ";
                cin >> b;

            c = sqrt((a*a) - (b*b));

            cout << "Results: " << c;
    break;

    case 3:
            cout << "Finding the Side Length" << endl;
            cout << " " << endl;
            cout << "Enter the value of the hypotenuse: ";
                cin >> a;

            cout << "Enter the vertical side value: ";
                cin >> c;

            b = sqrt((pow(a, 2)) - (pow(c, 2)));

            cout << "Results: " << b;
    break;
}

return 0;
}
