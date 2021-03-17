/*************************************************************************
  > File Name: printTriangle.cpp
  > Author: Wang
  > Mail: owen10270936@gmail.com 
  > Created Time: Wed Mar 17 21:13:37 2021
 ************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

void printTriangle(int size) //size is the sizeOfRows from the main function
{
    char arr[2*size - 1]; //store one row inside, 2*size-1 is the lenth of a row 
    arr[size] = '\0';
    for(int i = 0; i < 2*size - 1; i++) //initialize the array to the first row
    {
        if(i == (2*size - 1)/2) //set the element located in the middle of the row to '*'
            arr[i] = '*';
        else                    //set other elements to " "(space);
            arr[i] = ' ';
    }

    for(int i = 1; i <= size; i++) //print and modify the array to the following rows
    {
        cout << arr << endl; //print the row
        arr[(2*size - 1)/2 - i] = '*'; //modify the row to the next row
        arr[(2*size - 1)/2 + i] = '*'; //modify the row to the next row
    }
    return; //return the control of the program back to main function
}

int main()
{
    int sizeOfRows = 10; //sizeOfRows is the number of rows of the triangle
    printTriangle(sizeOfRows); //call the function
    return 0;
}
