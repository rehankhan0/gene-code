#include <iostream>
using namespace std;
int printsumar(int thearray[], int sizeofarray);
int main(){
	int sizeofarray;
	
	int i;
	cout<<"how many numbers you wanna add ?"<<endl;
	cin>>sizeofarray;
	int thearray[sizeofarray];
	int s;
	cout<<"Inter the digits you wanna add.... "<<endl;
	for (int i = 0; i < sizeofarray; ++i)
	{
		    cin >> thearray[i];
	}
	s=printsumar(thearray,sizeofarray);
	cout<<s;
}
int printsumar(int thearray[], int sizeofarray){
	int sum=0;
	int x;

	for (int x=0; x<sizeofarray;x++){
		sum+= thearray[x];
	
	}
	return sum;
}


