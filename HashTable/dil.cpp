#include <cstdlib>
#include <iostream>
#define SIZE 50
using namespace std;
int HashFunction(int k)
{
return (k%SIZE);// ����� �� ����� ���-����
}
int main()
{

int key;
cout<<"Key > "; 
cin>>key;
cout<<"HashFunction("<<key<<")="<<HashFunction(key)<<endl;
system("pause>>void");
}
