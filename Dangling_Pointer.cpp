#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;

char * getstr()
{
    char str[20];
    gets(str); // Any string entered by the user
    return str;
}

int main()
{

cout<<"\nDangling pointer...."<<endl;
    char *ptr;
    ptr=getstr(); // ptr is storing the address of local variable
    printf("%s\n",ptr); // Value may or may not be printed
    getstr();
    printf("%s",ptr); // This time ptr content would have been overwritten
// ptr is dangling pointer;


delete ptr;
return 0;

}
