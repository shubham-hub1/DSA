#include<iostream>
using namespace std;
void printarray(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<*(ptr+i)<<" ";
    
}
void printarray1(int * ptr,int size)
{
    for(int i=0;i<size;i++)
    cout<<ptr[i]<<" ";

}
void printarray2(int arr[],int size)
{
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
}
int max_array(int arr[],int size)
{
    int maxvalue=INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxvalue)
        maxvalue=arr[i];
    }
    return maxvalue;
}
int second_max_array(int arr[],int size)
{
    int secondmax=INT_MIN;
    int maxvalue=max_array(arr,size);
    for(int i=0;i<size;i++)
    {
        if(arr[i]>secondmax && arr[i]<maxvalue)
        secondmax=arr[i];
    }
    return secondmax;
}
int third_max_array(int arr[],int size)
{
    int thirdmax=INT_MIN;
    int secondvalue=second_max_array(arr,size);
    for(int i=0;i<size;i++)
    {
        if(arr[i]>thirdmax && arr[i]< secondvalue)
        thirdmax=arr[i];
    }
    return thirdmax;
}
void swap(int arr[],int source,int target)
{
    int temp=arr[target];
    arr[target]=arr[source];
    arr[source]=temp;
}
void bubblesort(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    { bool flag=false;
        for(int j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
            swap(arr,j,j+1);
            flag=true;
            }
        }
        if(flag==true)
        continue;
        else
        break;
    }
}
void selectionsort(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        int maxindex=0;
        for(int j=1;j<size-i;j++)
        {
            if(arr[maxindex]<arr[j])
            maxindex=j;
        }
        swap(arr,maxindex,size-i-1);
    }

}
void merge(int arr[],int low,int mid,int high)
{
    int temp[(high-low)+1];
    int count=0;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high)
    {
        if(arr[i]>=arr[j])
        temp[count++]=arr[j++];
        else
        temp[count++]=arr[i++];
    }
    while(i<=mid)
    temp[count++]=arr[i++];
    while(j<=high)
    temp[count++]=arr[j++];
    for(int k=low;k<=high;k++)
    {
        arr[k]=temp[k-low];
    }
} 
void mergesort(int arr[],int low,int high)
{
    if(low==high)
    return;
    else{
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main()
{  //Driver code
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"The size of the array is->"<<size;
    cout<<endl;
    //Printing the array
    printarray(arr,size);
    cout<<endl;
    printarray1(arr,size);
    cout<<endl;
    printarray2(arr,size);
    cout<<endl;
    int maxvalue = max_array(arr,size);
    cout<<"The max of the array is->"<<maxvalue;
    cout<<endl;
    int secondmax= second_max_array(arr,size);
    if(secondmax==INT_MIN)
    cout<<"There is no second max";
    else
    cout<<"The second max of the array->"<<secondmax;
    cout<<endl;
    int thirdmax=third_max_array(arr,size);
    if(thirdmax==INT_MIN)
    cout<<"There is no third max";
    else
    cout<<"The third max of the array->"<<thirdmax;
    cout<<endl;
    int arr2[]={10,9,8,7,6,5,4,3,2,1};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printarray2(arr2,size2);
    cout<<endl;
    bubblesort(arr2,size2);
    printarray2(arr2,size2);
    cout<<endl;
    int arr3[]={10,9,8,7,6,5,4,3,2,1};
    int size3=sizeof(arr3)/sizeof(arr3[0]);
    printarray2(arr3,size3);
    cout<<endl;
    selectionsort(arr3,size3);
    printarray2(arr3,size3);
    cout<<endl;
    int arr4[]={10,9,8,7,6,5,4,3,2,1};
    int size4=sizeof(arr4)/sizeof(arr4[0]);
    printarray2(arr4,size4);
    cout<<endl;
    mergesort(arr4,0,size4-1);
    printarray2(arr4,size4);
    cout<<endl;

}