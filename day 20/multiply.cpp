#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows1, cols1;
    int rows2, cols2;

    cout << "Enter number of rows of first matrix: ";
    cin >> rows1;

    cout << "Enter number of columns of first matrix: ";
    cin >> cols1;

    cout << "Enter number of rows of second matrix: ";
    cin >> rows2;

    cout << "Enter number of columns of second matrix: ";
    cin >> cols2;
    if(cols1!=rows2)
    {
        cout << "multiplication not possible as columns of first matrix is not equal to rows of second matrix";
        return 0;
    }

    vector<vector<int>> A(rows1, vector<int>(cols1));
    vector<vector<int>> B(rows2, vector<int>(cols2));
    vector<vector<int>> C(rows1, vector<int>(cols2));

    cout << "Enter elements of first matrix:\n";
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols1; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for(int i = 0; i < rows2; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            cin >> B[i][j];
        }
    }

    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            C[i][j]=0;
            for(int k=0;k<cols1;k++)
            {
                C[i][j]+=(A[i][k]*B[k][j]);
            }
            }
        }

    cout << "Sum of matrices:\n";
    for(int i = 0; i < rows1; i++)
    {
        for(int j = 0; j < cols2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}