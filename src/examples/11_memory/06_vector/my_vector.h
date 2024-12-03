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
    Vector(Vector&& v);//move constructor
    Vector& operator=(Vector&& v1);//move assignment
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}    
    int Capacity(){return capacity;}
    void Push_Back(int value);
    int Size(){return size;}
    ~Vector();//destructor
private:
    int size{0};
    int capacity;
    int* elements;
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);

};
#endif

//free function -NOT PART OF THE VECTOR CLASS
void use_vector();
Vector get_vector();
