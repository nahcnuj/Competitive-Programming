#include <iostream>
using namespace std;
int main()
{
	int m,d;
	cin >> m >> d;
	cout << ((m%d) ? "NO" : "YES") << endl;

	return 0;
}
