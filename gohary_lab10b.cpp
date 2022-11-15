//************************
// CH10B lab, Dynamic memory allocation
// Programmer: Evan Gohary
// Completed 11/10/2022 
//
// This program accepts a number of students from the user, then dynamically
// creates an array that is large enough to contain the number of movies watched 
// for each student. Print the average, then, free the allocated array when done
//************************************************

#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

int size;

double average(int *a, int size);
void getData(int *a, int size);
void displaySorted (int *a, int size);

int main(){
	int numberOfStudents;
	int *movieData;
	double ave;
	
	cout << "Enter number of students: ";
	cin >> numberOfStudents;
	while(numberOfStudents <= 0){
		cout << "Number of students must be > 0, please re-enter: ";
		cin >> numberOfStudents;
	}
	
	movieData = new int[numberOfStudents];
	
	getData(movieData, numberOfStudents);
	//sprt score using STL algorithm sort libary function
	sort(movieData, movieData + numberOfStudents);
	displaySorted(movieData, numberOfStudents);
	cout << showpoint << fixed << setprecision (2) << "the Avg is :" <<average (movieData, numberOfStudents);
	
	delete [] movieData;
	movieData = 0;
	
}

void getData(int *a, int size){
	//get scores from user
	cout << "\nNow, Enter the movies watched for the month for the " << size << " students\n";
	
	for (int k = 0; k < size; k++){
		cout << "Enter number of movies watched for students " << k +1 << " : ";
		cin >> *(a+k);
		
		while (*(a+k)< 0){
			cout << "Negatives are not allowed. please re-enter: \n";
			cin >> *(a+k);
		}
	}
}

void displaySorted(int a[], int numberOfStudents){
	cout << "\n the list of students sorted by score is:\n";
	for (int m = 0; m < numberOfStudents; m++){
		cout << *(a +m) << " " << endl;
	}
}


double average(int *a, int size){
	int sum = 0.0;
	for(int b = 0; b < size; b++){
		sum += *a;
		a++;
	}
	return sum/size;
}













