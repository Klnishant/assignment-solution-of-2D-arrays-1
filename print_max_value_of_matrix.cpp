#include<vector>
#include<iostream>
using namespace std;

int findmaxnum(vector<vector<int>> &matrix)
{
    int max=INT_MIN;

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j>max])
            {
                max=matrix[i][j];
            }
            
        }
        
    }
    return max;
}

int main()
{
    int n,m;

    cout<<"Enter the row and column of the matrix:";
    cin>>n>>m;

    vector<vector<int>> matrix(n,vector<int>(m));

    cout<<"Enter the element of the matrix"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>matrix[i][j];
        }
        
    }

    cout<<"Entered matrix is given below"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    int max = findmaxnum(matrix);

    cout<<"Maximum number present in the matrix:"<<max<<endl;
    
    
    return 0;
}
