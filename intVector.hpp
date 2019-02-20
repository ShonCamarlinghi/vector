//
// Created by Shon Camarlinghi and Alexander Zinoviev on 11/4/18.
//

#ifndef VECTOR_INTVECTOR_HPP
#define VECTOR_INTVECTOR_HPP


class intVector {
public:
    intVector();
    //copy constructor can be called only once for every object.
    intVector(intVector const& rhs); //single param type of same class that passed by const reference
    intVector& operator=(intVector const& rhs); // returns reference to this object (this)

    ~intVector(); // desctructor
    void push_back(int v); // int v is the value that user want to add to the end of array

    int size(); // returns current number of elements in the array
    int capacity(); // returns current capacity f the array
    int* data(); //returns pointer to array
    int operator[](int index); /* returns data at given index of array
    if index is out of bounds of array, it will print error message and return 0; */


private:
    int *data_; //points to array on a heap to hold data of type integers
    int capacity_; // maximum size of the allocated array
    int size_;  //initial size is 0, or number of elements the vector has at this points

};


#endif //VECTOR_INTVECTOR_HPP
