#include <iostream>
#include <list>

using namespace std;

class HashTable
{
  int capacity;
  list<int> *table;

public:
  HashTable(int V);
  void insertItem(int key, int data);
  void deleteItem(int key);

  int checkPrime(int n)
  {
  int i;
  if (n == 1 || n == 0)
  {
    return 0;
  }
  for (i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
    return 0;
    }
  }
  return 1;
  }
  int getPrime(int n)
  {
  if (n % 2 == 0)
  {
    n++;
  }
  while (!checkPrime(n))
  {
    n += 2;
  }
  return n;
  }

  int hashFunction(int key)
  {
  return (key % capacity);
  }
  void displayHash();
};
HashTable::HashTable(int c)
{
  int size = getPrime(c);
  this->capacity = size;
  table = new list<int>[capacity];
}
void HashTable::insertItem(int key, int data)
{
  int index = hashFunction(key);
  table[index].push_back(data);
}
void HashTable::displayHash()
{
  for (int i = 0; i < capacity; i++)
  {
  cout << "key[" << i << "]";
  for (auto x : table[i])
    cout << " --> " << x;
  cout << endl;
  }
}

int main()
{
  int key[] = {0, 1, 2, 3, 4, 5, 0};
  int data[] = {12, 6, 52, 35, 42, 11, 43};
  int size = sizeof(key) / sizeof(key[0]);

  HashTable h(size);
  cout<<"----Hash Table----"<<endl;
  for (int i = 0; i < 7 ; i++)
  h.insertItem(key[i], data[i]);
  h.displayHash();
}
