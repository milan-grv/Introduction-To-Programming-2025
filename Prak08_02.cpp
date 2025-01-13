#include <iostream>
using namespace std;

int codedNumber(int n, int k) {

	int mask = ~(~0 << k);

	return n & mask;
}

int main()
{

	int n, k; cin >> n >> k;

	cout << codedNumber(n, k) << endl;

}
