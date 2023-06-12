#ifndef MYWRAPPERARRAY_HPP
#define MYWRAPPERARRAY_HPP

#include <iostream>
#include <vector>

class myWrapperArray
{
private:
    std::vector<int> mArray;
public:
    void push_back (const int&) ;
    void reserve (const int&) ;
    void insert (const int&, const int&) ;
    int at(const int&) const ;
    const int& operator[](const int&) const ;
    int size(void) const ;
    bool empty(void) const ;
    int capacity(void) const ;
    friend std::ostream& operator<< (std::ostream&, const myWrapperArray& );
} ;

#endif