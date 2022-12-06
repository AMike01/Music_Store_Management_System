#ifndef VYNIL_H
#define VYNIL_H

#include "product.h"
#include "song.h"
#include <string>
#include <vector>

class Vynil : public Product {

    private:
        std::vector<Song> Songs;
        unsigned int rpm;  // 33, 45, 78 giri 

    public:
        Vynil(std::string n="", double p=0, std::vector<Song> s=nullptr, unsigned int r);

        // GETTERS
        std::string getName() const;
        double getPrice() const;
        std::vector<Song> getSongs() const;
        unsigned int getRPM() const;
        
        // SETTERS
        void setSongs(std::vector<Song> newSongs);
        void setRpm(unsigned int newRpm);
};

#endif  // VYNIL_H