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
	
	
	// get number of students  (has to be more than zero)
	cout << "Enter number of students: "; 
	cin >> numberOfStudents;
	while(numberOfStudents <= 0){ // just in case someone puts a 0 or negative. (how you can have negative students, i simply dont know)
		cout << "Number of students must be > 0, please re-enter: ";
		cin >> numberOfStudents;
	}
	
	movieData = new int[numberOfStudents];
	
	//Invoking 
	getData(movieData, numberOfStudents); 			// Invoke getData 
	sort(movieData, movieData + numberOfStudents);  // Invoke sort
	displaySorted(movieData, numberOfStudents); 	// Invoke displaySorted
	cout << "--------" << endl;
	
	//Display the avg of the students entered
	cout << showpoint << fixed << setprecision (1) << "Average " <<average (movieData, numberOfStudents); // display avg to 1 decimal place
	
	delete [] movieData; // clear memory
	movieData = 0; // make sure movie data is set to 0
	
}

void getData(int *a, int size){
	//get scores from user
	cout << "\nNow, Enter the movies watched for the month for the " << size << " students\n";
	
	// Loop untill we have the correct amount of scores
	for (int k = 0; k < size; k++){
		cout << "Enter number of movies watched for students " << k +1 << " : ";
		cin >> *(a+k);
		
		// Make sure no student entered a negative amount of movies. 0 is ok, but not negative
		while (*(a+k)< 0){
			cout << "Negatives are not allowed. please re-enter: \n";
			cin >> *(a+k);
		}
	}
}

void displaySorted(int a[], int numberOfStudents){
	cout << "\nNumber of Movies Watched\n" << "------------------------" << endl;
	for (int m = 0; m < numberOfStudents; m++){
		cout << *(a +m) << " " << endl;
	}
}


double average(int *a, int size){ // calculate the avg movies watched by summing the value stored in *a
	double sum = 0;
	
	for(int b = 0; b < size; b++){
		sum += *a;
		a++;
	}
	return sum/size; // then return the sum of all *a divided by size
}













