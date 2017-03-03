//I affirm that all code given below was written solely by me, Sabin Sapkota, 
//and that any help I received adhered to the rules stated for this exam.//
//Submitted by Sabin Sapkota//
//implementation file for song header//
#include "Song.h"
#include <string>
//default constructor//
Song::Song() {
	newtitle = "Loser";
	newartist = "Beck";
	newgenre = "Grunge";

}
//user can input song name according to their choice//
Song::Song(string title, string artist, string genre) {
	newtitle = title;
	newartist = artist;
	newgenre = genre;

}
string Song::getTitle()const {
	return newtitle;
}

string Song::getArtist()const {
	return newartist;
}
string Song::getGenre()const {
	return newgenre;
}

bool Song::isOfGenre(string genre) {
	return genre== getGenre();
}