//
// Created by Shon Camarlinghi and Alexander Zinoviev on 11/4/18.
//

#include <iostream>
#include "intVector.hpp"
int const MAX = 10;

intVector::intVector() {
    data_ = new int[MAX];
    capacity_ = MAX;
    size_= 0;
}

intVector::intVector(intVector const& rhs) {//single param type of same class that passed by const reference
    data_ = new int[rhs.capacity_];
    size_ = rhs.size_;
    capacity_ = rhs.capacity_;
    for (int i=0; i < size_; i++) {
        data_[i] = rhs.data_[i];
    }
}

intVector& intVector::operator=(intVector const& rhs) {
    if (&rhs == this) { //if address of rhs object same as addressof this object
        std::cout << "assignment to itself" << std::endl;
        return *this;
    }

    delete [] data_; //delete/deallocates/remove from the heap/   old buffer(array)

    data_ = new int[rhs.capacity_];
    size_ = rhs.size_;
    capacity_ = rhs.capacity_;
    for (int i=0; i < size_; i++) {
        data_[i] = rhs.data_[i];
    }

    return *this; //returns reference to this object
}

intVector::~intVector() {
    delete [] data_;
}

void intVector::push_back(int v) {
    if (size_ >= capacity_) {
        std::cout << "Reallocation from " << capacity_ << " to " << capacity_*2 << std::endl;
        int *p = new int[2 * capacity_]; //1st heap operation
        for (int i = 0; i < capacity_; i++) {
            p[i] = data_[i];
        }
        delete [] data_;  //2nd heap operations
        data_ = p;
        capacity_ *= 2;
    }

    data_[size_] = v;
    size_++;
}

int intVector::size() {
    return size_;
}

int intVector::capacity() {
    return capacity_;
}

int* intVector::data() {
    return data_;
}

int intVector::operator[](int index) {
    if (index < 0 || index > size_-1 ) {
        std::cout << "Index out of range: index " << index << ", capacity " << capacity_ << std::endl;
        return 0;
    }
    else {
        return data_[index];
    }
}



