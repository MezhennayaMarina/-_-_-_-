#include <iostream>
using namespace std;
int main()
{
	int **a, S;
 int i, j, n;
	S = 1;
	cout << " Input size N : " << endl;
	cin >> n;
		a = new int *[n];
		for (i = 0; i < n; i++)
			a[i] = new int[n]; 
		cout << "Input massive A : " << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) 
			cin>>a[i][j];
		for (j = 0; j < n; j++)
			for (i = 0; i < n; i++)
			if (i+j < n-1) S *= a[i][j];
	cout << "proizvedenie ravno :" << S << endl;
	for (int i = 0; i < n; i++);
	delete[] a;
}
