//I affirm that all code given below was written solely by me, Sabin Sapkota, 
//and that any help I received adhered to the rules stated for this exam.//
//Submitted by Sabin Sapkota//

//header file for play list//
#ifndef PLAYLIST_H
#define PLAYLIST_H
#include<string>
//header file for song//
#include "Song.h"
using namespace std;
class Playlist {
public:
	//default constructor//
	Playlist();
	Playlist(string name);
	//gets the name for playlist//
	string getName();
	//return true when at least one song of this genre is present//
	bool hasGenre(string genre);
	//add a new song//
	void addSong(Song songs);
	//returns the number of songs//
	int numberOfSongs();
	//returns the name of song according to the number provided, return an empty string if there is no such thing//
	string playSong(int songNumber);

private:
	string newname;
	string newgenre;
	//setting maximum for songs to be added//
	const int Max_Songs = 20;
	//creating array for Song//
	Song songsarray[20];
	int numsongs;

};
#endif
