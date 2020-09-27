

#include<iostream>

#include<ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	const int SIZE = 10;
	int arr[SIZE];
	int a;
	
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10;
		if (i == 0);
		else {

			for (int j = i; j >= 0; j--) {
				if (arr[i] == arr[j]) {
					j = i;
					arr[i] = rand() % 10;
				}
			}
		}
		cout << arr[i] << endl;
	}
	
}

