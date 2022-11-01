//************************
// CH9 lab sorting a playlist
// Programmer: Evan Gohary
// Completed 10/27/2022 in class
//
//this program allows a user to enter 10 songs w/ their artists, 
// using a 10 elemnent array. it should osrt the entries by artists 
//************************************************

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

struct Playlist{ // object structure
	string artist, title;
};

void getData(Playlist []);  // get artist and title
void selectionSort(Playlist []); // use selection sort to sort 
void displayList(const Playlist []); //display the 10 songs

const int SIZE = 10;


int main(){ // invoke 
	Playlist myPlaylist[SIZE];
	getData(myPlaylist);
	selectionSort(myPlaylist);
	
	
	cout << "\n      Playlist \n " << "Artist       Title \n" << "========================\n";
	displayList(myPlaylist);
	
	return 0;
}

//Get artist name and song title from user
void getData(Playlist myPlaylist[]){
	const int size = 10;
	for (int index = 0; index < size; index++){
		
		cout << "Enter the artist #"<<index+1 << ": ";
		getline(cin, myPlaylist[index].artist);
		cout << "Enter the song title #"<< index+1 << ": ";
		getline(cin, myPlaylist[index].title);
	
	}
}
// sort information inputted by user
void selectionSort(Playlist myPlaylist[]){
	int startScan, minIndex;
	Playlist temp;
	string minValue;
	
	for(startScan = 0; startScan < (SIZE - 1); startScan++){
		minIndex = startScan;
		minValue = myPlaylist[startScan].artist;
		for(int index = startScan + 1; index < SIZE; index++){
			if (myPlaylist[index].artist < myPlaylist[minIndex].artist){
				minValue = myPlaylist[index].artist;
				minIndex = index;
			}
		}
		temp = myPlaylist[minIndex];
		myPlaylist[minIndex] = myPlaylist[startScan];
		myPlaylist[startScan] = temp;
	}
}
//display information provided by user after being sorted
void displayList(const Playlist myPlaylist[]){
	for (int pos = 0; pos<SIZE; pos++)
	cout << myPlaylist[pos].artist << "   " << myPlaylist[pos].title << endl;
}






