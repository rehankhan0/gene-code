#include <iostream>
using namespace std;

int pow(int c,int f){ 
	if(f==1){return c;
	}
	if(c==1){return 1;
	}
	else{return (c*pow(c,(f-1)));
	}
}

int main() 
{int b,e,p;
   cout<<"Enter base ";
   cin>>b;
   cout<<"Enter exponent ";
   cin>>e;
   p=pow(b,e);
   cout<<"the answer is "<<p;
    return 0;
}
