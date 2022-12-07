#include "vynil.h"


// Constructor

Vynil::Vynil(std::string n, std::vector<Song>, unsigned int r) : Product(n,p), songs(s), type(t) {}


// Get Methods

//std::string Vynil::getName() const { return name;}
//double Vynil::getPrice() const { return price;}
std::vector<Song> Vynil::getSongs() const { return songs;}
unsigned int Vynil::getRpm () const { return rpm;}


// Set Methods

void Vynil::setSongs(std::vector<Song> newSongs) { songs = newSongs;}
void Vynil::setRpm(std::string newRpm) {rpm = newRpm;}


