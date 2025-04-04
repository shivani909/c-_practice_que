#include <iostream>
#include <cmath>
using namespace std;

int main()
{

   int n;
   cout << "write a number" << endl;
   cin >> n;

   int sq = sqrt(n);
   bool prime = true;

   for (int i = 2; i <= sq; i++)
   {

      if (n % i == 0)
      {
         prime = false;
      }
   }

   if (prime == true)
   {
      cout << "no is prime" << endl;
   }
   else
   {
      cout << "no is not prime" << endl;
   }
}
