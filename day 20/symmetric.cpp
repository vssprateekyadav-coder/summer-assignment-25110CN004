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
    if(rows!=cols)
    {
        cout << "given matrix cannot be symmetric as rows!=colomns";
        return 0;
    }

    vector<vector<int>> A(rows, vector<int>(cols));
   
    cout << "Enter elements of matrix:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0;j<cols;j++)
        {
            cin >> A[i][j];
        }
    }
   for(int i=0;i<rows;i++)
   {
    for(int j=0;j<i;j++)
    {
        if(A[i][j]!=A[j][i])
        {
            cout << "given matrix is not symmetric";
            return 0;
        }
    }
   }
   cout << "given matrix is symmetric";
   return 0;
}