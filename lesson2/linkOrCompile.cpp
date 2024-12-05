#include <iostream>

int add(int z, int y, int x, int k);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 5, 7, 10) << '\n';
    return 0;
}

int add(int z, int y, int x) // names don't match the declaration
{
    return x + y + z;
}
