#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int recursion_fib_num(int element_ind);
int dynamic_fib_num(int element_ind);

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
        default:
        {
            cout << "ERROR: Algorithm " << alg_type << " is not exist" << endl;
            break;
        }
    }

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////
// FIBONACCI SEQUENCE
// recursive method:
int recursion_fib_num(int element_ind)
{
    if (element_ind <=1)
        // 0 and 1 are known elements of fibonacci sequence
        return element_ind;
    else
        // compute i-th element of sequence
        return recursion_fib_num(element_ind - 1) + recursion_fib_num(element_ind-2);
}

// dynamic programming method
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

////////////////////////////////////////////////////////////////////////////////////////
