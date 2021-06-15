
/*************************************************************************
** Author : @perfectephraim
** Program : hw4, q6
** Date Created : June 3, 2021
** Date Last Modified : June 4, 2021
** Language : C++
** Usage : No command line arguments
** Problem:
Write a program that finds and prints all of the prime numbers between 3 and 1000. Print
them and display the total prime numbers between 3 and 1000.

** Pseudocode:
** 1) Set Boolean to true if prime no. identified 
** 2) 
*************************************************************************/


#include <iostream>
using namespace std;

int isPrimeNumber(int);

int main()
{
   bool isPrime;
   for(int n = 3; n < 1000; n++) {
      // isPrime will be true for prime numbers
      isPrime = isPrimeNumber(n);

      if(isPrime == true)
         cout<<n<<" ";
   }
   return 0;
}

// Function that checks whether n is prime or not
int isPrimeNumber(int n) {
   bool isPrime = true;

   for(int i = 2; i <= n/2; i++) {
      if (n%i == 0) {
         isPrime = false;
         break;
      }
   }  
   // returns all prime nums between 1 to 1000 in Variable type int 
   return isPrime;
}