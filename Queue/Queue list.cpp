#include <iostream> 
using namespace std; 
struct Node //опис вузла списку 
{ 
 int data;  
 Node* next; //вказівник на наступний елемент 
}; 
struct Queue //структура вузла черги 
{ 
 int size; //лічильник розміру черги 
 Node* first; //вказівник на початок черги 
 Node* last; //вказівник на кінець черги 
}; 
void Creation(Queue* Q) //створення черги 
{ 
 Q->first = new Node; 
 Q->first->next = NULL; 
 Q->last = Q->first; 
 Q->size = 0; 
} 
bool Full(Queue* Q) //перевірка черги на порожність 
{ 
 if (Q->first == Q->last) return true; 
 else return false; 
} 
int Top(Queue* Q) //вивід початкового елементу черги 
{ 
 return Q->first->next->data; 
} 
void Add(Queue* Q) // додавання елементу в чергу 
{ 
 int value; 
 cout << "\nNumber > "; cin >> value; 
 Q->last->next = new Node; 
 Q->last = Q->last->next; 
 Q->last->data = value; //додавання елементу в кінець 
 Q->last->next = NULL; //нульовий вказівник на наступний елемент 
 Q->size++; 
 cout << "\nElement dodano\n\n"; 
} 
void Delete(Queue* Q) //видалення елементу 
{ 
 Q->first = Q->first->next;  
 Q->size--; 
 cout << "\nElement deleted\n\n"; 
} 
int Size(Queue* Q) //розмір черги 
{    
 return Q->size; 
} 
int main() //головна функція 
{ 
  
 Queue Q; 
 Creation(&Q); 
 char number; 
 do 
 { 
  cout << endl << "-----------QUEUE---------------" << endl << endl; 
  cout << "1. Add element" << endl; 
  cout << "2. Delete element" << endl; 
  cout << "3. Output pochatkovyy element" << endl; 
  cout << "4. Size of queue" << endl; 
  cout << "0. Exit" << endl; 
  cout << "-------------------------------" << endl; 
  cout << "Enter the command number > "; cin >> number; 
  switch (number) 
  { 
  case '1': Add(&Q); 
   break; 
   //----------------------------------------------- 
  case '2': 
   if (Full(&Q)) cout << endl << "The queue is empty\n\n"; 
   else Delete(&Q); 
   break; 
   //----------------------------------------------- 
  case '3': 
   if (Full(&Q)) cout << endl << "The queue is empty\n\n"; 
   else { cout << "\nPochatkovyy element: " << Top(&Q) << "\n\n"; } 
   break; 
   //----------------------------------------------- 
  case '4': 
   if (Full(&Q)) cout << endl << "The queue is empty\n\n"; 
   else cout << "\nSize of queue: " << Size(&Q) << "\n\n"; 
   break; 
   //----------------------------------------------- 
  case '0': break; 
  default: cout << endl << "Command not specified\n\n"; 
   break; 
  } 
 } while (number != '0'); 
 system("pause"); 
}
