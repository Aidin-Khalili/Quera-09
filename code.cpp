#include<iostream>
using namespace std;
int a, i, b, j, m;
int main()
{
	cin >> a;
	cin >> b;
	for (i = a; i <= b; i++) {
		m = 0;
		for (j = 1; j <= i; j++) {
			if (i % j == 0)
				m++;
		}
		if (m == 2)
			cout << "\n" << i;
	}

	return 0;
	system("Pause");
}
