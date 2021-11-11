#include <cstdlib>
#include <iostream>
using namespace std;

int tabs = 0; //dlya otstupiv
int amount = 0; // dlya parnoho
int amount_1 = 0; // dlya neparnoho
struct Branch
{
	int Data;// pole danyh
	Branch* RightBranch;
	Branch* LeftBranch; 
	
};

void Add(int aData, Branch*& aBranch)// funktsiya dodavannya elementiv do binarnoho dereva
{
	if (!aBranch)
	{ 
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else 
		if (aBranch->Data > aData)
		{ //Yakshcho vono menshe toho, shcho v tsiy hiltsi - dodamo vlivo
			Add(aData, aBranch->LeftBranch);
		}
		else
		{ // inakshe v pravu hilku
			Add(aData, aBranch->RightBranch);
		};
}

void print(Branch* aBranch) // funktsiya vyvedennya dereva
{
	if (!aBranch) return; //Yakshcho hilky ne isnuye – vykhodymo. Vyvodyty nichoho.
	tabs += 5; //Inakshe zbilshymo lichylnyk rekursyvno vyklykanykh protsedur
    //Yakyy rakhuvatyme vidstupy dlya vyvedennya na ekran
	print(aBranch->LeftBranch); 
	for (int i = 0; i < tabs; i++) cout << " "; 
	cout << aBranch->Data << endl; 

	print(aBranch->RightBranch);
	tabs-= 5; //pislya zmenshennya kil?kosti vidstupiv
	return;
}

void pr_obh(Branch*& aBranch) // pryamyy obkhid
{
	if (NULL == aBranch)    return;    //Yakshcho dereva nemaye, vykhodymo

	cout << aBranch->Data << endl; //vuzol dereva
	pr_obh(aBranch->LeftBranch); //obkhid livoho piddereva
	pr_obh(aBranch->RightBranch); //obkhid pravoho piddereva 
}

void gor_obh(Branch*& aBranch) //horyzontalnyy(symetrychnyy) obkhid
{
	if (NULL == aBranch)    return;    //Yakshcho dereva nemaye, vykhodymo

	gor_obh(aBranch->LeftBranch); //obkhid livoho piddereva
	cout << aBranch->Data << endl; //vuzol dereva
	gor_obh(aBranch->RightBranch);  //obkhid pravoho piddereva
}

int par(Branch*& aBranch) // dlya parnykh elementiv
{
	if (NULL == aBranch)    return 0;    //Yakshcho dereva nemaye, vykhodymo

	if (aBranch->Data % 2 == 0)
	{
		amount++;
	}
	par(aBranch->LeftBranch);   
	par(aBranch->RightBranch); 
	return amount;
}
int ne_par(Branch*& aBranch)   // dlya neparnykh elementiv
{
	if (NULL == aBranch)    return 0;   

	if (aBranch->Data % 2 == 1 )
	{   
	    
		amount_1++;
	}
	
	ne_par(aBranch->LeftBranch); 
	ne_par(aBranch->RightBranch); 
	return amount_1;
}

int summa(Branch*& aBranch) // suma vsikh elementiv
{
	int sum = 0;
	if (aBranch != NULL) {
		sum += summa(aBranch->LeftBranch);
		sum += aBranch->Data;
		sum += summa(aBranch->RightBranch);
	}
	return sum;
}
void add_elem(int aData, Branch*& aBranch) // dodavannya novoho elementu
{
	if (!aBranch)
	{
		aBranch = new Branch;
		aBranch->Data = aData;
		aBranch->LeftBranch = 0;
		aBranch->RightBranch = 0;
		return;
	}
	else
	{
		if (aData < aBranch->Data) {
			add_elem(aData, aBranch->LeftBranch);
		}
		else if (aData > aBranch->Data) {
			add_elem(aData, aBranch->RightBranch);
		}
	}
}

void FreeTree(Branch* aBranch) // zvilnennya pamyati
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

Branch* del_elem(Branch*& aBranch, int aData) // vydalennya novoho elementu
{
	if (aBranch == NULL)
		return aBranch;

	if (aData == aBranch->Data) {

		Branch* tmp;
		if (aBranch->RightBranch == NULL)
			tmp = aBranch->LeftBranch;
		else {

			Branch* ptr = aBranch->RightBranch;
			if (ptr->LeftBranch == NULL) {
				ptr->LeftBranch = aBranch->LeftBranch;
				tmp = ptr;
			}
			else {

				Branch* pmin = ptr->LeftBranch;
				while (pmin->LeftBranch != NULL) {
					ptr = pmin;
					pmin = ptr->LeftBranch;
				}
				ptr->LeftBranch = pmin->RightBranch;
				pmin->LeftBranch = aBranch->LeftBranch;
				pmin->RightBranch = aBranch->RightBranch;
				tmp = pmin;
			}
		}

		delete aBranch;
		return tmp;
	}
	else if (aData < aBranch->Data)
		aBranch->LeftBranch = del_elem(aBranch->LeftBranch, aData);
	else
		aBranch->RightBranch = del_elem(aBranch->RightBranch, aData);
	return aBranch;
}

int main()
{
	setlocale(LC_ALL, "ukr");
	Branch* Root = 0;
	int num;
	int element;

	cout << "Vvedit kilkist elementiv binarnoho dereva: ";
	cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		Add(rand() % 50, Root); // zapovnennya tsilymy chyslamy vid 0 do 50
		//Add(1, Root);
		
	}
	cout << "Vyvid binarnoho dereva: " << endl;
	print(Root);
	cout << endl;

	cout << "Pryamyy obkhid binarnoho dereva: " << endl;
	pr_obh(Root);
	cout << endl;
	
	cout << "Horyzontalnyy(symetrychnyy) obkhid binarnoho dereva: " << endl;
	gor_obh(Root);
	cout << endl;

	cout << "Dodavannya novoho elementu v binarne derevo:" << endl;
	cout << "Vvedit elemet: ";
	cin >> element;
	add_elem(element, Root);
	//Add(element, Root);

	cout << "Vyvid binarnoho dereva: " << endl;
	print(Root);
	cout << endl;

	cout << "Vydalennya novoho elementu z binarnoho dereva:" << endl;
	cout << "Vvedit elemet: ";
	cin >> element;
	del_elem(Root, element);

	cout << "Vyvid binarnoho dereva:" << endl;
	print(Root);
	cout << endl;

	cout << "Kilkist parnykh elementiv: ";
	cout << par(Root) << endl;
    cout << endl;
    
    cout << "Kilkist neparnykh elementiv: ";
	cout << ne_par(Root) << endl;
    cout << endl;
    
	cout << "Suma vsikh elementiv binarnoho dereva: ";
	cout << summa(Root) << endl;
    cout << endl;
    
	FreeTree(Root);
	cout << "Zvilnennya dynamichnoyi pamyati..." << endl;

	return 0;
}
