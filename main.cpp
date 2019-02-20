//Created by Shon Camarlinghi and Alexander Zinoviev on 11/4/18.

#include <iostream>
#include "intVector.hpp"

int main() {
    std::cout << "Hello, World!" << std::endl;
    const int SIZE = 12;
    intVector a;
    for (int i = 0; i < SIZE; i++) {
        a.push_back(i*2);
    }

    //int v1 = a.getByIndex(1); // returns 5.
    std::cout << "Size=" << a.size() << std::endl;
    std::cout << "Capacity=" << a.capacity() << std::endl;
    std::cout << "First=" << a[0] << std::endl;
    std::cout << "Second=" << a[1] << std::endl;
    std::cout << "Invalid Index=" << a[2000] << std::endl;

    intVector b(a); //copy constructor
    std::cout << "Address A: " << a.data() << ",  Address B: " << b.data() << std::endl;
    std::cout << "Size A: " << a.size() << ",  Size B: " << b.size() << std::endl;
    std::cout << "Capacity A: " << a.capacity() << ",  Capacity B: " << b.capacity() << std::endl;

    for (int i=0; i < a.size(); i++) {
        std::cout << "element A: " << a[i] << ",  element B: " << b[i] << std::endl;
    }

    intVector c; //default constructor
    c = a; // default assignment operator called

    c = c;


//    {
//        intVector b = a; // usage of default COPY CONSTRUCTOR
    //    b = a; //assignment operator
//    }

    //std::cout << "Second=" << a[1] << std::endl;

    return 0;
}