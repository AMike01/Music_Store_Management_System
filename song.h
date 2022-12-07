#ifndef SONG_H
#define SONG_H


#include<string>
#include<vector>

class Song {

    private:
        std::string title;
        std::vector<std::string> authors;
        std::string category;
        unsigned int year;
        unsigned int length;

    public:
        Song(std::string t="", std::vector<std::string> Aut=nullptr, std::string Cat="", int y=0, int l=0);
        ~Song();
        
        // GETTERS
        std::string getTitle() const;
        std::vector<std::string> getAuthors() const;
        std::string getCategory() const;
        unsigned int getYear() const;
        unsigned int getLength() const; 

        // SETTERS
        void setTitle(std::string newTitle);
        void setAuthors(std::vector<std::string> newAuthors);
        void setCategory(std::string newCategory);
        void setYear(unsigned int newYear);
        void setLength(unsigned int newLength);


}; 

#endif  // SONG_H