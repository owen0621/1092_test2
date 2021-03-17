/*************************************************************************
  > File Name: countingTheNumOfSol.cpp
  > Author: Wang
  > Mail: owen10270936@gmail.com 
  > Created Time: Wed Mar 17 16:53:50 2021
 ************************************************************************/

#include <iostream>
#include <cstdlib>
using namespace std;

int countTheWays(void)
{
    int m = 7;
    int n = 3, coins[3] = {1, 2, 5};
    int table[m + 1];
    memset(table, 0, sizeof(table));  /* stdlib.h */
    table[0] = 1;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j <= m; ++j)
            if (j >= coins[i])
                table[j] += table[j-coins[i]];
    for(int i = 0; i <= m; i++)
        cout << table[i] << " ";
    cout << endl;
    return table[m];
}

int main()
{
    int ways = countTheWays();
    cout << ways;
    return 0;
}
