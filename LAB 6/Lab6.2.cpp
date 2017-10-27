#include <iostream>
using namespace std;
void que1(int a, int b, int *p){
b=*p;
cout<<"a="<<a<<", b="<<b<<", p="<<p<<"\n";
}

void que2(int a, int b, int *p){
cout<<"a="<<a<<", b="<<b<<", p="<<p<<"\n";
}

void que3(int a, int b, int *p){
p=&b;
cout<<"a="<<a<<", b="<<b<<", p="<<p<<"\n";
}

int main(){
int a,b;
a=3;
b=7;
int *p=&a;
que1(a,b,p);
que2(2,3,p);
que3(a,b,p);
return 0;
}
