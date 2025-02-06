#include<bits/stdc++.h>
using namespace std;

class chess{
  public:
     static const int rows=8,cols=8;
     char arr[rows][cols];
     char peices[13]={'p','r','n','b','q','k','P','R','N','B','Q','K','.'};
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
     /* for black side*/
     arr[0][0]=peices[1];
     arr[0][7]=peices[1];
     arr[0][1]=peices[2];
     arr[0][6]=peices[2];
     arr[0][2]=peices[3];
     arr[0][5]=peices[3];
     arr[0][3]=peices[4];
     arr[0][4]=peices[5];
     /* for white side*/
     arr[7][0]=peices[7];
     arr[7][7]=peices[7];
     arr[7][1]=peices[8];
     arr[7][6]=peices[8];
     arr[7][2]=peices[9];
     arr[7][5]=peices[9];
     arr[7][3]=peices[10];
     arr[7][4]=peices[11];
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
