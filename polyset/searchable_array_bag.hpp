#ifndef SEARCHABLE_ARRAY_BAG
#define SEARCHABLE_ARRAY_BAG

class searchable_array_bag : public array_bag, public searchable_bag
{
    public:
        searchable_array_bag();
        searchable_array_bag(const searchable_array_bag &src);
        ~searchable_array_bag();
        searchable_array_bag &operator=(const searchable_array_bag &src);

        bool has(int) const override;
}

#endif