#include<bits/stdc++.h>
using namespace std;

int binary_Search(int siz,int arr[],int target)
{
int startpointer=0;
int endpointer=siz-1;

while(startpointer<=endpointer)
{
    int mid=startpointer+(endpointer-startpointer)/2;
    if(arr[mid]==target)//if target element found at mid position
        return mid;
    else if(arr[mid]<target)// if target element greater than mid it searches completely right array so we need to move startpointer to right by decreased +1;
        startpointer=mid+1;
    else                   // if target element  less than mid it searches completely left array so we need to move endpointer to left by increased -1;
        endpointer=mid-1;

}
return -1; // if element not found

}


int main()
{

    int siz;
    cout<<"enter the length of the array"<<endl;
    cin>> siz;

    vector<int> arr(siz);
    cout <<"enter the array element Note! the element must be sorted in ascending order"<<endl;
    for(int i=0;i<siz;i++)
      cin >> arr[i];

    int target;
    cout <<"enter the element to find in sorted array"<<endl;
    cin>>target;

int output=binary_Search(siz,arr.data(),target);
if(output!=-1)
   cout << "Element found at position " << output << endl;
else
    cout <<"you cheated me! that you entered the element that not presented in the sorted array";

return 0;
}

