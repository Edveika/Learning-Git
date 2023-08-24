#include <iostream>

void print(std::string& text)
{
    std::cout << text << std::endl;
}

int main()
{
    print("Hello, world!!!");

    return 0;
}