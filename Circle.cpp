

#include <iostream>
using namespace std;
int main()
{
	int m;
	cin >> m;
	int _count_ = 0;

	for (int i = 0; i < m;) {
		if (_count_ % 2 == 0) {

			i = i + 10;

		}
		else {

			i = i + 20;
		}
		_count_++;
		cout << i << endl;

	}


	cout << _count_ << endl;
}
