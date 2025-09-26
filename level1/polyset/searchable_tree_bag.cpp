#include "searchable_tree_bag.hpp"

searchable_tree_bag::searchable_tree_bag() {

}

searchable_tree_bag::searchable_tree_bag(const searchable_tree_bag &src) : searchable_bag(src) {

}

searchable_tree_bag &searchable_tree_bag::operator=(const searchable_tree_bag &src)
{
    if (this != &src)
    {
        tree_bag::operator=(src);
    }
    return *this;
}

searchable_tree_bag::~searchable_tree_bag() {

}

bool searchable_tree_bag::recursive_search(node *n, int x) const
{
    if (!n)
        return false;
    if (n->value == x)
        return true;
    if (n->r)
    {
        if (recursive_search(n->r, x))
            return true;
    }
    if (n->l)
    {
        if (recursive_search(n->l, x))
            return true;
    }
    return false;
}

bool searchable_tree_bag::has(int x) const
{
    return recursive_search(tree, x);
}