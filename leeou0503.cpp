#include <iostream>
using namespace std;

#define MAX 52

int main()
{
	int A[MAX] = { 0, };
	srand((unsigned int) time(0));

	for (int i = 0; i < MAX; i++)
	{
		A[i] = i + 1;
	}

		for ( int i = 0; i < MAX * 2; ++i)
		{
	    int First = rand() % MAX;
		int Second = rand() % MAX;

		int Temp = A[First];
		A[First] = A[Second];
		A[Second] = Temp;
	}

	for (int i = 0; i < MAX; ++i)
	{
		cout <<A[i] << ",";
	}

	return 0;
}

