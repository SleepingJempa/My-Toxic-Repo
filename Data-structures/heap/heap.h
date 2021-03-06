#ifndef HEAP_H
#define HEAP_H

#include <vector>
#include <iostream>

template <typename T>
class heap
{
private:
    std::vector<T> heapArray;
public:
    heap();
    ~heap();
    T extract();
    T min();
    void heapify(int index);
    void insert(T value);
    void remove(int index);
    void set(int index, T value);
    void inverseHeapify(int index);
    int size();
    int left(int index);
    int right(int index);
    int parent(int index);
    void log();
};

#endif