#include "myWrapperArray.hpp"

void myWrapperArray::push_back(const int& inBack)
{
    myArray.push_back(inBack);
}

void myWrapperArray::reserve(const int& inRes)
{
    myArray.reserve(inRes);
}

void myWrapperArray::insert(const int& position, const int& inElem)
{
    if (position > myArray.size())
    {
        std::cout << "Invalid position!" << std::endl;
        return ;
    }
    std::vector<int>::iterator it = myArray.begin();
    it += position;
    myArray.insert(it, inElem);
}

int myWrapperArray::at(const int& position) const
{
    if (position > myArray.size())
    {
        std::cout << "Invalid position!" << std::endl;
        return -1;
    }
    return myArray.at(position);
}

const int& myWrapperArray::operator[](const int& inIndex) const
{
    return myArray[inIndex] ;
}

int myWrapperArray::size(void) const
{
    return myArray.size();
}

bool myWrapperArray::empty(void) const
{
    return myArray.empty();
}

int myWrapperArray::capacity(void) const
{
    return myArray.capacity();
}


