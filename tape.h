#ifndef TAPE_H
#define TAPE_H

#include "product.h"
#include "song.h"
#include <string>
#include <vector>

class Tape : public Product {

    private:
        std::vector<Song> songs;
        std::string type;  // C60, C90 or C120 

    public:
        Tape(std::string n="", double p=0, std::vector<Song> s=nullptr, std::string="");

        // GETTERS
        std::string getName() const;
        double getPrice() const;
        std::vector<Song> getSongs() const;
        unsigned int getType() const;
        
        // SETTERS
        void setSongs(std::vector<Song> newSongs);
        void setType(std::string newType);
};

#endif  // TAPE_H