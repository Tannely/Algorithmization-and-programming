#include <iostream>
#include <string>
#include <cstdlib> 
#define KOL_ELEM 10 
using namespace std;
class Ball{
	string _firm;
	int _diametr;
	int _mass;
	string _color;
	public:
		Ball(){     
		cout<<"empty constructor called"<<endl; 
		_firm = "None";
		_color = "None";
		_diametr = 0;
		_mass = 0;
		cout<<"empty constructor finished"<<endl;
		}
		Ball(string firm, int diametr,int mass, string color){
			cout<<"constructor with parametrs called"<<endl;
			_firm = firm;
		_diametr = diametr;
		_mass = mass;
		_color = color;
		cout <<"constructor with parametrs stopped"<<endl;
		}
		~Ball(){
			cout<<"destructor called"<< endl;
		}
		
		int GetDiametr(){
			return(_diametr);
		}
		int GetMass(){
			return(_mass);
		}
		string GetFirm(){
			return(_firm);
		}
		string GetColor(){
			return(_color);
		}
		void SetDiametr(int diametr){
			_diametr = diametr;
		}
		void SetMass(int mass){
			_mass = mass;
		}
		void SetFirm(string firm){
			_firm = firm;
		}
			void SetColor(string color){
			_color = color;
		}
};
Ball* sport[KOL_ELEM]; 
void AddClass() 
{ 
 string firm; 
 int diametr;
 int mass; 
 string color; 
 cout << "Enter parameters for the new object " << endl; 
 cout << "Firm - "; cin >> firm; cout << endl; 
 cout << "Color - "; cin >> color; cout << endl; 
 cout << "Mass - "; cin >> mass; cout << endl; 
 cout << "Diametr - "; cin >> diametr; cout << endl; 
 
 Ball* newClass = new Ball(firm,diametr,mass,color); 
 for (int i = 0; i < KOL_ELEM; i++) 
 { 
  if ((sport[i] != NULL) && (i == KOL_ELEM - 1)) 
  { 
   int whatElem; 
   int vibor; 
   cout << "The array is already full " << endl; 
   cout << "Want to save a new element instead of the old one? " << endl; 
   cout << "Yes -- 1, No -- 0 " << endl; 
   cin >> vibor; 
   if (vibor == 0) { break; } 
   else  
   { 
    cout << KOL_ELEM - 1 << endl; 
    cout << "In which cell to write a new element? > "; cin >> whatElem; cout << endl; 
    cout << "The new element was written to the cell " << whatElem << endl; 
    sport[whatElem] = newClass; 
   } 
  } 
  else { 
  if (sport[i] == NULL) 
  { 
   cout << "The new object will be written to the cell number " << i << endl; 
   sport[i] = newClass; 
   break; 
  } 
  else 
  { 
   if (sport[i] != NULL) 
   { 
    continue; 
   } 
 
  } } } 
}; 
 
void FindClass(string nameClass) { 
 for (int i = 0; i < KOL_ELEM; i++) 
 { 
  if ((i == KOL_ELEM - 1) && (sport[i] == NULL)) { cout << "The element was not found! " << endl; } 
  else { 
   if (sport[i] != NULL) { 
    string FirmOfClasses = sport[i]->GetFirm(); 

    if (FirmOfClasses != nameClass) 
    { 
     if ((i == KOL_ELEM - 1) && (FirmOfClasses != nameClass)) { 
      cout << "The element  was not found! " << endl; 
      break; 
     } 
     else { continue; } 
    } 
    else { 
     cout << "Element found " << endl; 
     cout << "Firm - " << sport[i]->GetFirm() << endl; 
     cout << "Color - " << sport[i]->GetColor() << endl; 
     cout << "Mass - " << sport[i]->GetMass() << endl; 
     cout << "Diametr - " << sport[i]->GetDiametr() << endl; 
     break; 
    } 
   } 
   else { continue; } 
  } } } 
  
void editClass(string EditedClass) 
{  
 string newfirm; 
 string newcolor; 
 int newmass; 
 int newdiametr; 
 for (int i = 0; i < KOL_ELEM; i++) 
 { 
  if ((i == KOL_ELEM - 1) && (sport[i] == NULL)) { cout << "The element was not found! " << endl; } 
 
  else { 
   if (sport[i] != NULL) {string FirmOfClasses = sport[i]->GetFirm(); 

    if (FirmOfClasses != EditedClass) 
    { 
     if ((i == KOL_ELEM - 1) && (FirmOfClasses != EditedClass)) { 
      cout << "The element was not found! " << endl; 
      break; 
     } 
     else { continue; } 
    } 
    else { 
     cout << "Element found " << endl; 
     cout << "Firm - " << sport[i]->GetFirm() << endl; 
     cout << "Color - " << sport[i]->GetColor() << endl; 
     cout << "Mass - " << sport[i]->GetMass() << endl; 
     cout << "Diametr - " << sport[i]->GetDiametr() << endl; 
 
     cout << "Change firm - "; cin >> newfirm; cout << endl; 
     cout << "Change color - "; cin >> newcolor; cout << endl; 
     cout << "Change mass - "; cin >> newmass; cout << endl; 
     cout << "Change diametr - "; cin >> newdiametr; cout << endl; 
 
     cout << "The selected object has been changed " << endl; 
     sport[i]->SetFirm(newfirm); 
     sport[i]->SetColor(newcolor); 
     sport[i]->SetMass(newmass); 
     sport[i]->SetDiametr(newdiametr); 
     break; 
    } 
   } 

   else { continue; } 
  } } } 

void deleteClass(string EditedClass) 
{ 
 string newfirm; 
 string newcolor; 
 int newmass; 
 int newdiametr; 
 
 for (int i = 0; i < KOL_ELEM; i++) 
 { 
  if ((i == KOL_ELEM - 1) && (sport[i] == NULL)) { cout << "The element was not found! " << endl; } 
 
  else { 
   if (sport[i] != NULL) { 
    string FirmOfClasses = sport[i]->GetFirm(); 
    if (FirmOfClasses != EditedClass) 
    { 
     if ((i == KOL_ELEM - 1) && (FirmOfClasses != EditedClass)) { 
      cout << "The element was not found! " << endl; 
      break; 
     } 
     else { continue; } 
    } 
    else { 
     cout << "Element found  " << endl; 
     cout << "Firm - " << sport[i]->GetFirm() << endl; 
     cout << "Color -  " << sport[i]->GetColor() << endl; 
     cout << "Mass - " << sport[i]->GetMass() << endl; 
     cout << "Diametr - " << sport[i]->GetDiametr() << endl; 
     cout << "Element deleted " << endl; 
     sport[i] = NULL; 
     break; 
    } 
   } 
   else { continue; } 
  } } } 
  
  
int main() 
{ 
 for (int i = 0; i < KOL_ELEM; i++) 
 { 
  sport[i] = NULL; 
 } 
 string firm; 
 int diametr;
 int mass; 
 string color;
 string newfirm; 
 string newcolor; 
 int newmass; 
 int newdiametr; 
 string NameofClass; 
 
 int numbers; 
 int Numberelem1 = 0; 
 string newBall ; 
 string EditedClass; 
 string DeletedClass; 
 
 do 
 { cout << "-----Operations with class objects----- " << endl; 
   cout << " 1. Add object " << endl; 
   cout << " 2. Find object " << endl; 
   cout << " 3. Change object " << endl; 
   cout << " 4. Delete object " << endl; 
   cout << " 0. Exit " << endl; 
   cout << endl; 
   cout << "Enter the command number > "; cin >> numbers; 
   cout << endl; 
   switch (numbers) 
   { 
    case 1:   
    { 
     AddClass(); 
     break; 
    } 
    case 2:   
    { 
     cout << "Which firm to find? "; cin >> newBall; cout << endl; 
     FindClass(newBall); 
     break; 
    } 
    case 3: 
    { 
     cout << "Which element(firm) to change? "; cin >> EditedClass; cout << endl; 
     editClass(EditedClass); 
     break; 
    } 
    case 4: 
    { cout << "Element to delete?"; cin >> DeletedClass; cout << endl; 
      deleteClass(DeletedClass); 
    break; 
    } } 
   } while (numbers != 0);  
 return 0;
}
 
 
