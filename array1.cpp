// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // void printarray(int * ptr,int size)
// // // // {
// // // //     for(int i=0;i<size;i++)
// // // //     {
// // // //         cout<<*(ptr+i)<<" ";
// // // //     }
// // // // }
// // // // int linearsearch(int * ptr,int size,int key)
// // // // {
// // // //     for(int i=0;i<size;i++)
// // // //     {
// // // //         if(ptr[i]==key)
// // // //         return i;
        
// // // //     }
// // // //     return -1;
// // // // }
// // // // int binarysearch(int * ptr,int size,int key)
// // // // {
// // // // int low=0;
// // // // int high=size-1;
// // // // while(low<=high)
// // // // {
// // // //     int mid=(low+high)/2;
// // // //     if(ptr[mid]==key)
// // // //     return mid;
// // // //     else if(ptr[mid]>key)
// // // //     high=mid-1;
// // // //     else if(ptr[mid]<key)
// // // //     low=mid+1;
// // // // }
// // // // return -1;
// // // // }
// // // // int binarysearchrec(int * ptr,int low,int high,int key)
// // // // {  if(low<=high){
// // // //     int mid=(low+high)/2;
// // // //     if(ptr[mid]==key)
// // // //     return mid;
// // // //     else if(ptr[mid]>key)
// // // //     return binarysearchrec(ptr,low,mid-1,key);
// // // //     else if(ptr[mid]<key)
// // // //     return binarysearchrec(ptr,mid+1,high,key);
// // // // }
// // // // else{
// // // //     return -1;
// // // // }
// // // // }
// // // // void bubblesort(int * ptr,int size )
// // // // {
// // // //     for(int i=0;i<size;i++)
// // // //     {
// // // //         for(int j=0;j<size-i-1;j++)
// // // //         {
// // // //             if(ptr[j]>ptr[j+1])
// // // //             {
// // // //                 int temp=ptr[j+1];
// // // //                 ptr[j+1]=ptr[j];
// // // //                 ptr[j]=temp;
// // // //             }
// // // //         }
// // // //     }
// // // // }
// // // // void selectionsort(int * ptr,int size)
// // // // {
// // // //     for(int i=0;i<size;i++)
// // // //     {  int maxindex=0;
// // // //         int flag=-1;
// // // //         for(int j=0;j<size-i;j++)
// // // //         {
// // // //             if(ptr[j]>ptr[maxindex])
// // // //             {
// // // //                 maxindex=j;
// // // //                 flag=1;
// // // //             }
// // // //         }
// // // //         if(flag!=-1)
// // // //         {
// // // //             int temp=ptr[size-i-1];
// // // //             ptr[size-i-1]=ptr[maxindex];
// // // //             ptr[maxindex]=temp;
// // // //         }
// // // //     }
// // // // }
// // // // int main()
// // // // {
// // // // //  int array[]={1,2,3,4,5,6,7,8,9,10};
// // // // //  int size=sizeof(array)/sizeof(array[0]);
// // // // //  cout<<endl;
// // // // //  int key;
// // // // //  cout<<"Enter the element that you want to find out"<<endl;
// // // // //  cin>>key;
// // // // //  int resultlinear=linearsearch(array,size,key);
// // // // //  if(resultlinear==-1)
// // // // //  cout<<"Element not found"<<endl;
// // // // //  else
// // // // //  cout<<"Element found at index"<<resultlinear;
// // // // // int array[]={1,2,3,4,5,6,7,8,9,10};
// // // // // int size=sizeof(array)/sizeof(array[0]);
// // // // // int key;
// // // // // cout<<"Enter the element that you want to find out"<<endl;
// // // // // cin>>key;
// // // // // int result=binarysearch(array,size,key);
// // // // // if(result==-1)
// // // // // cout<<"Element not found";
// // // // // else
// // // // // cout<<"Element found at index->"<<result;
// // // // // int array[]={1,2,3,4,5,6,7,8,9,10};
// // // // // int size =sizeof(array)/sizeof(array[0]);
// // // // // cout<<"Enter the element that you want to find"<<endl;
// // // // // int key;
// // // // // cin>>key;
// // // // // int result=binarysearchrec(array,0,size-1,key);
// // // // // if(result==-1)
// // // // // cout<<"Element not found"<<endl;
// // // // // else
// // // // // cout<<"Element found at index"<<result;
// // // // // int arr[]={10,9,8,7,6,5,4,3,2,1};
// // // // // int size=sizeof(arr)/sizeof(arr[0]);
// // // // // cout<<endl;
// // // // // printarray(arr,size);
// // // // // bubblesort(arr,size);
// // // // // cout<<endl;
// // // // // printarray(arr,size); 
// // // // int arr[]={10,9,8,7,6,5,4,3,2,1};
// // // // int size=sizeof(arr)/sizeof(arr[0]);
// // // // printarray(arr,size);
// // // // cout<<endl;
// // // // selectionsort(arr,size);
// // // // printarray(arr,size);
// // // // return 0;
// // // // }
// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main()
// // // {
// // //     pair<int,int> s={1,2};
// // //     cout<<s.first<<" "<<s.second;
// // //     cout<<endl;
// // //     pair <int,pair<int,int>>p={1,{2,3}};
// // //     cout<<p.first<<" "<<p.second.first<<" "<<p.second.second;
// // // pair<pair<int,int>,pair<int,int>> d={{1,2},{3,4}};
// // // cout<<endl;
// // // cout<<d.first.first<<" "<<d.first.second<<" "<<d.second.first<<" "<<d.second.second;
// // // } 
// // #include<bits/stdc++.h>
// // using namespace std;
// // int main()
// // {
// //     pair<int,int> p={1,2};
// //     cout<<p.first<<" "<<p.second;
// //     pair<int,pair<int,int>> d={1,{2,3}};
// //     cout<<endl;
// //     cout<<d.first<<" "<<d.second.first<<" "<<d.second.second;
// //     cout<<endl;
// //     pair<pair<int,int>,pair<int,int>> s={{1,2},{3,4}};
// //     cout<<s.first.first<<" "<<s.first.second<<" "<<s.second.first<<" "<<s.second.second;
// //     cout<<endl;
// // }
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(1);
//     for(int i=0;i<v.size();i++)
//     {
//         cout<<v[i]<< " ";
//     }
// }
#include<bits/srdc++.h>
using namespace std;
int main()
{
    vector<int><int> v
}