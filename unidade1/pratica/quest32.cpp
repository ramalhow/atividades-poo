#include <iostream>
#include <vector>

// retirado de https://cp-algorithms.com/algebra/primality_tests.html
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}

bool has_prime(const std::vector<int>& vec){
    bool result = false;

    for (auto &&e : vec) {
        result |= isPrime(e);
    }
    
    return result;
}

int main() {

    std::vector<int> v{1,2,3,4,5,6,7,8,9};

    std::cout << has_prime(a) << std::endl;

    return 0;
}