#include "myWrapperArray.hpp"

int main() {
    myWrapperArray array;

    array.push_back(1);
    array.push_back(2);
    array.push_back(3);

    std::cout << "Size: " << array.size() << std::endl;
    std::cout << "Empty: " << array.empty() << std::endl;
    std::cout << "Capacity: " << array.capacity() << std::endl;
    std::cout << "Element at position 1: " << array.at(1) << std::endl;

    array.reserve(10);
    array.insert(1, 4);

    std::cout << "Size: " << array.size() << std::endl;
    std::cout << "Element at position 1: " << array.at(1) << std::endl;

    return 0;
}