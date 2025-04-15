#include <iostream>
#include <string>
#include <cctype>

void stringToUpper(std::string& s) {
    for (size_t i = 0; i < s.size(); i++)
    {
        s[i] = std::toupper(s[i]);
    }
}


int main() {
    std::string s {"aljwholawihepoawid"};
    std::cout << s << std::endl;

    stringToUpper(s);

    std::cout << s << std::endl;

    return 0;
}