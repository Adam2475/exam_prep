#include "vect2.hpp"

ostream &operator<<(ostream &out, const vect2 &src)
{
    out << "{ " << src.pos[0] << ", " << src.pos[1] << " }";
    return out; 
}
