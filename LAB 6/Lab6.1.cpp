#include <iostream>
using namespace std;
int main(){
    int rehan1;
    double rehan2;
    char rehan3;
    float rehan4;

    int *rp1=&rehan1;
    double *rp2=&rehan2;
    char *rp3=&rehan3;
    float *rp4;
    rp4=&rehan4;
    cout<<"size of int rehan1 ="<<sizeof(rehan1)<<endl;
    cout<<"size of rp1= "<<sizeof(rp1)<<endl;
    cout<<"rp1 is at ="<<rp1<<endl;

    cout<<"size of double rehan2 ="<<sizeof(rehan2)<<endl;
    cout<<"size of rp2= "<<sizeof(rp2)<<endl;
    cout<<"rp2 is at ="<<rp2<<endl;

    cout<<"size of char rehan3 ="<<sizeof(rehan3)<<endl;
    cout<<"size of rp3= "<<sizeof(rp3)<<endl;
    cout<<"rp3 is at ="<<(void*)rp3<<endl;

    cout<<"size of float rehan4 ="<<sizeof(rehan4)<<endl;
    cout<<"size of rp4= "<<sizeof(rp4)<<endl;
    cout<<"rp4 is at ="<<rp4<<endl;

}