#include<iostream>
using namespace std;
void leaders(int *arr,int len)
{  int *leaderarray=new int[len];
    int flag=1;
    int k=0;
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {   flag=1;
            if(arr[i]<arr[j])
            {
            flag=0;
            break;
            }
        }
        if(flag==1)
        {
        leaderarray[k]=arr[i];
        k++;
        }
    }
    for(int i=0;i<k;i++)
    cout<<leaderarray[i]<<" ";
}

int main()
{
    int arr[]={9,8,7,6,5,4,10,11,1,2,4,3};
    leaders(arr,12);
}