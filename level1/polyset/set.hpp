#ifndef SET_HPP
#define SET_HPP

#include "array_bag.hpp"
#include "searchable_bag.hpp"

class set {
    
    private:
        searchable_bag& bag;
    public:
        set() = delete;
        set(const set &src) = delete;
        set &operator=(const set &src) = delete;
        
        set(searchable_bag &src);
        ~set();

        bool has(int) const;
        void insert (int);
	    void insert (int *, int);
	    void print() const;
	    void clear();
        searchable_bag& get_bag();
};


#endif