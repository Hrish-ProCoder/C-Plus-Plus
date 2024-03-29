# Min Max program from given list of numbers
#include <iostream>
using namespace std;
void findMinAndMax(int arr[], int low, int high, int &min, int &max)
{


    if (low == high)
    {
        if (max < arr[low]) {
            max = arr[low];
        }

        if (min > arr[high]) {
            min = arr[high];
        }

        return;
    }


    if (high - low == 1)
    {
        if (arr[low] < arr[high])
        {
            if (min > arr[low]) {
                min = arr[low];
            }

            if (max < arr[high]) {
                max = arr[high];
            }}
        else {
            if (min > arr[high]) {
                min = arr[high];
            }

            if (max < arr[low]) {
                max = arr[low];
            }}
        return;}
    int mid = (low + high) / 2;

    findMinAndMax(arr, low, mid, min, max);

    findMinAndMax(arr, mid + 1, high, min, max);}

int main()
{
    int arr[] = { 9, 6, 3, 8, 5, 2, 4, 7, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int max = INT_MIN, min = INT_MAX;

    findMinAndMax(arr, 0, n - 1, min, max);

    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max;
    return 0;
}
