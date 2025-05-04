#include "Hugeinteger.hpp"
#include <cctype>
#include <iostream>
#include <string>

using std::cout;

HugeInteger::HugeInteger() : digits(0) {
    arr.fill(0);
};

void HugeInteger::input(string s) {

    if(s.empty() || s.size() > 40) return;

    int idx = 39;
    for(int i = s.size()-1; i >= 0; --i) {
        const char d = s[i];
        bool isNum = std::isdigit(d);

        if(isNum) {
            arr[idx--] = d - '0';
        } else {
            cout << "the digit n°" << i << " is invalid\n";
        }
    }
    
};

void HugeInteger::output() const {
    cout << "[ ";
    for (auto d : arr) {
        cout << std::to_string(d);
    }
    cout << " ]";
};

void HugeInteger::add(HugeInteger hi) {

    int remainder = 0;
    for(int i{39}; i >= 0; i--) {
        const char res = arr[i] + hi.arr[i] + remainder;
        
        arr[i] = (res > 9) ? (res % 10) : res;
        remainder = (res > 9) ? (res / 10) : 0; 
    }
}
