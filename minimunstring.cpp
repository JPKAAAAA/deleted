#include<iostream>
#include<cstring>
using namespace std;
void minimumString(char str1[],char str2[])
{
    int n=strlen(str1);
    int i=0,j=0,count=0,prvcount=10;
    while(i<n)
    {   j=i;
        while(j<n&&str1[j]!=' ')
        {
            count++;
            j++;
        }
        if(count<prvcount)
        {   int k;
            prvcount=count;
            for(k=0;k<count;k++)
            str2[k]=str1[k+i];
            str2[k]='\0';
        }
        j++;
        i=j;
        count=0;
    }
    cout<<str2;
}

int main()
{
    system("cls");
    char str1[]="donald trump ko 136 saal ki saza hue";
    char str2[10];
    minimumString(str1,str2);
    return 0;
}