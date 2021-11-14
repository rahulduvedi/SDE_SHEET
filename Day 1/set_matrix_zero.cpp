//day 1 probem 1

#include<iostream>
#include<vector>
using namespace std;

//ulitily function
void display(vector<vector<int>> matrix)
{
    for(int i=0;i<matrix.size();i++)
    {
        for(int j =0;j<matrix[0].size();j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout <<endl;
    }
    cout <<endl;
}

void better_appraoch(vector<vector<int>> matrix)
{

    display(matrix);// displaying the ouput;
}


void optimal(vector<vector<int>> matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();
    int flag = false;
    for(int i =0;i<r;i++)
    {
        if(matrix[i][0] == 0) flag = true;
        for(int j =1;j<c;j++)
        {
            if(matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    
    }

    
    for(int i= r-1; i >= 0; i--)
    {   
        for(int j = c-1; j >= 1; j--)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }   
        }

        if(flag == true)  matrix[i][0] = 0;
    }   
    display(matrix);
}



//driver code
int main()
{
    vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
    display(matrix);// dislaying the original array;
    optimal(matrix);

}