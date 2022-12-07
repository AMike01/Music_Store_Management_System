#include "song.h"

// Constructor and Destructor

Song::Song(std::string t,std::vector<std::string> Aut, std::string Cat, int y, int l): Title(t), Authors(Aut), Category(Cat), Year(y), Length(l) {}

Song::~Song() {};

// Get Methods 

std::string Song::getTitle() const {return title;}
std::vector<std::string> Song::getAuthors() const {return authors;}
std::string Song::getCategory() const { return category;}
unsigned int Song::getYear() const { return year;}
unsigned int Song::getLength() const { return length;}


// Set Methods

void Song::setTitle(std::string newTitle) { title = newTitle;}
void Song::setAuthors(std::vector<std::string> newAuthors) { authors = newAuthors;}
void Song::setCategory(std::string newCategory) { category = newCategory;}
void Song::setYear(unsigned int newYear) { year = newYear;}
void Song::setLength(unsigned int newLength) { length = newLength;}