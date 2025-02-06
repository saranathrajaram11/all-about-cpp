#include<bits/stdc++.h>
using namespace std;

int main()
{
    int target,size;
        cout <<"enter the size of vector";
        cin >> size;
    vector<int> vec(size);
        for(int i=0;i<size;i++)
        {
                cin >>vec[i];
        }
        cout <<"enter the target element";
        cin >> target;
        bool found=false;

        for(int i=0;i<vec.size();i++)
        {
            if(vec[i]==target)
                cout << i;
                found =true;
        }
    if(!found){
        cout << "element not found";
    }
return 0;
}
