#include "tape.h"


// Constructor

Tape::Tape(std::string n, double p, std::vector<Song> s, std::string) : Product(n,p), songs(s), type(t) {}


// Get Methods

//std::string Tape::getName() const { return name;}
//double Tape::getPrice() const { return price;}
std::vector<Song> Tape::getSongs() const { return songs;}
unsigned int Tape::getType () const { return type;}


// Set Methods

void Tape::setSongs(std::vector<Song> newSongs) { songs = newSongs;}
void Tape::setType(std::string newType) {type = newType;}


