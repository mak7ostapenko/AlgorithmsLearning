#include <iostream>

#include "include/DataStructure/array.h"
#include "include/tests.h"

using std::cout;
using std::cin;
using std::endl;


int main()
{
    signed int alg_type;

    cout << "Type algorithm index to test:" << endl;
    cin >> alg_type;

    switch (alg_type)
    {
        case 1:
        {
            signed int element_ind = 5;
            fibonacci_test(element_ind);
            break;
        }
        case 2:
        {
            array_data_structure();
            break;
        }
        case 3:
        {
            queue_test();
            break;
        }
        case 4:
        {
            stack_test();
            break;
        }
        case 5:
        {
            linked_list_test();
            break;
        }
        case 6:
        {
            // THE MAIN
            dijkstra_test();
            break;
        }
        case 7:
        {
            // THE MAIN
            min_spanning_tree_test();
            break;
        }
        case 8:
        {
            // THE MAIN
            travllingSalesmanProblem_test();
            break;
        }
        case 9:
        {
            // THE MAIN
            knapSack_test();
            break;
        }
        case 10:
        {
            // THE MAIN
            knapSack_test();
            break;
        }
        case 11:
        {
            findMinCost_test();
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


