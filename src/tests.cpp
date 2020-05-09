#include <iostream>

#include "../include/DynamicProgramming/fibonacci.h"
#include "../include/DataStructure/queue.h"
#include "../include/DataStructure/stack.h"
#include "../include/DataStructure/linked_list.h"
#include "../include/GraphAlgorithms/dijkstra.h"
#include "../include/GraphAlgorithms/min_spanning_tree.h"
#include "../include/GraphAlgorithms/traveling_salesman_problem.h"
#include "../include/DynamicProgramming/knapsack_problem.h"
#include "../include/DynamicProgramming/job_assignment_problem.h"


#define V 9

using std::cout;
using std::cin;
using std::endl;


void fibonacci_test(const int &ind) {
    cout << "Value of " << ind << "-th elemnt in Fibonacci sequence = "
         << recursion_fib_num(ind) << " (computed with RECURSIVE algorithm)"<< endl;
    cout << "Value of " << ind << "-th elemnt in Fibonacci sequence = "
         << dynamic_fib_num(ind) << " (computed with DYNAMIC algorithm)"<< endl;

}


void queue_test() {
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
}

void stack_test() {
    Stack stack(3);

    cout << "stack is empty? " << stack.isEmpty() << endl;
    cout << "stack is full? " << stack.isFull() << endl;

    stack.push(30);
    stack.push(35);

    cout << "first element of stack = " << stack.pop() << endl;
    cout << "first element of stack = " << stack.pop() << endl;
    cout << "stack is full? " << stack.isFull() << endl;

    stack.push(35);

    cout << "first element of stack = " << stack.pop() << endl;

    stack.~Stack();
    cout << "Done" << endl;
}


void linked_list_test() {
    LinkedList linked_list;

    linked_list.add_node(1);
    linked_list.add_node(2);
    linked_list.add_node(4);
    linked_list.display();
    cout << endl;

    linked_list.insert_first(0);
    linked_list.add_node(5);
    linked_list.display();
    cout << endl;

    linked_list.delete_first();
    linked_list.delete_last();
    linked_list.insert_position(2, 3);
    linked_list.display();
    cout << endl;

    linked_list.delete_position(2);
    linked_list.display();
    cout << endl;

    linked_list.~LinkedList();

    cout << "Done" << endl;
}


void dijkstra_test() {
    /* Let us create the example graph discussed above */
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    dijkstra(graph, 0);
}


#define V 5
void min_spanning_tree_test() {
        /* Let us create the following graph
            2 3
        (0)--(1)--(2)
        | / \ |
        6| 8/ \5 |7
        | / \ |
        (3)-------(4)
                9     */
        int graph[V][V] = { { 0, 2, 0, 6, 0 },
                            { 2, 0, 3, 8, 5 },
                            { 0, 3, 0, 0, 7 },
                            { 6, 8, 0, 0, 9 },
                            { 0, 5, 7, 9, 0 } };

        // Print the solution
        primMST(graph);
}


#define V 4
void travllingSalesmanProblem_test() {
    // matrix representation of graph
    int graph[][V] = { { 0, 10, 15, 20 },
                       { 10, 0, 35, 25 },
                       { 15, 35, 0, 30 },
                       { 20, 25, 30, 0 } };
    int s = 0;
    cout << travllingSalesmanProblem(graph, s) << endl;
}


void knapSack_test() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val)/sizeof(val[0]);
    cout<<knapSack(W, wt, val, n);
}


void findMinCost_test() {
    // x-cordinate represents a Worker
    // y-cordinate represents a Job
    int costMatrix[N][N] =
            {
                    {9, 2, 7, 8},
                    {6, 4, 3, 7},
                    {5, 8, 1, 8},
                    {7, 6, 9, 4}
            };


    /* int costMatrix[N][N] =
    {
        {82, 83, 69, 92},
        {77, 37, 49, 92},
        {11, 69,  5, 86},
        { 8,  9, 98, 23}
    };
    */

    /* int costMatrix[N][N] =
    {
        {2500, 4000, 3500},
        {4000, 6000, 3500},
        {2000, 4000, 2500}
    };*/

    /*int costMatrix[N][N] =
    {
        {90, 75, 75, 80},
        {30, 85, 55, 65},
        {125, 95, 90, 105},
        {45, 110, 95, 115}
    };*/


    cout << "\nOptimal Cost is "
         << findMinCost(costMatrix);

}