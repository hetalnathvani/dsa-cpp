#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int n) {

    for (int i = 2; i < n; i++) {
        if (n%i == 0) {
            // not a prime no.
            cout << n << " is not a prime number" << endl;
            return 0;
        }
    }
    cout << n << " is a prime number" << endl;
    return 1;
}

int main()
{
    int num;
    cin >> num;

    isPrime(num);
}
