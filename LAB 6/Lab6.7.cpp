#include <iostream>
using namespace std;

/*Program to Implement snippets for the following functions: 
Strcpy
Strcat
Strlen
Strcmp
*/

int Strlen(char ch[])
{
   int i;
   for(i=0;ch[i]!='\0';i++);
   return i;
}

void Strcat(char st1[],char st2[])
{
   int x=0;
   for(;st1[x]!='\0';x++);
   for(int y=0;st2[y]!='\0';y++,x++)
   {
   st1[x]=st2[y];
   }
   st1[x]='\0';
   cout<<"Concatenated String is: "<<st1<<"\n";
}
int Strcmp(char st1[], char st2[])
{
  int t=0;
  while(st1[t]==st2[t])
  {
  if(st1[t]=='\0' || st2[t]=='\0')
   break;
  t++;
  }
  if(st1[t]=='\0' && st2[t]=='\0')
   return 0;
  else
   return 1;
}

int main()
{
  cout<<"Program to Implement snippets for the following functions: \n Strcpy\n Strcat\n Strlen\n Strcmp\n";
  char str1[20], str2[20];
  cout<<"Enter the first String:\n";
  cin>>str1;
  cout<<"Enter the second String:\n";
  cin>>str2;
  int flag=Strcmp(str1,str2);
  cout<<"Comparing the strings we find:\n";
  if(flag==0)
   cout<<"Both the strings are equal\n";
  else
   cout<<"Both the strings are unequal\n";
  cout<<"The length of String1 and String2 respectively is: "<<Strlen(str1)<<" and "<<Strlen(str2)<<"\n";
  Strcat(str1,str2);
  
  return 0;
}
