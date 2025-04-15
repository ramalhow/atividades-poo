#include <iostream>
#include <array>

// retirado de https://cp-algorithms.com/algebra/primality_tests.html
bool isPrime(int x) {
    for (int d = 2; d * d <= x; d++) {
        if (x % d == 0)
            return false;
    }
    return x >= 2;
}

bool has_prime(const std::array<int, 10>& arr){
    bool result = false;

    for (int i = 0; i < arr.size(); i++)
    {
        result |= isPrime(arr[i]);
    }
    
    return result;
}

int main() {

    std::array<int, 10> a = {1,2,3,4,5,6,7,8,9};
    
    std::cout << has_prime(a) << std::endl;

    return 0;
}