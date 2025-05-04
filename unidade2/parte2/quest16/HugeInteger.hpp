#pragma once

#include <array>
#include <cstdint>
#include <string>

using std::string;

class HugeInteger {
    private:
        std::array<char, 40> arr;
        uint8_t digits;

    public:
        HugeInteger();

        void input(string s);
        
        void output() const;
        
        void add(HugeInteger hi);
        
        bool isEqualTo(HugeInteger& hi) const { return arr == hi.arr; };

        bool isNotEqualTo(HugeInteger& hi) const { return arr != hi.arr;};

        bool isGreaterThen(HugeInteger& hi) const {return arr > hi.arr;};

        bool isGreaterThenOrEqual(HugeInteger& hi) const { return arr >= hi.arr;};

        bool isLessThen(HugeInteger& hi) const {return arr < hi.arr;};
        
        bool isLessThenOrEqual(HugeInteger& hi) const {return arr <= hi.arr;};
};