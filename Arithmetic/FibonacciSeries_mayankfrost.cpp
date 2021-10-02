#include <iostream>

int main()
{
    int a = 1, b = 1, c, i, n;
    std::cout << "Enter how many terms (at least 1) of the fibonacci series must be printed\n";
    while (true)
    {
        std::cin >> n;
        if (n < 1)
        {
            std::cout << "Number of terms must be at least 1\n";
        }
        else
        {
            break;
        }
    }
    std::cout << a << "\n"; // first term
    if (n > 1)
    {
        std::cout << b << "\n"; // second term
    }
    for (i = 3; i <= n; i++) // for the third term and the terms after those
    {
        c = a + b; // calculating the ith term using the previous 2 elements
        std::cout << c << "\n";
        a = b; // to store the "previous 2 terms" for the next term
        b = c;
    }
}