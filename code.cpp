#include <iostream>

using namespace std;

// using nested loops to print a patterns

// int n = 6;

// for (int i = 0; i < n; i++)
// {

//     char ch = 'A';

//     for (int j = 0; j < n; j++)
//     {
//         cout << ch << " ";
//         ch = ch + 1;
//     }

//     cout << endl;
// }

// using nested loops to print a patterns
//    int n = 3;

//    int num = 1;

//    for (int i = 0; i < n ; i++) {

//     for (int j = 0; j < n; j++) {
//         cout << num << " ";
//         num++;
//     }

//     cout << endl;

//    }

// cout << "after pattern : " << num << endl;

// PB 3

// int n = 3;
//  char ch = 'A';

//  for ( int i = 0; i < n; i++)
//  {
//    for (int j = 0; j <n ; j++)  {
// cout << ch << " ";
// ch++;
//    }

//     cout << endl;
//  }

// PB4 (tRiangle pattern)

// int n = 6;

// for (int i = 1; i <= n; i++)
// {
//     for (int j = 1; j <= i; j++)
//     {

//         cout << "*" << " ";
//     }
//     cout << endl;
// }

// PB5 (tRiangle pattern 2)

// int n = 4;

// for(int i =1; i<=n ; i++) { // outer loop ( will run n times)
//     for(int j =1; j <= i; j++) { // inner loop
//         cout << i << " ";
//     }
//     cout << endl;

// }

// PB6 (tRiangle pattern 3)

// char input, alphabet = 'A';
// int i, j;

// cout << "Enter the uppercase character you want to print in the last row:";
// cin >> input;

// // outer loop is responsible for rows
// for (int i = 1; i <= (input - 'A' + 1); i++)
// {

//     // inner loop is responsible for columns
//     for (int j = 1; j <= i; j++)
//     {
//         cout << alphabet << " ";
//     }
//     alphabet++;

//     // give line breaks after ending every row
//     cout << "\n";
// }

// PB7 (tRiangle pattern 4)

// int n = 4;

// for (int i = 0; i <= n; i++)
// {

//     for (int j = 1; j <= i; j++)
//     {
//         cout << j << " "; /* code */
//     }
//     cout << endl;
// }

// PB8 (reverse tRiangle pattern 5)

// int n = 4;

// for (int i = 0; i < n; i++)
// {

//     for (int j = i + 1; j > 0; j--)
//     {
//         cout << j;
//     }
//     cout << endl;
// }

// PB9 (Inverted tRiangle pattern 6)

// int n = 4;

// int num = 1;
// for (int i = 0; i <= n; i++)

// {

//     // cout << i << " ";
//     //     spaces
//     for (int j = 0; j < i; j++)
//     {
//         cout << j;
//     }

// // nums

//     for (int j = 0; j < n - i; j++)
//     {

//         cout << (i + 1);
//     }

//     cout << endl;
// }

// int n = 3;

// for(int i = 1; i <= n; i++) {

//    for(int j =1 ; j <= i ; j++) {
//         cout << j << " ";
//    }
//    cout << endl;
// }

//     int n = 3;
//     int num = 1;

//     for (int i = 1; i <= n; i++)
//     {

//        for(int j = 1; j <=i; j++) {
//             cout << num << " ";
//             num++;

//         }

// cout << endl;

// }

// Reversed Floyd’s Triangle
// int n = 5;
// int num = n * (n + 1) / 2; // formula to find the sum of n natural numbers

// for (int i = n; i >= 1; i--)
// {

//    for(int j = 1; j <= i; j++) {
//         cout << num << " ";
//         num--;

//     }
//     cout << endl;

// }

// convert decimal to binary.

// int decToBinary (int decNum) {
//     int ans = 0;
//     int pow = 1;

//     while (decNum > 0) {
//         int rem = decNum % 2;
//          decNum /= 2;

//          ans += rem * pow;
//          pow *= 10;
//     }
//     return ans;

// }
// int main () {
//     int decNum = 50;

// cout << "Decimal Number: " << decToBinary(decNum) << endl;
// return 0;
// }

// convert binary to decimal

// int binarytoDec(int num)
// {

//     int value = 0;
//     int pow = 1;

//     while (num > 0)
//     {
//         int rem = num % 10; // remainder

//         value += rem * pow; // sum
//         pow *= 2;           // update power of 2
//         num /= 10;          // // update num
//     }
//     return value;
// }

// int main()
// {
//     int num = 101010;

//     cout << binarytoDec(num) << endl;
//     return 0;
// }
