// C++ matrix multiplication code

#include<bits/stdc++.h>
#include "matrixmul.hpp"

using namespace std;

#define n 600

// define a function for matrix multiplication
void matrixmul(vector<vector<int>> &A, vector<vector<int>> &B, vector<vector<int>> &C)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            C[i][j]=0;
            for(int k=0;k<n;k++)
            {
                C[i][j]+=A[i][k]*B[k][j];
            }
        }
    }
}