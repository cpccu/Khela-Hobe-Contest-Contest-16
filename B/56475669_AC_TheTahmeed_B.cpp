#include <iostream>

int main()
{
    int A;
    std::cin >> A;

    for (int i = 1; i <= A; ++i)
    {
        if (A % i == 0)
        {
            std::cout << i << std::endl;
        }
    }

    return 0;
}
