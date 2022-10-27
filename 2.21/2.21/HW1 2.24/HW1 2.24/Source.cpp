#include <iostream>
using namespace std;

int main()
{
	int n;

	cout << "輸入一個整數: ";
	cin >> n;

	if (n % 2 == 0)
		cout << n << " even。";
	else
		cout << n << " odd。";

	return 0;
}