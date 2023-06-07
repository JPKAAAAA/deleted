#include<iostream>
using namespace std;
char pairStar(char input[100])
{   
   int i=0;
   while(input[i]!=input[i+1]&&input[i+1]!='\0')
   {
        i++;
   } 
   int j=i+1;
   while(input[j]!='\0')
   {
    j++;
   }

   for(;j>i+1;j--)
   {
    input[j]=input[j-1];
   }
   input[j]='*';
   cout<<input<<" ";
   if(input[i]!='\0')
   {
    pairStar(input);
   }
   
}

int main()
{
char str[]="this is an apple";
pairStar(str);
cout<<str;
return 0;   
}
