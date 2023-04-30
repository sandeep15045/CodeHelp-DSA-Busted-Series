#include<iostream>
#include<vector>
#include<map>
#include <algorithm>
using namespace std;

// Function for finding first and last occurrence

void findFirstAndLast(int arr[], int n, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < n; i++) {
        if (x != arr[i])
            continue;
        if (first == -1)
            first = i;
        last = i;
    }
    if (first != -1)
        cout << "First Occurrence = " << first
            << "\nLast Occurrence = " << last;
    else
        cout << "Not Found";
}

// Driver code
int main()
{
    int arr[] = { 1, 2, 2, 2, 2, 3, 4, 7, 8,4, 8 };
    int n = sizeof(arr) / sizeof(int);
    int x = 4;
    findFirstAndLast(arr, n, x);
    return 0;
}
