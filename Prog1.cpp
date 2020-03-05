/***************************
CSCI 340 Program 1 Spring 2020

Programmer: Ethan Johnson

Z-ID: z1826490

Section: 4

Date Due: January 21, 2020
***************************/
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "prog1.h"

using namespace std;

using std::cout;
using std::vector;
using std::right;
using std::setw;
using std::endl;

int main()
{
vector< int > v;

genRndNums(v);

sort(v.begin(),v.end()); //Sorts the elements of v in ascending order

printVec(v);

return 0;

}
/***************************************
FUNCTION: void genRndNums

NOTES: Generates VEC_SIZE integers and
stores them in vector v
****************************************/
void genRndNums ( vector < int >& v )
{
        srand(SEED);

        for( int i = 0; i < VEC_SIZE; i++)
        {
        v.push_back(rand()%(HIGH-LOW+1)+ LOW);
        }
}
/**************************************************
FUNCTION: void printVec

NOTES: Displays the contents of vector v on stdout,
printing exactly NO_ITEMS = 12 numbers in a single line
***************************************************/
void printVec ( const vector < int >& v )
{
int num;

    for (unsigned int i = 0; i <VEC_SIZE; i++)
    {
    cout << setw(ITEM_W) << v[i];

    num = (i+1) % NO_ITEMS;

        if (num == 0)
        {
        cout << endl;
        }
    }
}

