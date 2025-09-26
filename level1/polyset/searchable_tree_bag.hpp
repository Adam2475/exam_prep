#ifndef SEARCHABLE_TREE_BAG
#define SEARCHABLE_TREE_BAG

#include "tree_bag.hpp"
#include "searchable_bag.hpp"

class searchable_tree_bag : public searchable_bag, public tree_bag
{
    public:
        searchable_tree_bag();
        searchable_tree_bag(const searchable_tree_bag &src);
        searchable_tree_bag &operator=(const searchable_tree_bag &src);
        ~searchable_tree_bag();

        bool recursive_search(node *n, int x) const;
        bool has(int) const override;
};

#endif