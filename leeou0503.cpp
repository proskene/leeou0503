#include <iostream>
using namespace std;
#define MAX 52
#define DIVI 13


int main()
{
	int A[MAX] = {0, };
	int player[52] = { 0, };
	srand((unsigned)time(0));

	for (int i = 0; i < MAX; ++i)
	{
		A[i] = i;
	}

	for (int i = 0; i < MAX ; ++i)
	{
		int First = rand() % MAX;
		int Second = rand() % MAX;

		int Temp = A[First];
		A[First] = A[Second];
		A[Second] = Temp;
	}
	
	int cardindex = 0;
	for (int i = 0; i < 2; ++i)
	{
		player[i] = A[i];
	}
	
	for (int i = 0; i < 2; ++i)
		int Type = player[i] / 13;
	    int Number = player[i] % 13;


		switch (Type)
		{
			case 0;
				cout << "HEART" << " ";
				break

					case 0;
				cout << "CLOVER" << " ";
				break

					case 0;
				cout << "DIMOND" << " ";
				break

					case 0;
				cout << "SPADE" << " ";
				break
		}

	switch (Number)
	{
		    case 12;
			cout << "K" << " ";
			break

			case 11;
			cout << "Q" << " ";
			break

			case 10;
			cout << "J" << " ";
			break

			case 0;
			cout << "A" << " ";
			break
			default;
			cout << Number + 1 << " ";
			break
	}

	cout << "player" << "\t" << endl;
	return 0;
}

