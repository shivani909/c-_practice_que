#include <iostream>

using namespace std;

// array using for loop

// int main()
// {

//     int marks[5] = {55, 66, 77, 88, 99};

//     int size = sizeof(marks) / sizeof(int);

//     cout << marks[5] << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout << marks[i] << " ";
//     }

//     return 0;
// }

// q1 Find the smallest and largest array
// int main()
// {
//     int num[] = {5, 15, 22, 1, -15, -24};

//     int size = 6;

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//        smallest = min(num[i], smallest);
//        largest = max(num[i], largest);
//     }
//     cout << smallest << endl;
//     cout << largest << endl;

// }

// q2 print index of smallest and largest array

// int main()
// {

//     int num[] = {5, 15, 22, 1, -15, -24};

//     int smallest = INT_MAX;
//     int largest = INT_MIN;

//     int size = 6;
//    int smallestIndex = -1;
//    int largestIndex = -1;

//     for (int i = 0; i < size; i++)
//     {

//        if (num[i] < smallest) {
//         smallest = num[i];
//         smallestIndex = i;

//        }

//        if (num[i] > largest)
//        {
//        largest = num[i];
//          largestIndex = i;
//        }

//     }

//     cout << "Smallest: " << smallest << " at index: " << smallestIndex << endl;
//     cout << "Largest: " << largest << " at index: " << largestIndex << endl;
//     return 0;
// }

// q3 linear search

// int linearSearch(int arr[], int size, int target)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {

//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {

//     int arr[] = {6, 7, 0, 9, 10, 11, 8};
//     int target = 8;
//     int size = 7;

//     cout << "Index:" << linearSearch(arr, size, target) << endl;
// }

// q4 reverse an array

void reverseArray(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{

    int arr[] = {4, 2, 7, 8, 1, 2, 5};

    int sz = 7;

    reverseArray(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
