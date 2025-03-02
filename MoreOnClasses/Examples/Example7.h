#ifndef VECTOR_H
#define VECTOR_H
template <typename T>
class Vector
{
    T *arr;
    int size;

public:
    Vector() {}
    Vector(int size)
    {
        this->arr = new T[size];
    }

    void pop_back()
    {
        
    }
};
#endif