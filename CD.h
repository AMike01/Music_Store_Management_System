#ifndef CD_H
#define CD_H

#include "product.h"
#include "song.h"
#include <string>
#include <vector>

class Vynil : public Product {

    private:
        std::vector<Song> Songs;
        bool rewritable;
    public:
        Vynil(std::string n="", double p=0, std::vector<Song> s=nullptr, unsigned int r);

        // GETTERS
        std::string getName() const;
        double getPrice() const;
        std::vector<Song> getSongs() const;
        bool getRewritable() const;
        
        // SETTERS
        void setSongs(std::vector<Song> newSongs);
        void setRewritable(bool R);
};

#endif  // CD_H