//cpp inserting for int type
//auther patrick yang
//create time: 20150517
//TODO: template insert sorting for most types

//recurrence is one the most important concept in algorithem

#include <iostream>
#include "..\\Utility\\Utility.h"
#define GET_ARRAY_LEN(arr, len){sizeof(arr) / sizeof(arr[0]);}
void Exchange(int &a, int &b);
void copyArrayToAnother(int * SourceArray, int BeginPosition, int EndPostion, int* DestArray);
void MergeSorting(int *arr, int LeftFlag, int flag, int RightFlag);

using namespace std;
using namespace Utility;

Printer pr;
int len;

void main()
{
	cout << "hi there!" << endl;
	int iarr[] = { 9, 2, 3, 1, 0, 8, 19 };
	pr.PrintArray(iarr);
	MergeSorting(iarr, 0, 3, 6);
	getchar();
}

//int* MergeSorting(int *arr, int begin, int flag, int end){
//	
//	if((flag - begin) == 1 && (end - flag) == 0){
//		if (arr[begin] > arr[end]){
//			Exchange(arr[begin], arr[end]);
//		}
//		return arr;
//	} 
//	else if ((flag - begin) == 1 && (end - flag) ==0) {
//		return arr;
//	}
//	else{// definite position of the array memeber
//		int leftbegin = begin;
//		int leftflag = begin / 2;
//		int leftend = begin - leftflag;
//		int rightbegin = flag + 1;
//		int rightflag = flag + (end + 1 - flag) / 2;
//		int rightend = end;
//		MergeSorting(arr, leftbegin, leftflag, leftend);
//		MergeSorting(arr, rightbegin, rightflag, rightend);
//	}
//}
void MergeSorting(int* arr, int begin, int flag, int end){
	//flag = (end + begin) / 2
	int LeftLen = flag - begin + 1;
	int RightLen = end - flag;
	int *LeftArray = new int[LeftLen];
	int *RightArray = new int[RightLen];
	copyArrayToAnother(arr, begin, flag, LeftArray);
	copyArrayToAnother(arr, flag + 1, end, RightArray);
	int i = 1, j = 1;
	for (int k = begin; k < end; k++){
		if (LeftArray[i] <= RightArray[j]){
			arr[k] = LeftArray[i];
			i++;
			pr.PrintArray(arr);
		}
		else {
			arr[k] = RightArray[j];
			j++;
			pr.PrintArray(arr);
		}
	}

}
void Exchange(int &a, int &b){
	int tmp = 0;
	tmp = a;
	a = b;
	b = tmp;
}

void copyArrayToAnother(int * SourceArray, int BeginPosition, int EndPostion, int* DestArray){
	for (int i = 0; i < EndPostion + 1; i++){
		DestArray[i] = SourceArray[i + BeginPosition];
	}
}