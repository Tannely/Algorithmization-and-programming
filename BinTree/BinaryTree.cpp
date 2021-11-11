#include <cstdlib>
#include <iostream>
using namespace std;

int tabs = 0; //дл€ отступ≥в
int amount = 0; // дл€ парного
int amount_1 = 1; // дл€ непарного
struct Branch
{
	int Data; // поле даник
	Branch* RightBranch;
	Branch* LeftBranch; 
	
};

void Add(int aData, Branch*& aBranch)// функц≥€ додаванн€ елемент≥в до б≥нарного дерева
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
		{ //якщо воно менше того, що в ц≥й г≥лц≥ - додамо вл≥во
			Add(aData, aBranch->LeftBranch);
		}
		else
		{ // ≥накше в праву г≥лку
			Add(aData, aBranch->RightBranch);
		};
}

void print(Branch* aBranch) // функц≥€ виведенн€ дерева
{
	if (!aBranch) return; //якщо г≥лки не ≥снуЇ Ц виходимо. ¬иводити н≥чого.
	tabs += 5; //≤накше зб≥льшимо л≥чильник рекурсивно викликаних процедур
	//який рахуватиме в≥дступи дл€ виведенн€ на екран
	print(aBranch->LeftBranch); 
	for (int i = 0; i < tabs; i++) cout << " "; 
	cout << aBranch->Data << endl; 

	print(aBranch->RightBranch);
	tabs-= 5; //п≥сл€ зменшенн€ к≥лькост≥ в≥дступ≥в
	return;
}

void pr_obh(Branch*& aBranch) // пр€мий обх≥д
{
	if (NULL == aBranch)    return;    //якщо дерева немаЇ, виходимо

	cout << aBranch->Data << endl; //вузол дерева
	pr_obh(aBranch->LeftBranch); //обх≥д л≥вого п≥ддерева 
	pr_obh(aBranch->RightBranch); //обх≥д правого п≥ддерева 
}

void gor_obh(Branch*& aBranch) // горизонтальний(симетричний) обх≥д
{
	if (NULL == aBranch)    return;    //якщо дерева немаЇ, виходимо

	gor_obh(aBranch->LeftBranch); //обх≥д л≥вого п≥ддерева 
	cout << aBranch->Data << endl; //вузол дерева
	gor_obh(aBranch->RightBranch); //обх≥д правого п≥ддерева 
}

int par(Branch*& aBranch) // дл€ парних елемент≥в
{
	if (NULL == aBranch)    return 0;    //якщо дерева немаЇ, виходимо

	if (aBranch->Data % 2 == 0)
	{
		amount++;
	}
	par(aBranch->LeftBranch);   
	par(aBranch->RightBranch); 
	return amount;
}
int ne_par(Branch*& aBranch)   // дл€ непарних елемент≥в
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

int summa(Branch*& aBranch) // сума вс≥х елемент≥в
{
	int sum = 0;
	if (aBranch != NULL) {
		sum += summa(aBranch->LeftBranch);
		sum += aBranch->Data;
		sum += summa(aBranch->RightBranch);
	}
	return sum;
}
void add_elem(int aData, Branch*& aBranch) // додаванн€ нового елементу
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

void FreeTree(Branch* aBranch) // зв≥льненн€ пам'€т≥
{
	if (!aBranch) return;
	FreeTree(aBranch->LeftBranch);
	FreeTree(aBranch->RightBranch);
	delete aBranch;
	return;
}

Branch* del_elem(Branch*& aBranch, int aData) // видаленн€ нового елементу
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

	cout << "¬ведiть кiлькiсть елементiв бiнарного дерева: ";
	cin >> num;
	cout << endl;

	for (int i = 0; i < num; i++)
	{
		Add(rand() % 50, Root); // заповненн€ ц≥лими числами в≥д 0 до 50
		
	}
	cout << "¬ивiд бiнарного дерева: " << endl;
	print(Root);
	cout << endl;

	cout << "ѕр€мий обхiд бiнарного дерева: " << endl;
	pr_obh(Root);
	cout << endl;
	
	cout << "√оризонтальний(симетричний) обхiд бiнарного дерева: " << endl;
	gor_obh(Root);
	cout << endl;

	cout << "ƒодаванн€ елемента в бiнарне дерево:" << endl;
	cout << "¬ведiть елемет: ";
	cin >> element;
	add_elem(element, Root);

	cout << "¬ивiд бiнарного дерева: " << endl;
	print(Root);
	cout << endl;

	cout << "¬идаленн€ елементу з бiнарного дерева:" << endl;
	cout << "¬ведiть елемет: ";
	cin >> element;
	del_elem(Root, element);

	cout << "¬ивiд бiнарного дерева: " << endl;
	print(Root);
	cout << endl;

	cout << " iлькiсть парних елементiв: ";
	cout << par(Root) << endl;
    cout << endl;
    
    cout << " iлькiсть непарних елементiв: ";
	cout << ne_par(Root) << endl;
    cout << endl;
    
	cout << "—ума всiх елементiв бiнарного дерева: ";
	cout << summa(Root) << endl;
    cout << endl;
    
	FreeTree(Root);
	cout << "«вiльненн€ динамiчноњ пам'€тi..." << endl;

	return 0;
}
