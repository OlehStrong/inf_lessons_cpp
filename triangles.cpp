
#include <fstream>
using namespace std;
int main()
{

	ifstream fileIn("data.in");
	int s;
	fileIn >> s;
	fileIn.close();
	ofstream fileOut("data.sol");
	int o = 1;

	for (int i = 0; i < s; i++) 
	{
		o = o*2;

	}
	fileOut << o << endl;
	fileOut.close();

}