//
#include<iostream>

#ifndef MY_VECTOR_H
#define MY_VECTOR_H
class Vector
{
public:
    Vector(int s);//constructor
    Vector(const Vector& v);//copy constructor
    Vector& operator=(const Vector& v);//copy assignment
    int Capacity(){return capacity;}
    int Size(){return size;}
    ~Vector();//destructor
private:
    int size{0};
    int capacity;
    int* elements;
};
#endif

//free function -NOT PART OF THE VECTOR CLASS
void use_vector();
