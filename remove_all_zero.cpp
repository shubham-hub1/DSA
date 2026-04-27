#include<iostream>
#include<vector>
using namespace std;
void printarray(vector<int> * v)
{
    for(int i=0;i<v.size();i++)
    cout<<v[i];
}
void removeallzero(vector<int>v)
{
    for(int i=0;i<v.size();i++)
    {
    if(v[i]==0)
    { v.erase(v.begin()+i);

    }
}
}
int main()
{
    vector<int> v;
    v.push_back(1);v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);
    printarray(v);
    cout<<endl;
    removeallzero(&v);
    cout<<endl;
    printarray(v);

}