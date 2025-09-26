#include "bigint.hpp"

bigint bigint::operator+(const bigint &src) const
{
    // initialize result to empty string
    string result = "";
    string s1 = this->num;
    string s2 = src.num;
    int rest = 0;
    // int carry = 0;

    // string 1 will always be the longer one
    if (s2.length() > s1.length())
        swap(s1, s2);

    int i = s1.length() - 1;
    int j = s2.length() - 1;

    while (i >= 0 || j >= 0 || rest)
    {
        // the sum must be initialized to rest
        int sum = rest;
        if (i >= 0 && j >= 0)
            sum = (s1[i] - '0') + (s2[j] - '0') + rest;
        else if (i >= 0)
            sum = (s1[i] - '0') + rest;
        else if (j >= 0)
            sum = (s2[j] - '0') + rest;

        rest = 0;

        if (sum >= 10)
        {
            rest = 1;
            sum = sum % 10;
        }
        
        result.push_back(sum + '0');

        i--;
        j--;
    }

    reverse(result.begin(), result.end());
    bigint tmp;
    tmp.num = result;
    return tmp;
}


ostream &operator<<(ostream &out, const bigint &src) {
    out << src.num;
    return out;
}
