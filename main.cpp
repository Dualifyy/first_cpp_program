#include <iostream>

int num2()
{
    return 8;
}

int main()
{
    std::cout << "Enter an integer: " << '\n';

    int n;
    
    std::cin >> n;

    std::cout << "Unknown number + your integer: " << n + num2() << '\n';

    return 0;
}

