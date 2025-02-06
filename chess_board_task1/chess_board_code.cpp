#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<< "The chess board Note : white peice marked in caps and black in smallcase";
    int s=8;
    char board[s][s];
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            board[i][j]='.';
       // cout<<board[i][j];
        }
        cout<<endl;
    }
     for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if ((i==0 && j==0)|| (i==0 && j==7)){board [i][j]='R';}
            if((i==7 && j==0)||(i==7 && j==7)){board[i][j]='r';}
            if((i==0 && j==1)||(i==0 && j==6)){board[i][j]='N';}
            if((i==7 && j==1)||(i==7 && j==6)){board[i][j]='n';}
            if ((i==0 && j==4)){board [i][j]='K';}
            if((i==7 && j==4)){board[i][j]='k';}
            if (i==0 && j==3){board[i][j]='Q';}
            if (i==7 && j==3){board[i][j]='q';}
            if ((i==0 && j==2)|| (i==0 && j==5)){board[i][j]='B';}
            if ((i==7 && j==2)||(i==7 && j==5)){board[i][j]='b';}
            board[1][j]='P';
            board[6][j]='p';
        cout<<board[i][j];
        }
        cout<<endl;
    }
    return 0;

}
