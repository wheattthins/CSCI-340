#ifndef H_PROG1 // should not be defined any place else
#define H_PROG1 // same const value as for ifndef directive

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

const int DATA_RANGE = 10000;
const int DATA_SIZE = 10000;
const int SEED = 1;
const int LOW = 1;
const int HIGH = 10000;

const int NO_ITEMS = 12;
const int ITEM_W = 5;

const int VEC_SIZE = 200; //Size of the vector

using namespace std;

//Function prototypes
void genRndNums (vector <int>& v); //Generates integers and stores them in vector v

void printVec (const vector <int>& v); //Displays the contents of vector v

#endif


