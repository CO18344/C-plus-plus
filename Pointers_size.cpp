#include<iostream>
#include<stdio.h>
using namespace std;

// Display size of pointers
void size_pointers(int*p,char*c,float*f,double*d,void*v)
{
    cout<<"\n";
    cout<<sizeof(p)<<" bytes for integer"<<endl;
    cout<<sizeof(c)<<" bytes for char"<<endl;
    cout<<sizeof(f)<<" bytes for float"<<endl;
    cout<<sizeof(d)<<" bytes for double"<<endl;
    cout<<sizeof(v)<<" bytes for void/generic"<<endl;
}

int main()
{

cout<<"Pointers sizes ....";

    int *p=0;
    char *c=0;
    float *f=0;
    double *d=0;
    void *v=0;

size_pointers(p,c,f,d,v); // CALL TO FUNCTION TO DISPLAY SIZE OF ALL TYPES OF POINTERS


getchar();
return 0;

}
