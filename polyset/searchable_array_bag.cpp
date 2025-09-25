#include "searchable_array_bag.hpp"

searchable_array_bag::searchable_array_bag() {

}
        
searchable_array_bag::searchable_array_bag(const searchable_array_bag &src) : array_bag(src)
{

}

searchable_array_bag::~searchable_array_bag() {

}
    
searchable_array_bag &searchable_array_bag::operator=(const searchable_array_bag &src)
{
    if (this != &src)
    {
        array_bag::operator=(source);
    }
    return *this;
}

        
bool searchable_array_bag::has(int x) const
{
    int i = 0;
    while (i < this->size)
    {
        if (this->data == x)
            return true;
        i++;
    }
    return false;
}
    