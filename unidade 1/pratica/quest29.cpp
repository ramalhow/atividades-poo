#include <iostream>
#include <string>
#include <cctype>

bool has_upper(std::string& s) {
    
    bool b = false;
    
    for (char c : s) {
        b |= std::isupper(c);
    }

    return b;
}

int main() {

    std::string a{"testE"};
    
    std::cout << has_upper(a) << std::endl;
    
    return 0;
}