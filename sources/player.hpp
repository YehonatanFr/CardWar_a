#ifndef Player_HPP
#define Player_HPP

#include <iostream>
#include <string>

namespace ariel{

    class Player{

        private:
        string name;

        public:
        Player(string name);
        int stacksize();
        int cardesTaken();

    };
}

#endif