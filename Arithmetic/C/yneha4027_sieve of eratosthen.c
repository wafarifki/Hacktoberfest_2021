
#include <stdio.h>


void SieveOfEratosthenes(int n)
{

	int prime[n + 1];
	memset(prime, 1, sizeof(prime));

	for (int p = 2; p * p <= n; p++)
	{
		if (prime[p])
		{

			for (int i = p * p; i <= n; i += p)
				prime[i] =0;
		}
	}


	for (int p = 2; p <= n; p++)
		if (prime[p])
			printf("%d ",p);
}


int main()
{
	int n = 30;
scanf("%d",&n);
	SieveOfEratosthenes(n);
	return 0;
}
