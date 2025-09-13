#ifndef VECT2_HPP
#define VECT2_HPP

#include <iostream>
#include <string>

using namespace std;

class vect2 {
    private:
        int pos[2];
    public:
        vect2() {
            this->pos[0] = 0;
            this->pos[1] = 0;
        };
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


        vect2 operator++(int) {
            vect2 old = *this;
            this->pos[0]++;
            this->pos[1]++;
            return old;
        }

        vect2 operator++() {
            this->pos[0]++;
            this->pos[1]++;
            return *this;
        }

        vect2 operator--(int) {
            vect2 old = *this;
            this->pos[0]--;
            this->pos[1]--;
            return old;
        }

        vect2 operator--() {
            this->pos[0]--;
            this->pos[1]--;
            return *this;
        }

        vect2 &operator+=(const vect2 &addend);
        vect2 &operator-=(const vect2 &addend);
        vect2 operator+(const vect2 &addend) const;
        vect2 operator*(int multiplier) const;
        vect2 operator*(const vect2 multiplier) const;

        friend ostream &operator<<(ostream &out, const vect2 &src);

        friend vect2 operator*(int multiplier, const vect2 &src) {
            vect2 result;
            result.pos[0] = src.pos[0] * multiplier;
            result.pos[1] = src.pos[1] * multiplier;
            return result;
        }

        bool operator==(const vect2 &src) const {
            if (this->pos[0] == src.pos[0] && this->pos[1] == src.pos[1])
                return true;
            return false;
        }

        bool operator!=(const vect2 &src) const {
            if (this->pos[0] != src.pos[0] || this->pos[1] != src.pos[1])
                return true;
            return false;
        }
        
};

#endif