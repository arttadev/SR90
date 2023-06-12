#include "myWrapperArray.hpp"

void myWrapperArray::push_back(const int& inBack)
{
    mArray.push_back(inBack);
}

void myWrapperArray::reserve(const int& inRes)
{
    mArray.reserve(inRes) ;
}

void myWrapperArray::insert(const int& inPos, const int& inElem)
{
    if (inPos > mArray.size())
    {
        std::cout << "Error: Invalid position" << std::endl ;
        return ;
    }
    std::vector<int>::iterator it = mArray.begin() ;
    it += inPos ;
    mArray.insert(it, inElem) ;
}

int myWrapperArray::at(const int& inPos) const
{
    if (inPos > mArray.size())
    {
        std::cout << "Error: Invalid position" << std::endl ;
        return -1 ;
    }
    return mArray.at(inPos) ;
}

const int& myWrapperArray::operator[](const int& inIndex) const
{
    return mArray[inIndex] ;
}

int myWrapperArray::size(void) const
{
    return mArray.size() ;
}

int myWrapperArray::capacity(void) const
{
    return mArray.capacity() ;
}

bool myWrapperArray::empty(void) const
{
    return mArray.empty() ;
}

// std::ostream& operator<< (std::ostream& os, const myWrapperArray& rhs)
// {
//     for (int it = 0; it < rhs.mArray.size(); ++it)
// 	os << rhs.mArray.at(it) << ", " ;
//     return os ;
// }
