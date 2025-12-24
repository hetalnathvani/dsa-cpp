#include<iostream>

using namespace std;

int main()
{
    int ans = 0;
    int arr[5] = {2, 3, 1, 3, 2};
    int size = 5;

    for (int i = 0; i < size; i++) {
        ans = ans^arr[i]; // XOR : 0^1 = 1, 1^1 = 0
    }

    return ans;
}
