#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int i, n;                                   // ��������� ����
	int col = 0;                                // ��������� ����
	int a[30];                                  // ������� ����� � 30 �������� ���� int
	int*ptra; 
	int b[50];                                  // ������� ����� � 50 �������� ���� int
	int*ptrb;
	
	cout << " mas a: " << endl;                //�������� � �������
	for (i = 0;i <= 29;i++){                    //���� for
		a[i] = rand() % 101;                    // ����� ��������� ������. ���������� �� 0 �� 100
		if (i == 0){                            // ����� �������� ��������
			ptra = a;
		}
		if ((i%10) == 0 && (i!=0)){            // ���-�� �� 10 ����
			cout << " " << *ptra << endl;
		}
		else {
			cout << " " << *ptra;
			ptra++;
		}
	}
	
	cout << endl << " mas b: " << endl;      //�������� � �������
	for (i = 0; i <= 49; i++){               //���� for
		b[i] = rand() % 101;                 // ����� ��������� ������. ���������� �� 0 �� 100
		if (i == 0) {                        // ����� �������� ��������
			ptrb = b;
		}
		if ((i%10) == 0 && (i!=0)){          // ���-�� �� 10 ����
			cout << " " << *ptrb << endl;  
		}
		else {
			cout << " " << *ptrb;            //�������� � �������
			ptrb++;
		}
	}
	
	ptra = a;                                //���������� �� �������
	col = 0;
	cout << endl << " same elems: ";        //�������� � �������
	for (i = 0; i <= 29; i++){              //���� for
		ptrb = b;                           //���������� �� �������
		for (n = 0; n <= 49; n++){          //���� for
			if (*ptra == *ptrb){
				col++;
				cout << endl << *ptra << " - " << *ptrb; //�������� � �������
			}
			ptrb++;
		}
		ptra++;
	}

	cout << endl << " same elems number = " << col << endl;          //�������� � �������
	cout << " mas s: " << endl;                                    //�������� � �������
	for (i = 0; i <= 12; i++){                                        //���� for
		int mas [13] = {67, 51, 51, 63, 24, 24, 24, 71, 71, 71, 52, 99, 99}; // ��������� �����
		cout << " " << mas[i];                                 //�������� � �������
	}
 
	return 0;
}
