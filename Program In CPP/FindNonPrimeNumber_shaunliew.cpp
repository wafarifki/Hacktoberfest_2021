#include <iostream>
#include <cmath>
using namespace std;
/* Prime Number
 This program is a program that prompts the user to input a positive integer less than 50. Let's
call it n-th value. Using the n-th value, as the basis, we can find a series of the first n-th
(positive) number series which is not a prime number.
 */
int main()
{
    int counter, n, count = 1;
    bool prime = true;
    do
    {
        cout << "Enter a positive integer less than 50 that you want to show: ";
        cin >> n;
        if (n < 1 || n > 50)
        {
            cout << "invalid input\n";
        }

    } while (n < 1 || n > 50);

    cout << "Series of the first " << n << "-th(positive) number series which is not a prime number:\n";
    // validation of prime number

    for (int num = 1; num <= 100; num++)
    {

        // for even integer
        if (num % 2 == 0)
        {
            if (num != 2)
            {
                prime = false;
            }
            else
            {
                prime = true;
            }
        }
        else // odd integer
        {
            if (num == 1 || num == 9) // if it is 1 or 9
            {
                prime = false;
            }
            else if (num > 1 && num < 9) // if it is 3,5,7
            {
                prime = true;
            }
            else // if it is odd integer that more than 1
            {
                counter = sqrt(num);
                for (int i = 3; i <= counter; i += 2)
                {
                    if (num % i == 0)
                    {
                        prime = false;
                        break;
                    }
                    else
                    {
                        prime = true;
                    }
                }
            }
        }
        if (prime == false)
        {
            if (count != n)
            {
                cout << num << ", ";
                count++;
            }
            else
            {
                cout << num << ". ";
                break;
            }
        }
    }

    return 0;
}