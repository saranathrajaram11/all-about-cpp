#include<bits/stdc++.h>
using namespace std;

class chess{
  public:
     static const int rows=8,cols=8;
     char arr[rows][cols];
     char peices[13]={'p','r','k','b','q','k','P','R','K','B','Q','K','.'};
     void assign_board()
     {
      int i,j;
      for(i=0;i<rows;i++)
      {
        for(j=0;j<cols;j++)
        {
          arr[i][j]=peices[12];
        }cout<<endl;
      }
      for(int k=0;k<rows;k++)
      {
        arr[1][k]=peices[0];
        arr[6][k]=peices[6];
      }
     }

     void print_board()
     {
      for(int m=0;m<rows;m++)
      {
        for(int n=0;n<cols;n++)
        {
          cout<<arr[m][n];
        }cout<<endl;
      }
     }

};

















int main()
{
  chess c;
  c.assign_board();
  c.print_board();
}
