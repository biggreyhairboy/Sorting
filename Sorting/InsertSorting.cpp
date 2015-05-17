//cpp inserting for int type
//auther patrick yang
//create time: 20150517
//TODO: template insert sorting for most types

#include <iostream>
#define GET_ARRAY_LEN(array, len){len = sizeof(array) / sizeof(array[0]);}
using namespace std;
int * InsertionSorting(int arr[], int length);
void PrintArray(int arr[], int lenght);

void main()
{
	int iarr[] = { 24, 43, 22, 1, 7, 9, 99, 0 };
	int len = sizeof(iarr) / sizeof(iarr[0]);
	int length;
	GET_ARRAY_LEN(iarr, length);
	cout << length;
	InsertionSorting(iarr, 8);
	PrintArray(iarr, 8);
	getchar();
}

int* InsertionSorting(int* arr, int length){
	if (length <= 1) return arr;
	int flag = arr[1];
	for (int FlagPostion = 1; FlagPostion < length; FlagPostion++){
		int InnerCounter = FlagPostion - 1;
		for (; InnerCounter >= 0; InnerCounter--){
			if (flag < arr[InnerCounter]){
				arr[InnerCounter + 1] = arr[InnerCounter];
			}
			else {
				break; //most import step
			}
			PrintArray(arr, 8);
		}
		if ((InnerCounter + 1) != FlagPostion - 1){
			arr[InnerCounter + 1] = flag;
		}

		flag = arr[FlagPostion + 1];
		PrintArray(arr, length);		
	}
}

void PrintArray(int arr[], int length){
	for (int i = 0; i < length; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}