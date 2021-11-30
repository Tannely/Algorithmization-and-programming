#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
int main()
{   int i,j;
    int n=6;
    int mas[6]; 
    cout<<"Mas"<<endl;
     for (i= 0;i <= (n-1); i++)
    { mas[i]= rand() % 20;
      cout <<" "<< mas[i]<<endl;
       
    }
    
    int temp = 0;    
    for (i= 0;i <= (n-1); i++){
                for (j= 0; j<= (n-2-i); j++) {
                        if (mas[j] > mas[j+1]) {
         temp = mas[j+1] ;
         mas[j+1] = mas[j] ;
         mas[j] = temp; // ξαμ³ν
      }} // buble
   }   
   cout <<endl<< "Bubble mas:"<<endl;

     for(i= 0;i <= (n-1); i++)
    {   
       cout <<" "<< mas[i]<<endl;
             
    }
    
    ofstream fout("file.txt");
    for(i= 0;i <= (n-1); i++){
    fout<<" "<<mas[i];
	}
	fout.close();
	system("pause");
    
return 0;
}
