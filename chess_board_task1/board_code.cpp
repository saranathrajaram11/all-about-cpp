#include<bits/stdc++.h>
using namespace std;


void board()
{
    const int siz=8;
    char arr[siz][siz];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
             arr[i][j]='.';
    cout<<arr[i][j];
        }
        cout<<endl;
    }

}


int main()
{

    board();
    return 0;
}
