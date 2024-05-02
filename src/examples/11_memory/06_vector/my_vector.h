//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H

class Vector
{
public:
    Vector(int size);//constructor Rule 1 of 3 Legacy C++
    Vector(const Vector& v1);//copy constructor Rule 2 of 3 legacy C++
    Vector& operator=(const Vector& v1);//copy assignment Rule 3 of 3 legacy C++
    Vector(Vector&& v);//move constructor Rule 4 of 5 in Rule of 5 Modern C++
    Vector& operator=(Vector&& v2);//move assignment Rule 5 of 5 modern C++
    int Size(){return size;}
    int Capacity(){return capacity;}
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    void Push_Back(int value);
    ~Vector();//Destructor
private:
    int size{0};//keep track of the current index and the number of elements in the list
    int capacity; //the max number of elements the list can store
    int* elements; //list of elements in this vector
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);
};

#endif

Vector get_vector();