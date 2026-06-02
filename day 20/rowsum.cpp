#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int rows, cols;
  

    cout << "Enter number of rows of first matrix: ";
    cin >> rows;

    cout << "Enter number of columns of first matrix: ";
    cin >> cols;

  
    vector<vector<int>> A(rows, vector<int>(cols));

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }
    unordered_map<int,int> c;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            c[i]+=A[i][j];
        }
    }
    for(auto it:c)
    {
        cout << "sum of row" << it.first << " = " << it.second;
    }

}