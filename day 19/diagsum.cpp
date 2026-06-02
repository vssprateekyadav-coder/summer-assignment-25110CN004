#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    vector<vector<int>> A(rows, vector<int>(cols));
   
    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0;j<cols;j++)
        {
            cin >> A[i][j];
        }
    }
    int sum=0;
   for(int i=0;i<rows;i++)
   {
    for(int j=0;j<cols;j++)
    {
        if(i==j || j==cols-i-1)
        {   
            sum+=A[i][j];
        }
    }
   }
    cout << "\ndiagonal sum = "<< sum; 
    return 0;
}