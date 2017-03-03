//I affirm that all code given below was written solely by me, Sabin Sapkota, 
//and that any help I received adhered to the rules stated for this exam.//
//Submitted by Sabin Sapkota//
//header file for Song//
#ifndef SONG_H
#define SONG_H
#include <string>
using namespace std;

class Song {
public:
	//default constructor//
	Song();
	//let caller to setup the song//
	Song(string title, string artist, string genre);

	string getTitle()const;//returns the song title//
	string getArtist()const;//return the artist who performed the song//
	string getGenre()const;//return the genre of the song//
	//return true if the song is of the genre//
	bool isOfGenre(string);

	private:
	string newtitle;
	string newartist;
	string newgenre;

};
#endif
