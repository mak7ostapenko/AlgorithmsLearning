#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void array_data_structure();



// Algorithms for computing n-th element of Fibonacci sequence
int recursion_fib_num(int element_ind);
int dynamic_fib_num(int element_ind);
// Algorithms for computing


int main()
{
    signed int alg_type;

    cout << "Type algorithm index to test:" << endl;
    cin >> alg_type;

    switch (alg_type)
    {
        // compute n-th element of Fibonacci sequence
        case 1:
        {
            signed int element_ind = 5;

            cout << "Value of " << element_ind << "-th elemnt in Fibonacci sequence = "
                 << recursion_fib_num(element_ind) << " (computed with RECURSIVE algorithm)"<< endl;
            cout << "Value of " << element_ind << "-th elemnt in Fibonacci sequence = "
                 << dynamic_fib_num(element_ind) << " (computed with DYNAMIC algorithm)"<< endl;
            break;
        }
        case 2:
        {
            array_data_structure();
            break;
        }
        default:
        {
            cout << "ERROR: Algorithm " << alg_type << " is not exist" << endl;
            break;
        }
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////
/*
 * DATA STRUCTURES
 */
////////////////////////////////////////////////////////////////////////////////////////


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
    cout << "Array b2 has size = " << sizeof(b2) << endl;
    cout << "but it has 7-th element = " << b2[5] << endl;
    cout << endl;

    // Initialization of a multidimensional arrays
    int multi_arr[][4][2] = {{{1, 2}, {3, 4},
                              {23, 12}, {12, 12}}};
    cout << "Size of multi dim array = " << sizeof(multi_arr) << endl << endl;

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




////////////////////////////////////////////////////////////////////////////////////////
/*
 * BASIC ALGORITHMS
 */
////////////////////////////////////////////////////////////////////////////////////////

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
