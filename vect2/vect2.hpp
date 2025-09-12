#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>
#include <string>

using namespace std;

class vect2 {
    private:
        int pos[2];
    public:
        vect2() {};
        vect2(int x, int y) {
            this->pos[0] = x;
            this->pos[1] = y;
        };
        vect2(const vect2 &src) {
            this->pos[0] = src.pos[0];
            this->pos[1] = src.pos[1];    
        };
        vect2 &operator=(const vect2 &src) {
            if (this != &src)
            {
                this->pos[0] = src.pos[0];
                this->pos[1] = src.pos[1];
            }
            return *this;
        };
        ~vect2() {};

        friend ostream &operator<<(ostream &out, const vect2 &src);
};

#endif