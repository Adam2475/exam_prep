#ifndef BIGINT_HPP
#define BIGINT_HPP

#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

class bigint
{
    private:
        string num;
    public:
        bigint() {
            this->num = "0";
        }
        
        bigint(unsigned int src) {
            this->num = to_string(src);
        }

        bigint(const bigint &src) {
            this->num = src.num;
        }

        bigint &operator=(const bigint &src) {
            if (this != &src)
            {
                this->num = src.num;
            }
            return *this;
        }

        ~bigint() {};

        bigint operator+(const bigint &src) const;
        bigint &operator+=(const bigint &src) {
            *this = *this + src;
            return *this;
        }
        bigint operator++()
        {
            *this = *this + 1;
            return *this;
        }
        bigint operator++(int)
        {
            bigint tmp(*this);
            *this = *this + 1;
            return tmp;
        }

        bigint operator<<(const unsigned int n) const
        {
            bigint tmp(*this);
            for (unsigned int i = 0; i < n; i++)
                tmp.num.push_back('0');
            return tmp;
        }

        bigint &operator<<=(const unsigned int n)
        {
            for (unsigned int i = 0; i < n; i++)
                this->num.push_back('0');
            return *this;
        }

        bigint &operator>>=(const bigint &src)
        {
            if (this->num == "0")
                return *this;

            int n = stoi(src.num);

            if (n >= (int)this->num.length())
            {
                this->num = "0";
                return *this;
            }
            else
            // remove all characters after given position
                this->num.erase(this->num.length() - n);

            return *this;
        }

        friend ostream &operator<<(ostream &out, const bigint &src);
};



#endif