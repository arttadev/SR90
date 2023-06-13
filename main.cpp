#include "myWrapperArray.hpp"

int main()
{
    myWrapperArray myArray;

    myArray.push_back(1);
    myArray.push_back(2);
    myArray.push_back(3);

    std::cout << "Size: " << myArray.size() << std::endl;
    std::cout << "Empty: " << myArray.empty() << std::endl;
    std::cout << "Capacity: " << myArray.capacity() << std::endl;
    std::cout << "Element at position 1: " << myArray.at(1) << std::endl;

    myArray.reserve(10);
    myArray.insert(1, 4);

    std::cout << "Size: " << myArray.size() << std::endl;
    std::cout << "Element at position 1: " << myArray.at(1) << std::endl;

    return 0;
}