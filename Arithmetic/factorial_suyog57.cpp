#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number for which factorial is to be counted: ";
    cin >> n;

    long long int ans = 1;

    for (int i = 0; i < n - 1; i++)
    {
        ans *= (n - i);
        ans %= 1000000009;
    }
    cout << ans;

    return 0;
}