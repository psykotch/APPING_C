#include <iostream>
#include <stdio.h>
#include <cmath>

bool is_prime(int n)
{
    if (n == 0 || n == 1 || n % 2 == 0)
        return false;

    auto temp = std::sqrt(n);
    for (int i = 3; i < temp; i += 2)
        if (n % i == 0)
            return false;
    return true;
}

int main(int argc, char *argv[]) 
{
    int n;
    n = 5;
    if (is_prime(n))
        std::cout << n << ' ' << "is a prime : True";
    else    
        std::cout << n << ' ' << "is a prime : False";
    return 0;
}