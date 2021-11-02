#include <iostream> 
using namespace std; 
const int N = 100; //розмір черги 
struct Queue //структура черги 
{ 
 int data[N]; //масив даних 
 int last; 
}; 
void Creation(Queue* Q) //створення черги 
{ 
 Q->last = 0; 
} 
bool Full(Queue* Q) //перевірка черги на порожність 
{ 
 if (Q->last == 0) return true; 
 else return false; 
} 
void Add(Queue* Q) //додавання елементу в чергу 
{ 
 if (Q->last == N) 
 { 
  cout << "\nThe queue is full\n\n"; return; 
 } 
 int value; 
 cout << "\nNumber > "; cin >> value; 
 Q->data[Q->last++] = value; 
 cout << endl << "Element dodano\n\n"; 
} 
void Delete(Queue* Q) //видалення елементу 
{ 
 for (int i = 0; i < Q->last && i < N; i++) 
  Q->data[i] = Q->data[i + 1]; Q->last--; 
} 
int Top(Queue* Q) //вивід початкового елементу черги 
{ 
 return Q->data[0]; 
} 
int Size(Queue* Q) //розмір черги 
{ 
 return Q->last; 
} 
 
 
int main() 
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
  cout << "-------------------------------" << endl << endl; 
  cout << "Enter the command number > "; cin >> number; 
  switch (number) 
  { 
  case '1': Add(&Q); 
   break; 
   //----------------------------------------------- 
  case '2': 
   if (Full(&Q)) cout << endl << "The queue is empty\n\n"; 
   else 
   { 
    Delete(&Q); 
    cout << endl << "Element deleted from the queue\n\n"; 
   } break; 
   //----------------------------------------------- 
  case '3': 
   if (Full(&Q)) cout << endl << "The queue is empty\n\n"; 
   else cout << "\nPochatkovyy element: " << Top(&Q) << "\n\n"; 
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
