#include "song.h"

// Constructor and Destructor

Song::Song(std::string t,std::vector<std::string> Aut, std::string Cat, int y, int l): Title(t), Authors(Aut), Category(Cat), Year(y), Length(l) {}

Song::~Song() {};

// Get Methods 

std::string Song::getTitle() const {return Title;}
std::vector<std::string> Song::getAuthors() const {return Authors;}
std::string Song::getCategory() const { return Category;}
unsigned int Song::getYear() const { return Year;}
unsigned int Song::getLength() const { return Length;}


// Set Methods

void Song::setTitle(std::string newTitle) { Title = newTitle;}
void Song::setAuthors(std::vector<std::string> newAuthors) { Authors = newAuthors;}
void Song::setCategory(std::string newCategory) { Category = newCategory;}
void Song::setYear(unsigned int newYear) { Year = newYear;}
void Song::setLength(unsigned int newLength) { Length = newLength;}