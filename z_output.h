//
// Created by tangb on 3/29/2020.
//

#ifndef VECTORCLASS_Z_OUTPUT_H
#define VECTORCLASS_Z_OUTPUT_H
/*
***** ALL RESULTS ARE VERIFIED ******
//---------------------------------------------------------------------
// Test for vector class program
//---------------------------------------------------------------------

 ------------ RESULTS --------------------
************allocate(): capacity: 10
The original vector: 0 1 2 3 4 5 6 7 8 9
************allocate(): capacity: 20
Test for push back function: 0 1 2 3 4 5 6 7 8 9 45
The value at index 5 is: 5
Test for insert function, 7 at index 2: 0 1 7 3 4 5 6 7 8 9 45
Test for front function, first element: 0
Test for back function, last element: 45
Test for pop back function, erase last element then return it: 45
Test for erase function; erasing value at index 3: 0 1 7 4 5 6 7 8 9
Test for index_of function, index of 7 is: 2
************allocate(): capacity: 5
The array temp is: 0 10 20 30 40
************allocate(): capacity: 5
The vector array after using assignment operator with the temp array: 0 10 20 30 40
************allocate(): capacity: 5
The copy array after using copy constructor with the vector array: 0 10 20 30 40
************allocate(): capacity: 15
The vector after set size to 14: 0 10 20 30 40 0 0 0 0 0 0 0 0 0
Inserting 125 at index 11: 0 10 20 30 40 0 0 0 0 0 0 125 0 0
Using pop back for the vector: 0 0 125 0 0 0 0 0 0 40 30 20 10 0

=========END=========



=========END=========

#endif //VECTORCLASS_Z_OUTPUT_H
