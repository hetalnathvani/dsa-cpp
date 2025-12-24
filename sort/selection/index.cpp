#include<iostream>
using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {23, 1, 45, 98, 7};
    for (int i = 0; i <= n-1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}
