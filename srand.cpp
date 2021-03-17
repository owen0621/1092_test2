/*************************************************************************
  > File Name: srand.cpp
  > Author: Wang
  > Mail: owen10270936@gmail.com 
  > Created Time: Sat Mar 13 18:11:52 2021
 ************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int arr[10];
    for(int i = 0; i <10000; i++)
    {
        int tmp = rand()%10;
        switch(tmp+1)
        {
            case(1):
                ++arr[0];
                break;
            case(2):
                ++arr[1];
                break;
            case(3):
                ++arr[2];
                break;
            case(4):
                ++arr[3];
                break;
            case(5):
                ++arr[4];
                break;
            case(6):
                ++arr[5];
                break;
            case(7):
                ++arr[6];
                break;
            case(8):
                ++arr[7];
                break;
            case(9):
                ++arr[8];
                break;
            case(10):
                ++arr[9];
                break;
        }
    }
    for(int i = 0; i < 10; i++)
    {
        cout << "Num" << i+1 << ": " << arr[i] << endl;
    }
    return 0;
}
