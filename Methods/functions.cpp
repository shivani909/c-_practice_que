#include <iostream>
#include <cmath>
using namespace std;

// q1 sum of digits

// suppose we have a number = 2345
// to find the sum of digits
// we will find its last digit first : num%10 = (remainder)
// then we will add remaining numbers remaining quotients num = num/10 (quotient)
// we will repeat this process until num becomes 0 (num > 0)

// int sumofDigits(int num)
// {
//     int digitSum = 0;

//     while (num > 0)
//     {
//         int lastDigit = num % 10; // last digit
//         num /= 10;       // remaining number

//         digitSum = lastDigit + digitSum; // add last digit to sum
//     }
//     return digitSum;
// }

// int main()
// {

//     cout << "Enter a number: " << sumofDigits(2345) << endl;

//     return 0;
//}

// q2 nCr binomial coefficient for n & r

// int factorial(int n)
// {
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r)
// {

// // variables
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_diff = factorial(n - r);

//     // binomial coefficiant formula

//     return fact_n / (fact_r * fact_diff);
// }

// int main()
// {

//     // values of nCr
//     int n = 8;
//     int r = 2;

//     // print the nCr value
//     cout << nCr(n, r) << endl;

//     return 0;
// }

// check if a number is prime or not

// bool checkPrime(int num, bool isPrime)
// {

//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     return isPrime;
// }

// int main()
// {

//     bool isPrime = true;
//     int num = 13;
//     cout << "number is:" << checkPrime(num, isPrime) << endl;
// }
// q3 print all prime numbers from 2 to N

// void primeNo(int n) {
//     for (int i = 2; i <= n; i++) {
//         bool prime = true;
//         for (int j = 2; j <= sqrt(i); j++) {
//             if (i % j == 0) {
//                 prime = false;
//                 break;
//             }
//         }
//         if (prime) {
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n = 1000;
//     primeNo(n);
//     return 0;
// }

// print nth fibonacci number
// 0 1 1 2 3 5 8 13 21 34

// formula : nth = (n-1)th + (n-2)th

// int solve(int n)
// {
//     if (n <= 1)
//         return n;

//     return solve(n - 1) + solve(n - 2);
// }
// int main()
// {
//     int n = 10;
//     cout << "Fibonacci number at position " << n << " is: " << solve(n) << endl;

//     return 0;
// }

// print fibonacci series
void printFibonacciSeries(int n) {
    int a = 0, b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n = 10; // Number of terms in the Fibonacci series
    printFibonacciSeries(n);
    return 0;
}