//I affirm that all code given below was written solely by me, Sabin Sapkota, 
//and that any help I received adhered to the rules stated for this exam.//
//Submitted by Sabin Sapkota//
//implementation file for playlist header//
#include "Playlist.h"
#include "Song.h"
using namespace std;
//default constructor//
//numsongs intitalied to 0//
Playlist::Playlist() {
	numsongs = 0;
}
//allows user to input the name//
Playlist::Playlist(string name) {
	newname = name;
	numsongs = 0;
}
string Playlist::getName() {
	return newname;
}
//loops throughout the array to find the matching genre, if any is available//
bool Playlist::hasGenre(string genre) {
	for (int i = 0; i < numsongs; i++) {
		if (songsarray[i].getGenre() == genre)
			return true;
	}
	return false;

	
}
//adds all the songs in the array//
void Playlist::addSong(Song songs) {
	if (numsongs < Max_Songs) {
		songsarray[numsongs]=songs;
		++numsongs;
	}

}
//returns the total number of songs present//
int Playlist::numberOfSongs() {
	return numsongs;
};
//returns the name of the song according to the indices of the array provided//
string Playlist::playSong(int songNumber) {
	if (songNumber < numsongs) {
		int y = songNumber;
		return songsarray[y].getTitle();
	}
	else
		return "";
};