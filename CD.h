#ifndef CD_H
#define CD_H

#include "product.h"
#include "song.h"
#include <string>
#include <vector>

class CD : public Product {

    private:
        std::vector<Song> songs;
        bool rewritable;
    public:
        CD(std::string n="", double p=0, std::vector<Song> s=nullptr, bool r=0);

        // GETTERS
        std::string getName() const;
        double getPrice() const;
        std::vector<Song> getSongs() const;
        bool getRewritable() const;
        
        // SETTERS
        void setSongs(std::vector<Song> newSongs);
        void setRewritable(bool newR);
};

#endif  // CD_H