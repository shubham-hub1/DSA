#include<iostream>
#include<vector>
using namespace std;
void printarray(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}
int binarysearch(vector<int> v,int key)
{
int low=0;
int high=v.size()-1;
if(low>high)
return -1;
while(low<=high)
{
    int mid=(low+high)/2;
    if(v[mid]==key)
    { 
        while(mid>0&&v[mid]==v[mid-1])
        { mid--;
        }
        return mid;
    }
    else if(v[mid]>key)
    high=mid-1;
    else if(v[mid]<key)
    low=mid+1;
}
return -1;
}
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(1);

    v.push_back(1);
    v.push_back(1);v.push_back(1);

    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);
    v.push_back(2);

    v.push_back(3);
    v.push_back(3);v.push_back(3);
    v.push_back(3);
    v.push_back(3);

    v.push_back(4);

    v.push_back(4);v.push_back(4);v.push_back(4);

    v.push_back(5);v.push_back(5);v.push_back(5);v.push_back(5);v.push_back(5);v.push_back(5);v.push_back(5);v.push_back(5);v.push_back(5);
    v.push_back(6);v.push_back(6);v.push_back(6);v.push_back(6);v.push_back(6);v.push_back(6);v.push_back(6);
    printarray(v);
    cout<<endl;
    cout<<"Enter the element that you want to find out"<<endl;
    int key;
    cin>>key;
    int result=binarysearch(v,key);
    if(result==-1)
    cout<<"Element not found"<<endl;
    else 
    cout<<"Element found at index->"<<result<<endl;

}