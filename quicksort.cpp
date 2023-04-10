#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int partition(int a[],int left,int right)
{
    int count=0;
    for(int i=left+1;i<=right;i++)
    if(a[left]>a[i])
    count++;
    int pivotIndex=left+count;
    int pivotElement=a[pivotIndex];
    swap(a[left],a[pivotIndex]);
    int i=left,j=right;
    while(i<pivotIndex&&j>pivotIndex)
    {
        while(a[i]<pivotElement)
        {
            i++;
        }
        while(a[j]>pivotElement)
        {
            j--;
        }
        swap(a[i],a[j]);
    }




    
}
void quickSort(int arr[],int start,int end)
{
    if(start>=end)
    return;
    else
    {
        int p=partition(arr,start,end);
        quickSort(arr,start,p-1);
        quickSort(arr,p+1,end);
        
    }
}

int main()
{
    int array[]={1,3,4,34,65,342,64,2};
    cout<<"Array: ";
    for(int i=0;i<sizeof(array)/sizeof(int);i++)
    cout<<array[i]<<" ";
    quickSort(array,0,sizeof(array)/sizeof(int)-1);
    cout<<endl;
    cout<<"Sorted Array:";
    for(int i=0;i<sizeof(array)/sizeof(int);i++)
    cout<<array[i]<<" ";
    return 0;

}