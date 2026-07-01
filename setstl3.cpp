#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.insert(5);
    for(auto x: st)
    cout<<x<<" ";
    cout<<endl;
    //Printing the size of the set
    cout<<"The size of the set->"<<st.size();
    cout<<endl;
    //Checking whther the set is empty or nor
    cout<<"Checking whther the set is empty or not->"<<st.empty();
    cout<<endl;
    //Finding an elemeent in the set
   cout<<"Enter the element that you want to find in the set->"<<endl;
   int key;
   cin>>key;
   if(st.end()==st.find(key))
   cout<<"Element not present in the set";
   else
   cout<<"Element found in the set";
   cout<<endl;
   //Checking other functionality of the set
   set<int> st1;
   st1.swap(st);
   cout<<endl;
   cout<<"Printing the other set value after swapping->"<<endl;
   for(auto x: st1)
   cout<<x<<" ";
   cout<<endl;
}