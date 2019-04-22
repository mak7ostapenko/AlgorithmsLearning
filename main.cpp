#include <iostream>

#include "include/DataStructure/queue.h"
#include "include/DynamicProgramming/fibonacci.h"
#include "include/DataStructure/array.h"

using std::cout;
using std::cin;
using std::endl;


void array_data_structure();


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
        case 3:
        {
            cout << "Work with queue" << endl;

            Queue queue(5);

            cout << "queue is empty? " << queue.isEmpty() << endl;
            cout << "queue is full? " << queue.isFull() << endl;

            queue.enqueue(3); // TODO: how declare param?
            queue.enqueue(35);

            cout << "from of queue = " << queue.get_front() << endl;
            cout << "reare of queue = " << queue.get_rear() << endl;

            cout << "dequeue operation " << queue.dequeue() << endl;

            queue.~Queue();
            cout << "Done" << endl;
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


