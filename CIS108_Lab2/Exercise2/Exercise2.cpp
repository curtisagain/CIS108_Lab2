// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string title, author;
	int year, pages;

    cout << "Enter Title: ";
	cin >> title;
	
	cout << "Enter Author: ";
	cin >> author;

	cout << "Enter year published: ";
	cin >> year;

	cout << "Enter pagecount: ";
	cin >> pages;
	int constexpr current_year=2019;
	{ if (year > current_year - 10 )
		cout << "This book is younger than ten years old\n";
	else
		cout << "This book is at least ten years old\n";
	}


	{ if (pages < 100)
		cout << "This is a short book.\n";
	else if (pages >= 100 && pages <= 300)
		cout << "This book is an average book.\n";

	else if (pages > 300)
		cout << "This is a long book.\n";
	}
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
