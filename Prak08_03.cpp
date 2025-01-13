
#include <iostream>
using namespace std;

bool doesNContainK(int n, int k) {

    int mask = n & k;
    return (mask == k) ? true : false;

}

int main()
{
    
    int n, k; cin >> n >> k;

    if (doesNContainK(n, k)) cout << "true";
    else cout << "false";
    
}

