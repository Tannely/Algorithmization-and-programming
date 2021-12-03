#include <iostream>
#include <cstdlib> 
using namespace std;
int main()
{
        int i=0;   
        int* ptr_masA=new int[10];
    for (i=0; i<=5; i++)  {
    	ptr_masA[i] = rand() % 20;
	cout<<"ptr_masA["<<i<<"]="<< ptr_masA[i] <<endl;  
	} 
      delete [] ptr_masA;
      return 0;
}

