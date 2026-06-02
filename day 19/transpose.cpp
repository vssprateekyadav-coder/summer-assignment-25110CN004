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
    vector<vector<int>> T(cols, vector<int>(rows));
    for(int i=0;i<cols;i++)
    {
        for(int j=0;j<rows;j++)
        {
            T[i][j]=A[j][i];
        }
    }
    cout << "Transpose of matrix:\n";

for(int i = 0; i < cols; i++)
{
    for(int j = 0; j < rows; j++)
    {
        cout << T[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}