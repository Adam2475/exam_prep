#include "vect2.hpp"

ostream &operator<<(ostream &out, const vect2 &src)
{
    out << "{ " << src.pos[0] << ", " << src.pos[1] << " }";
    return out; 
}

vect2 &vect2::operator+=(const vect2 &addend)
{
    this->pos[0] = this->pos[0] + addend.pos[0];
    this->pos[1] = this->pos[1] + addend.pos[1];
    return *this;
}

vect2 &vect2::operator-=(const vect2 &addend)
{
    this->pos[0] = this->pos[0] - addend.pos[0];
    this->pos[1] = this->pos[1] - addend.pos[1];
    return *this;
}

vect2 vect2::operator+(const vect2 &addend) const
{
    vect2 result;
    result.pos[0] = this->pos[0] + addend.pos[0];
    result.pos[1] = this->pos[1] + addend.pos[1];
    return result;
}

vect2 vect2::operator*(int multiplier) const
{
    vect2 result;
    result.pos[0] = this->pos[0] * multiplier;
    result.pos[1] = this->pos[1] * multiplier;
    return result;
}

vect2 vect2::operator*(vect2 multiplier) const
{
    vect2 result;
    result.pos[0] = this->pos[0] * multiplier.pos[0];
    result.pos[1] = this->pos[1] * multiplier.pos[1];
    return result;
}