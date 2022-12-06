#ifndef TAPE_H
#define TAPE_H

#include "product.h"
#include "song.h"
#include <string>
#include <vector>

class Tape : public Product {

    private:
        std::vector<Song> Songs;
        std::string type;  // C60, C90 or C120 

    public:
        Vynil(std::string n="", double p=0, std::vector<Song> s=nullptr, unsigned int r);

        // GETTERS
        std::string getName() const;
        double getPrice() const;
        std::vector<Song> getSongs() const;
        unsigned int getType() const;
        
        // SETTERS
        void setSongs(std::vector<Song> newSongs);
        void setRpm(int newRpm);
};

#endif  // TAPE_H