#include<bits/stdc++.h>
using namespace std;
vector<int> merge(int * ptr,int * qtr,int size1,int size2)
{ int i=0;
    int j=0;
    vector<int> v2;
    while(i<size1&&j<size2)
    {
        if(ptr[i]<=qtr[j])
        {  
            v2.push_back(ptr[i]);
            i++;

        }
        else{
            v2.push_back(qtr[j]);
            j++;
        }
    }
    while(i<size1)
    {
v2.push_back(ptr[i]);
i++;
    }
    while( j<size2)
    {
    
        v2.push_back(qtr[j]);
        j++;
    }
    return v2;
}
int main()
{
    int arr1[]={1,2,4,5,7,9};
    int arr2[]={3,6,8,10};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    vector<int>  v1;
    v1=merge(arr1,arr2,size1,size2);
    for(int i=0;i<v1.size();i++)
    cout<<v1[i]<<" ";
}