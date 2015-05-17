//cpp inserting for int type
//auther patrick yang
//create time: 20150517
//TODO: template insert sorting for most types

//recurrence is one the most important concept in algorithem

#include <iostream>
#include "..\\Utility\\Utility.h"

using namespace std;
using namespace Utility;

int * MergeSorting(int *arr, int LeftFlag, int RightFlag);

void main()
{
	cout << "hi there!" << endl;
	int iarr[] = { 9, 2, 3, 1, 0, 8, 19 };
	double darr[] = { 238.3, 12.0, 12, 99, 10, 9999.9 };
	Printer pr;
	pr.PrintArray(iarr, 7);
	pr.PrintArray(darr, 6);
	getchar();
}

int* MergeSorting(int *arr, int LeftFlag, int RightFlag){
	if (LeftFlag >= 2){
		int SubLeftLeftFlag = LeftFlag / 2;
		int SubRightLeftFlag = LeftFlag - LeftFlag / 2;
		int SubLeftRightFlag = RightFlag / 2;
		int SubRightRightFlag = RightFlag - RightFlag / 2;
		MergeSorting(arr, SubLeftLeftFlag, SubLeftRightFlag);
		MergeSorting(arr + LeftFlag, SubRightLeftFlag, SubRightRightFlag);
	}
	else {
		if ()
	}
}

void Exchange(int &a, int &b){
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}