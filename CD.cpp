#include "CD.h"


// Constructor

CD::CD(std::string n, double p, std::vector<Song> s, bool r) : Product(n,p), songs(s), rewritable(r) {}


// Get Methods

//std::string CD::getName() const { return name;}
//double CD::getPrice() const { return price;}
std::vector<Song> CD::getSongs() const { return songs;}
unsigned int CD::getType () const { return rewritable;}


// Set Methods

void CD::setSongs(std::vector<Song> newSongs) { songs = newSongs;}
void CD::setType(std::string newType) {rewritable = newR ;}


