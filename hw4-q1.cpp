/*************************************************************************
** Author : @perfectephriam
** Program : hw4, q1
** Date Created : June 3, 2021
** Date Last Modified : June 4, 2021
** Usage : No command line arguments
** Problem:
Write a program that uses for statements to print the following separately, one below the
other. Use for loops to generate the patterns. All asterisks should be printed by a single
statement of the form
cout << '*'; and cout << " "

** Pseudocode:
** 1)
** 2)
*************************************************************************/

// installing c++ library 

#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		// creating 'i-th' line of first drawing
		for (int j = 1; j <= i; j++)
			cout << '*';
		for (int j = i + 1; j <= 10; j++)
			cout << " ";
		cout << " ";
		// creating 'i-th' line of second drawing
		for (int j = 1; j <= (11 - i); j++)
			cout << '*';
		for (int j = (11 - i) + 1; j <= 10; j++)
			cout << " ";
		cout << " ";
		// creating i-th line of third drawing
		for (int j = 1; j < i; j++)
			cout << " ";
		for (int j = i; j <= 10; j++)
			cout << '*';
		cout << " ";
		// creating i-th line of fourth drawing
		for (int j = 1; j < (11 - i); j++)
			cout << " ";
		for (int j = (11 - i); j <= 10; j++)
			cout << '*';
		cout << endl;
	}
	cout << endl;
}