/*************************************************************************
** Author : @perfectephraim
** Program : hw4, q5
** Date Created : June 3, 2021
** Date Last Modified : June 4, 2021
** Usage : No command line arguments
** Problem:
Write a program that computes the value of ex by using the formula
ex = 1 +
x1
1!
+
x2
2!
+
x3
3!
+    (3)
Prompt the user for the desired accuracy of e, i.e. the number of terms in the summation
and the power of "e". Use 10 digits of precision to display the result.

** Pseudocode:
** 1)
** 2)
*************************************************************************/



// C++ Efficient program to calculate
// e raise to the power x
#include <bits/stdc++.h>
using namespace std;
 
// Returns approximate value of e^x
// using sum of first n terms of Taylor Series
float exponential(int n, float x)
{
    float sum = 1.0f; // initialize sum of series
 
    for (int i = n - 1; i > 0; --i )
        sum = 1 + x * sum / i;
 
    return sum;
}
 
// Driver code
int main()
{
    int n = 10;
    float x = 1.0f;
    cout << "e^x = " << fixed << setprecision(5) << exponential(n, x);
    return 0;
}