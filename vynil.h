#ifndef VYNIL_H
#define VYNIL_H

#include "product.h"
#include "song.h"
#include <string>
#include <vector>

class Vynil : public Product {

    private:
        std::vector<Song> Songs;
        enum rpm {33, 45, 78};

    public:
        

};

#endif  // VYNIL_H