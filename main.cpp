#include <iostream>

void print(std::string& text)
{
    std::cout << text;
}

int main()
{
    print("Hello, world!!!");

    return 0;
}