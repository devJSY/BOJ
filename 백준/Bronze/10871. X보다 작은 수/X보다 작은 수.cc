#include <iostream>

int main()
{
	int i, N, X, A;

	scanf("%d%d", &N, &X);

	for (i = 0; i < N; ++i)
	{
		scanf("%d", &A);
		if (A < X) printf("%d ", A);
	}
}