#include <iostream>
using namespace std;

class ZooAnimal  
   {
    private:
      char *name;
      int cageNumber;
      int weightDate;
      int weight;
    public:
      void Destroy (); 
      char* reptName ();
      void create(char *str, int a1, int a2, int a3);
      int daysSinceLastWeighed (int today);
   };
   
   void ZooAnimal::Destroy ()
   {    
    delete [] name;
   }

   char* ZooAnimal::reptName ()
   {
    return name;
   }
   
  {
    int startday, thisday;
    thisday = today/100*30 + today - today/100*100;
    startday = weightDate/100*30 + weightDate - weightDate/100*100;
    if (thisday < startday) 
        thisday += 360;
    return (thisday-startday);
   }
