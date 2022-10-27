//ch9 lab - sorting a playlist
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

struct Playlist{
	string artist, title;
};

void getData(Playlist []); 
void selectionSort(Playlist []);
void displayList(const Playlist []);

const int SIZE = 10;


int main(){
	Playlist myPlaylist[SIZE];
	getData(myPlaylist);
	selectionSort(myPlaylist);
	
	cout << "playlist \n " << "Artist       Title \n" << "-----------------------------\n";
	displayList(myPlaylist);
	
	return 0;
}

//function definition
void getData(Playlist myPlaylist[]){
	const int size = 10;
	for (int index = 0; index < size; index++){
		
		cout << "Enter the artist name: ";
		getline(cin, myPlaylist[index].artist);
		cout << "Enter the song title: ";
		getline(cin, myPlaylist[index].title);
	
	}
}

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

void displayList(const Playlist myPlaylist[]){
	for (int pos = 0; pos<SIZE; pos++)
	cout << myPlaylist[pos].artist << "   " << myPlaylist[pos].title << endl;
}







