#include<bits/stdc++.h>
using namespace std;

class chess{
  public:
  enum pieces{
      Wpawn=1,Wknight=2,Wbishop=3,Wrook=4,Wqueen=5,Wking=6           ,empty=0,Bpawn=-1,Bknight=-2,Bbishop=-3,Brook=-4,Bqueen=-5,Bking=-6};
  int row=8,col=8,i,j;
  vector<vector<char>> board;
  chess()
  {
      board.resize(row, vector<char>(col,'.'));
      assign();
  }
    void print_board()
    {
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                board[i][j]='.';
            cout<<board[i][j];
            }
            cout<<endl;
        }
    }
    
    void assign()
    {
        board[0][0]=Bknight;
        board[0][1]=Bknight;
        board[0][2]=Bknight;
        board[0][3]=Bknight;
        board[0][4]=Bknight;
        for(j=0;j<row;j++)
        {
          board[1][j]=Bpawn;
          board[6][j]=Wpawn;
        }
    };
};


int main()
{
    chess c;
    c.print_board();
    c.assign();
}
