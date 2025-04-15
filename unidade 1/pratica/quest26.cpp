#include <iostream>

int gen() {
    static int n {-1};
    return ++n;
}

int main() {

    for (size_t i = 0; i < 100; i++)
    {
        std::cout << "iteração " << i << " " << gen() << std::endl;
    }
    
    return 0;
}