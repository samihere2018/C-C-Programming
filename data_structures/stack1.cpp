/* Date: 11th May, 2025 */
/* Author: Sylvia Dogbatsey */

/* To run the program in a MACOS or Windows terminal, use the following command: */
/* g++ -o dummyname filename.cpp */
/* Next run the dummy name: ./dummyname */

/* Topic: Data Structures (Stack) */
/* Notes: A stack stores multiple elements in a specific order, called LIFO.
          LIFO stands for Last in, First Out. To vizualise LIFO, think of a pile of pancakes, 
          where pancakes are both added and removed from the top. So when removing a pancake, 
          it will always be the last one you added. This way of organizing elements is called LIFO in
          computer science and programming.
          Unlike vectors, elements in the stack are not accessed by index numbers. 
          Since elements are added and removed from the top, you can only access the element at the top of the stack.
          To use a stack, you have to include the <stack> header file. */

#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
#include <ctime>
#include <stack>
using namespace std;

int main(){

    /* Create a Stack: To create a stack, use the stack keyword, and specify the type of values it should store within 
                       angle brackets <> and then the name of the stack, like: stack<type> stackName.
                       The type of the stack (string in our example) cannot be changed after its been declared.
                       You cannot add elements to the stack at the time of declaration, like you can with vectors. */
    stack<string> cities;

    /* Add Elements: To add elements to the stack, use the .push() function, after declaring the stack.*/
    cities.push("Washington Dulles");
    cities.push("Charlotte");
    cities.push("Birmingham");
    cities.push("Tuscaloosa");
    cities.push("Atlanta");
    cities.push("Starkville");
    cities.push("Dallas");
    cities.push("fort Worth");
    cities.push("Forney"); //remember that the last element added is the top element



    return 0;
}