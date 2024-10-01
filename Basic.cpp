#include<bits/stdc++.h>
using namespace std;

/*Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/

int main()
{

int target;
cout << "target"<<endl;
cin >> target;
int arr[4]={2,7,11,15};
for(int i=0;i<4;i++)
{
    if(arr[i]+arr[i+1]==target)
    {
        cout << i <<" "<<i+1;
    }
}
return 0;
}
