#include <iostream>

#include <cstdlib>

#include <vector> // ��������� ��������

using namespace std;

int main(){
	int i = 0;     //��������� ����
	int* ptr_masA = new int[50];   // ��������� ��������� ����� ���� int
	int* ptr_masB = new int[50];   // ��������� ��������� ����� ���� int
	cout<<endl<<"ptr_masA ="<<endl;// ���� �� �����
	for (i=0; i<=49; i++)    //���� for ��� 50 �������� ������
		{ptr_masA[i] = rand() % 301;    // ����� ��������� ������. �� 0 �� 300
		if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masA[i] <<endl;} //���-�� �� 25
              else { cout <<" "<< ptr_masA[i]; }
	
		}
	cout<<endl<<"ptr_masB ="<<endl;// ���� �� �����
	for (i=0; i<=49; i++)      //���� for ��� 50 �������� ������
		{ptr_masB[i] = rand() % 301;        // ����� ��������� ������. �� 0 �� 300
		if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masB[i] <<endl;} // ���-�� �� 25
              else { cout <<" "<< ptr_masB[i]; }
	
	    }	
	
	
	int C[50];// ��������� ����� 50 �������� ���� int
	
	cout<<endl<<"ptr_masC ="<<endl;// ���� �� �����
	for (i=0; i<=49; i++)//���� for ��� 50 �������� ������
		{C[i] = {ptr_masA[i] + ptr_masB[i]};  // ����������� ���� �������
			if ((i%25) == 0 && (i!=0)) { cout <<" "<< C[i] <<endl;} // ���-�� �� 25
                 else { cout <<" "<< C[i]; }
	    }	
	delete [] ptr_masA;
	delete [] ptr_masB;// ��� ��������� ����� , ��� ������� �������� �� �����
	
	int n = 50;
	ptr_masA = new int[n];  // ��������� ��������� ����� ���� int
	ptr_masB = new int[n];  // ��������� ��������� ����� ���� int
	
	cout<<endl<<"ptr_masA ="<<endl;// ���� �� �����
	for (i=0; i<=(n-1); i++)//���� for ��� 50 �������� ������
		{ptr_masA[i] = rand() % 501;// ����� ��������� ������. �� 0 �� 500
		if ((i%22) == 0 && (i!=0)) { cout <<" "<< ptr_masA[i] <<endl;} //���-�� �� 25
              else { cout <<" "<< ptr_masA[i]; }
		
	}
	cout<<endl<<"ptr_masB ="<<endl;// ���� �� �����
	for (i=0; i<=(n-1); i++)//���� for ��� 50 �������� ������
		{ptr_masB[i] = rand() % 501; // ����� ��������� ������. �� 0 �� 500
			if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masB[i] <<endl;} // ���-�� �� 25
              else { cout <<" "<< ptr_masB[i]; }
	
	
	}
	
	cout<<endl<<"ptr_masC1 ="<<endl;// ���� �� �����
	int* ptr_masC1 = new int[n]; // ��������� ��������� ����� ���� int
	for (i=0; i<=(n-1); i++)      //���� for 
		{ptr_masC1[i] = {ptr_masA[i] + ptr_masB[i]};// ����������� ���� �������
			if ((i%25) == 0 && (i!=0)) { cout <<" "<< ptr_masC1[i] <<endl;} // ���-�� �� 25
                 else { cout <<" "<< ptr_masC1[i]; }
		
	} 	
	
	vector <int> vecc(50); // ������ �� 50 �������� ���� int
	
	cout<<endl<<"VectorC ="<<endl;// ���� �� �����
	for (i=0; i<=49; i++) //���� for 
		{vecc[i] = {C[i] + ptr_masC1[i]};// �������� ���� ������� 2 ������ � �� �1
		if ((i%25) == 0 && (i!=0)) { cout <<" "<< vecc[i]  <<endl;} // ���-�� �� 25
              else { cout <<" "<< vecc[i] ; }
		
	}
   	
	delete [] ptr_masA;
	delete [] ptr_masB;// ��� ��������� ����� , ��� ������� �������� �� �����
	
	return 0;
}
