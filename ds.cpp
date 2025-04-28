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

// void reverseArray(int arr[], int sz)
// {
//     int start = 0;
//     int end = sz - 1;

//     while (start < end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main()
// {

//     int arr[] = {4, 2, 7, 8, 1, 2, 5};

//     int sz = 7;

//     reverseArray(arr, sz);
//     for (int i = 0; i < sz; i++)
//     {
//         cout << arr[i] << " ";
//     }

//     cout << endl;
// }

// q5 calculate sum and product of all the numbers in an array

// int main() {

//     int arr[] = {2, 3, 4, 5, 6};

//     int sz = 5;

//     int sum = 0;
//     int product = 1;

//     for (int i = 0; i < sz; i++)
//     {
//       sum += arr[i];
//       product *=  arr[i];

//     }

//     cout << sum << endl;
//     cout << product << endl;

//   return 0;

// }

// q6 swap the max & min number of an array.
// int main()
// {

//     int arr[] = {2, 3, 4, 5, 6};

// int sz = 5;

// int largest = INT_MIN;
// int smallest = INT_MAX;

// int largestIndex = -1;
// int smallestIndex = -1;

// for (int i = 0; i < sz; i++)
// {
//     if (arr[i] < smallest)
//     {
//         smallest = arr[i];
//         smallestIndex = i;
//         // element at index i is smaller than smallest
//     }

//     if (arr[i] > largest)
//     {
//             largest = arr[i];
//             largestIndex = i;
//             // swap the largest with the last element
//         }
//     }

//     swap(arr[largestIndex], arr[smallestIndex]);

//     cout << "Smallest: " << smallest << "smallest index:" << smallestIndex << endl;
//     cout << "Largest: " << largest << "largest index:" << largestIndex << endl;

//     cout << "Array after swapping: ";
//     for (int i = 0; i < sz; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// q7 print all the unique values in an array.

// int main()
// {

//   int arr[] = {2, 3, 4, 5, 6, 2, 3, 4};
//   int sz = 8;

//   // outerloop

//   for (int i = 0; i < sz; i++)
//   {
//     bool isUnique = true;

//     for (int j = 0; j < sz; j++)
//     {
//       if (i != j && arr[i] == arr[j])
//       {

//         isUnique = false;

//         break;
//       }
//     }
//     if (isUnique)
//     {
//       cout << arr[i] << " ";
//     }
//   }
//   cout << endl;
// }

// q8 print intersection of 2 arrays

// int main()
// {

//   int arr1[] = {1, 2, 5, 0, 7, 6};
//   int arr2[] = {2, 6, 8, 7, 4, 8};

//   int sz1 = 6;
//   int sz2 = 6;

//   for (int i = 0; i < sz1; i++)
//   {
//     for (int j = 0; j < sz2; j++)
//     {
//       if (arr1[i] == arr2[j])
//       {
//         cout << arr1[i] << endl;
//         break;
//       }
//     }
//   }
// }
