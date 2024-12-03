#include "my_vector.h"

using std::cout;
//
Vector::Vector(int c) : capacity(c), elements{new int[c]}
{
    cout<<"Constructor created memory at "<<elements<<"\n";
}

Vector::Vector(const Vector& v)
 : size{v.size}, capacity{v.capacity}, elements{new int[v.capacity]}
{
    cout<<"Copy constructor = created memory at "<<elements<<"\n";
    for(auto i=0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}

/*
1-Create temporary memory for v2
2-Copy values from v1 into v2 temporary memory
3-Delete v1 elements memory
4-Point v2 elements to temporary memory
5-Set v2.size to v1.size
6-Return a reference to itself
*/
Vector& Vector::operator=(const Vector& v1)
{
    int* temp = new int[v1.size];
    for(auto i=0; i < v1.size; i++){
        temp[i] = v1.elements[i];
    }
    cout<<"copy assignment delete memory at "<<elements<<"\n";
    delete[] elements;
    elements = temp;
    cout<<"copy assignment new memory created "<<elements<<"\n";
    temp = nullptr;
    size = v1.size;
    return *this;
}

/*
1-Get v1.elements memory(switch/steal the data and make v1 empty)
2-Get size from v1
3-point v1.elements to nothing(nullptr)
4-set v2 size to 0
*/
Vector::Vector(Vector&& v1)
: size{v1.size}, elements{v1.elements}//stealing the memory ...switching pointers
{
    cout<<"Move constructor-Memory pointer switched..."<<elements<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

/*
1-Clear/delete original memory from v1
2-Point v2 elements to v1 elements
3-Get size from v2
4-Point v2.elements to nullptr
5-Set v2 size to 0
6-return a self reference(pointer to v1)
*/
Vector& Vector::operator=(Vector&& v2)
{
    cout<<"Move assignment-Delete memory "<<elements<<"\n";
    delete[] elements;
    elements = v2.elements;
    cout<<"Move assignment-Memory pointer switched "<<elements<<"\n";
    size = v2.size;
    v2.elements = nullptr;
    v2.size = 0;
    return *this;
}

/*
1-make sure that the new size is greater than capacity
2-Create temp memory of new_size allocation
3-copy values from old memory to new memory
4-delete the old memory
5-set elements to temp memory
6-set capacity to new_size
*/
void Vector::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }
    int* temp = new int[new_size];
    cout<<"Reserve-Memory created.."<<temp<<"\n";
    for(auto i=0; i < size; i++)
    {
        temp[i] = elements[i];
    }
    cout<<"Reserve-delete old memory "<<elements<<"\n";
    delete[] elements;
    elements = temp;
    capacity = new_size;
}

/*
PUSH BACK
1-if capacity is 0 call Reserve w RESERVE_DEFAULT_SIZE as function argument
2-else if size equal capacity call Reserve w capacity * RESERVE_DEFAULT_MULTIPLIER
3-add value to current elements[SIZE]
4-increment the size
*/
void Vector::Push_Back(int value)
{
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }
    elements[size] =  value;
    size++;
}

Vector::~Vector()
{
    std::cout<<"Destructor deleting memory at "<<elements<<"\n";
    delete[] elements;
}


void use_vector()
{
    Vector nums(3);
}

Vector get_vector()
{
    Vector nums(3);
    return nums;
}

