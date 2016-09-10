// Multiply.cpp : Author:Austin Boyd; Class: INFO 450; Date: 9/10/16
// The purpose of this program is to output a mutiplication table of 1-10 usinf for-loops and arrays

#include "stdafx.h"
#include <iostream>
using namespace std;
#define _CRT_SECURE_NO_WARNINGS


int main()
{
	//initializing vars
	int myArray[10] = {1,2,3,4,5,6,7,8,9,10};
	int myArray2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int mult = 0;

	//the output
	for (int i = 0; i < 10; i++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << myArray[i] * myArray2[mult] << "\t";//tabbed, no line break
			
		}//END for
		cout << " " << endl;//line break
		mult++;//incrimenting the index of the second array
	}//END for



    return 0;
}//end main

