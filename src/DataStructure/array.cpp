#include <iostream>
#include "../../include/DataStructure/array.h"

using std::cout;
using std::endl;


//
// Created by zpoken on 22/04/19.
//

/*
 * ARRAYS
 */

void array_data_structure()
{
    // NOTE that in C++ there is vector like Python list
    // Array declaration ways
    int a[3]; // random values
    int b1[] = {1, 2, 3}; // declared values
    int b2[] = {1, 2, 3}; // declared values
    int c[3] = {}; // zero values
    int *e; // equal some think like that: 0x1cc687dERROR

    cout << "You have to remember that in C++ isn't error of out of bound array: " << endl;
    cout << "Array b2 has size = " << sizeof(b2) / sizeof(*b2) << endl;
    cout << "but it has 7-th element = " << b2[5] << endl;
    cout << endl;

    // Initialization of a multidimensional arrays
    int multi_arr[][4][2] = {{{1, 2}, {3, 4},
                                     {23, 12}, {12, 12}}};
    cout << "Size of multi dim array = " << sizeof(multi_arr) / sizeof(*multi_arr) << endl << endl;

    // an array of 10 integers.  If arr[0] is stored at
    // address x, then arr[1] is stored at x + sizeof(int)
    // arr[2] is stored at x + sizeof(int) + sizeof(int)
    // and so on.
    cout << "Size of int = " << sizeof(int) << endl;
    cout << "Size of b1 = " << sizeof(b1) << endl;

    for (int i = 0; i < sizeof(b1); i++)
    {
        // The use of '&' before a variable name, yields
        // address of variable.
        cout << "Adress of b1[" << i << "] = " << &b1[i] << endl;
    }
}