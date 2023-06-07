#include<iostream>
using namespace std;
int main()
{
    char str[]="suraj jha is a boy";
    char str1[100];
    for(int i=0;i<8;i++)
    str1[i]=str[i+6];
    for(int i=0;i<8;i++)
    cout<<str1[i];
    cout<<str1;
    return 0;
}