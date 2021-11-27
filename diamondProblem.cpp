
//Multipath Inheritance
#include<bits/stdc++.h>
using namespace std;


class A
{
    public:
    int a=10;
    A(){
        cout<<"A :"<<a<<endl;
   }

};

class B:virtual public A
{
    public:
    int b=20;
    B(){
        cout<<"B :"<<b<<endl;
    }

};

class C:virtual public A
{
    public:
    int c=30;
    C(){
        cout<<"C :"<<c<<endl;
    
    }
};



class D:public B,public C
{
    public:
    int d=40;
    D(){
        cout<<"D :"<<d<<endl;
   }

};


int main() {
	// your code goes here
    D d;
    return 0;
}
