//I affirm that all code given below was written solely by me, Sabin Sapkota, 
//and that any help I received adhered to the rules stated for this exam.//
//Submitted by Sabin Sapkota//
//main file where classes are used and implemented//
#include<string>
#include <iostream>
//including header files//
#include "Song.h"
#include "Playlist.h"

using namespace std;
int main() {
	//setting the number of songs in the array//
	static int numsongs = 9;
	//creating songs object for Song Class and additing songs information as array//
	Song songs[] = {
		Song("Human", "Rag'n'Bone Man", "ModernPop"),
		Song("Closer", "The Chainsmokers", "ModernPop"),
		Song("Chained To the Rhythm", "Katy Perry", "ModernPop"),
		Song("Smells Like Teen Spirit", "Nirvana", "Grunge"),
		Song("Black Hole Sun", "Soundgarden", "Grunge"),
		Song("Loser", "Beck", "Grunge"),
		Song("Elvis Presley Blues", "Gillian Welch", "Americana"),
		Song("Pirate's Gospel", "Alela Diane", "Americana"),
		Song("Come On Up To The House", "Sarah Jarosz", "Americana")
	};

	// Make the playlist
	Playlist playlist("iRandomMusic");//name for the playlist we created//
	for (int i = 0; i < numsongs; i++)//loops through every song and add up all the songs//
		playlist.addSong(songs[i]);//movies added in songs object//
	//inititaling value for errors//
	int errors = 0;

	// Does the playlist have the correct number of songs?
	if (numsongs != playlist.numberOfSongs())
	{
		errors++;
		cout << "error: not counting songs correctly\n";
	}

	// Check the genre of one song
	if (playlist.playSong(2) == "")
	{
		errors++;
		cout << "error: genre of the third song is incorrect\n";
	}
	//check if there is any item out of index range//
	if (playlist.playSong(10) != "")
	{
		errors++;
		cout << "error: index out of range not handled correctly\n";
	}

	// Check for a genre//
	if (!playlist.hasGenre("Americana"))
	{
		errors++;
		cout << "error: search for genre is incorrect\n";
	}


	if (errors == 0) cout << "Passed\n";//if there is no any errors//
	else cout << "Errors: " << errors << endl;//display the total number of errors//

	return errors;

}


	