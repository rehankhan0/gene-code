#include<iostream>
using namespace std;
void print(int num)
{
    char range_1[20][15] = {"zero", "one", "two", "three","four","five","six","seven",
    "eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen",
    "eighteen","nineteen"};
    char range_2[10][10]= {"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy",
    "eighty","ninety"};
    if(num<0)
    {
        cout<<"minus ";
        print(-num);
    }
    else if(num>=1000)
    {
        print(num/1000);
        cout<<" thousand";
        if(num % 1000)
        {
            if(num % 1000 < 100)
            {
                cout << " and";
            }
            cout << " " ;
            print(num % 1000);
        }
    }
    else if(num >= 100)
    {
        print(num / 100);
        cout<<" hundred";
        if(num % 100)
        {
            cout << " and ";
            print (num % 100);
        }
    }
    else if(num >= 20)
    {
        cout << range_2[num / 10];
        if(num % 10)
        {
            cout<<" ";
            print(num % 10);
        }
    }
    else
    {
        cout<<range_1[num];
    }
}

int main()
{
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    print(num);
}
