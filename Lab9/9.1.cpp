#include <iostream>
#include <math.h>                                // ��������� ��������
using namespace std;

long int Nfact(int n){				            //���������� ������� ���������� ���������
    long int N=n; 						        //��������� ����
    
	if (n<2) return (n=1);     
    
	return (N*Nfact( n-1));}

int main(){
	int n, N;									//��������� ����
	long int sum;
	for (n = 1; n <= 10; n++){				   //���� for ��� 10 ����� � �����������
		N = Nfact(n);
		sum += N;
		cout << "n("<<n<<")! = " << N << endl;//  ���� ��������� �� �����
	}
	
	cout << "sum = " << sum << endl;         //���� ���� ���������(10)
return 0;
}
