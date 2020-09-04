/*
 * Project: Vector class
 * Purpose: Creating vector class for dynamic variable having vector functions.
            Learning how to use big three: copy constructor, assignment operator and destructor.
 * Notes: Inputting the capacity or size for the dynamic array. Inputting an index or value for corresponding functions.
*/
#include <iostream>
#include "Vector.h"
#include <cassert>
using namespace std;

int main() {
    cout << endl << endl;

    Vector <int>  vector (10);
    assert ( vector. size() >=0);
    assert (vector.size() < vector.capacity());

    for (int i = 0; i < vector.capacity(); i++){
        vector.push_back(i);
    }
    cout << "The original vector: " << vector << endl;

    vector.push_back(45);// adding 45 to the array
    assert ( vector. size() >=0);
    assert (vector.size() < vector.capacity());

    cout <<"Test for push back function: "<< vector << endl;

    cout << "The value at index 5 is: " << vector.at(5) << endl;

    vector.insert(2, 7);// insert value at a specific index
    assert (vector. size() >=0);
    assert (vector.size() < vector.capacity());
    cout << "Test for insert function, 7 at index 2: " << vector << endl;

    cout << "Test for front function, first element: " << vector.front() << endl;

    cout << "Test for back function, last element: " << vector.back() << endl;

    cout << "Test for pop back function, erase last element then return it: " << vector.pop_back() << endl;

    vector.erase(3);// Erase value at index 3
    cout << "Test for erase function; erasing value at index 3: "<< vector << endl;

    cout <<  "Test for index_of function, index of 7 is: " << vector.index_of(7) << endl;


    Vector <int> temp (5);
    assert ( temp. size() >=0);
    assert (temp.size() < vector.capacity());
    for (int i = 0; i < temp.capacity(); i++)
        temp. push_back(i*10);
    cout << "The array temp is: " << temp << endl;

    vector = temp;// temp is declared above, that is why we use the assignment operator
    cout << "The vector array after using assignment operator with the temp array: " << vector << endl;

    Vector <int> copy(vector); // using copy constructor to initialize the copy array from the vector array
    cout << "The copy array after using copy constructor with the vector array: " << copy << endl;
//
//    vector. set_size(14);// set the size of vector to 14
//    assert ( vector. size() >=0);
//    assert (vector.size() < vector.capacity());
//    cout << "The vector after set size to 14: " << vector << endl;

    vector.insert(11, 125);
    cout << "Inserting 125 at index 11: " << vector << endl;

    cout << "Using pop back for the vector: ";
    for (int i = (vector.size() - 1) ; i >= 0; i--){
        cout <<vector.pop_back() <<" ";
    }

    cout << endl << endl << "=========END=========" << endl << endl;

    return 0;
}
