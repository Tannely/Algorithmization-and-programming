#include <iostream>

#include <stdlib.h>

#include <cstring>

using namespace std;

struct Student // Student – це є новий ТИП даних, метадані.

{ char Name[20] ;

int mark; // певна інформативна частина

};

int main()

{ int n=0,i=0,n1;

cout<<"col student =";

cin>>n;

Student mas[n];

char Name1[20];

int mark1;

for (i=0;i<n; i++)

{ cout<<"Student Name ";

cin>> mas[i].Name;

cout<< " Mark=";

cin>> mas[i].mark;

cout<<"Student Name="<< mas[i].Name <<" Mark="<< mas[i].mark << endl;

}
 
    
       
   if( mark1  == 5) {
       mark1 ++;
    cout <<endl << "Mark is 5: " << mas[i].Name << endl;
        }
      
    

 


for (int j=0; j<(n-1); j++ ){

for (i=0; i<(n-1); i++ )

{ if (strcmp(mas[i].Name, mas[i+1].Name) > 0) {

strcpy(Name1, mas[i].Name);

mark1= mas[i].mark;

strcpy(mas[i].Name, mas[i+1].Name);

mas[i].mark= mas[i+1].mark;

strcpy( mas[i+1].Name,Name1);

mas[i+1].mark= mark1;

}}}

//print

for (i=0; i<n; i++ )

{ cout<< mas[i].Name<<" "<< mas[i].mark<<endl;

}

return 0;

}

