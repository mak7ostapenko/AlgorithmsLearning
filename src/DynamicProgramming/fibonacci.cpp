//
// Created by zpoken on 22/04/19.
//

#include "../../include/DynamicProgramming/fibonacci.h"

/*
 * FIBONACCI SEQUENCE
 */

// RECURSIVE method:
int recursion_fib_num(int element_ind)
{
    if (element_ind ==0 || element_ind ==1)
        // 0 and 1 are known elements of fibonacci sequence
        return element_ind;
    else
        // compute i-th element of sequence
        return recursion_fib_num(element_ind - 1) + recursion_fib_num(element_ind-2);
}

// DYNAMIC PROGRAMMING method
int dynamic_fib_num(int element_ind)
{
    // define array for first (element_ind+1) elements of sequence
    signed int fib_sequence[element_ind+1];

    // clarify the first two elements
    fib_sequence[0] = 0;
    fib_sequence[1] = 1;

    for (int i = 2; i <= element_ind; i++)
    {
        // compute i-th element of sequence by Fibonacci rule
        fib_sequence[i] = fib_sequence[i-1] + fib_sequence[i-2];
    }

    return fib_sequence[element_ind];
}