#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
        int b,a;
        cout<<"Enter First Number(A)\n";
        cin>>a;
        cout<<"Enter Second Number(B)\n";
        cin>>b;
        cout<<"Before Swapping the Value : \n"<<"A = "<<a<<"\n"<<"B = "<<b<<"\n";
        swap(&a,&b);
        cout<<"\n (Outside Function) After Swapping Value : \n"<<"A = "<<a<<"\n"<<"B = "<<b<<"\n";
}
void swap(int *a,int *b)
{
        int c;
        c=*a;
        *a=*b;
        *b=c;
        cout<<"\n (Inside Function) After Swapping Value : \n"<<"A = "<<*a<<"\n"<<"B = "<<*b;
}
