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

int* MergeSorting(int *arr, int begin, int flag, int end){
	if((flag - begin) == 1 && (end - flag) == 1){
		if (arr[begin] > arr[end]){
			Exchange(arr[begin], arr[end]);
		}
		return arr;
	}
	else if ((flag - begin) == 0 && (end - flag) ==1) {
		return arr;
	}
	else{// definite position of the array memeber
		int leftbegin = begin;
		int leftflag = begin / 2;
		int leftend = begin - leftflag;
		int rightbegin = flag;
		int rightflag = flag + (end - flag) / 2;
		int rightend = end;
		MergeSorting(arr, leftbegin, leftflag, leftend);
		MergeSorting(arr, rightbegin, rightflag, rightend);
	}
}

void Exchange(int &a, int &b){
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}