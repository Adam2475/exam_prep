#include "set.hpp"

// reference members must always be initialized in initializer list
set::set(searchable_bag &src) : bag(src) {

}

set::~set() {}

bool set::has(int n) const
{
    if (bag.has(n))
        return true;
    return false;
}
        
// if not duplicate add to the set
void set::insert (int n)
{
    if (!bag.has(n))
        bag.insert(n);
}

void set::insert (int *nums, int length)
{
    int i = 0;
    while (i < length)
    {
        insert(nums[i]);
        i++;
    }
}

void set::print() const
{
    bag.print();
}

void set::clear()
{
    bag.clear();
}

searchable_bag& set::get_bag()
{
    return bag;
}