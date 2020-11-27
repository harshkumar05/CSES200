//csesmissingnumbers
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,i;
    cin>>n;
    long int j=n-1;
    long int arr[j];
    for(i=0;i<j;i++)
        cin>>arr[i];
    if(n==2)
    {
        if(arr[0]==2)
            cout<<"1"<<endl;
        if(arr[0]==1)
            cout<<"2"<<endl;
        
            return 0;
    }
    sort(arr,arr+j);
    for(i=0;i<j;i++)
    {
        int k=i+1;
        if((arr[i]+1)!=arr[k])
            {
                cout<<" "<<arr[i]+1;
                break;
            }
    }
    return  0;
}