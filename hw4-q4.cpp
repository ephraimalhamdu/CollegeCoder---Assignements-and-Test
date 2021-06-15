/*************************************************************************
** Author : @perfectephraim
** Program : hw4, q4
** Date Created : June 3, 2021
** Date Last Modified : June 4, 2021
** Usage : No command line arguments
** Problem:
The factorial of a nonnegative integer n is written n! (pronounced \n factorial") and is dened
as follows:
n! = n  (n 􀀀 1)  (n 􀀀 2)  (n 􀀀 3)      1 (1)
5
0! = 1, 1! = 1 by denition.
For example, 5! = 5*4*3*2*1 = 120
(a) Write a program that reads a nonnegative integer and computes and prints its factorial.
Do not use scientic notation for displaying the result.
(b) Write a program that estimates the value of mathematical constant e by using the
formula:
e = 1 +
1
1!
+
1
2!
+
1
3!
+   

** Pseudocode:
** 1)
** 2)
*************************************************************************/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, accuracy;
    long double factorial = 1.0;

    cout << "Number for Factorial: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << n << "!" << "=" << factorial << endl;
        cout << "Desired Accuracy for \"e\"(number of terms in the series): ";
        cin >> accuracy;


        int A, B;
        double E, D;
        
        for (A=1; A<=15; A++ )
        {
            D=1;
            for (B=1; B<=A ; B++ )
            {
                D = D * B;
            }
            E = E + 1 / D;
        }
        cout<<setprecision(accuracy);
        cout << "e with " << accuracy << " terms = " << E + 1  << " (with " << accuracy << " digits of accuracy) " << endl;
    }

    return 0;
}