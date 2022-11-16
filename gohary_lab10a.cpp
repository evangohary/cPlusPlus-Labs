//************************
// CH10A lab, Pointers
// Programmer: Evan Gohary
// Completed 11/10/2022 
//
// This program sorts, then find the median of two arrays.
//  One array is an even numbered array, one is odd
//************************************************

#include <iostream>
using namespace std;
void bubbleSort (int[], int); 
double median(int *, int); 
void printArray(int *, int);

int main(){
	
	int even[] = {17, 32, 45, 68, 99, 101, 67, 89, 22, 27}; // even array
	int odd[] = {17, 32, 45, 68, 99, 101, 67, 89, 22}; // odd array
	
//	int len1 = sizeof(evenArr)/sizeof(evenArr[0]); // get array length
//	sort(evenArr, evenArr + len1);
//   int temp1;
//	for(int i = 0; i < len; i++){}


	bubbleSort (odd, 9);
	bubbleSort (even, 10);
	
	cout << "\nMedian of array: ";
	printArray(odd,9);
	cout << "would be: " << median(odd, 9) << endl;
	cout << "\nMedian of array: ";
	printArray(even,10);
	cout << "would be: " << median(even,10) << endl << endl;


	return 0;
}

// Bubble sort, teachers method
void bubbleSort(int array[], int size){
	bool swap; 
	int temp;
	do{
		swap = false;
		for (int count = 0; count < (size -1); count++){
			if (array[count] > array[count + 1]){
				temp = array[count];
				array[count] = array[count +1];
				array[count + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
}
//compute the median of an array of num entries
double median(int *arr, int num){
	double med;
	if (num %  2 == 0){// is number of elements even?>
	int mid1 = num / 2, mid2 = (num / 2) - 1;
	med = ((*(arr + mid1) + *(arr+mid2)) / 2.0);
}	else {
		med = *(arr+ (num/2));
	} return med;
}
	//print the array
void printArray(int *p, int size){
	cout << endl;
	for (int k = 0; k < size; k++){
		cout << p[k] << " ";
	cout << endl;
	}
}











