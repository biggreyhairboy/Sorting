// Utility.h

#pragma once
#include <iostream>

//using namespace System;
using namespace std;

namespace Utility {

	class Printer
	{
		// TODO: Add your methods for this class here.
	public:
		void PrintArray(int *arr){
			int len = sizeof(arr)/ sizeof(arr[0]);
			for (int i = 0; i < len; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}

		void PrintArray(double *arr, int length){
			for (int i = 0; i < length; i++){
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	};
}
