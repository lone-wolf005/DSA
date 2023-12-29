// Radhe Radhe
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
void insertion_sort(int arr[], int n)
{
    int i = 1;
    while (i < n)
    {
        int j = i - 1;
        int temp = arr[i];
        while (j >= 0 && temp < arr[j])
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        i++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[7] = {3, 6, 3, 2, 5, 3, 8};
    insertion_sort(arr, 7);

    return 0;
}