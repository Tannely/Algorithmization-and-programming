#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int * Fun5(int** matr, int m, int n)
{
 int * res = new int[n];
 int min = 0, sum = 0, index = 0;
 int j;
 for ( j = 0; j<n; j++ ) 
 min += matr[0][j];
 for ( int i = 0; i<m; i++)
    {
  sum = 0;   
  for ( j = 0; j<n; j++)
     sum += matr[i][j];
     if (sum < min) 
            {
         min = sum;
         index = i;
            }
    }
    for (j = 0; j< n; j++)
    res[j] = matr[index][j];
    return res;
}

int main()
{
    
    srand(time(NULL));
    int** pr = new int*[4];
    cout << "Input matrics"<< endl;
    for (int j = 0; j<4; j++)
    {
        pr [j] = new int[4];
        for (int k = 0; k<4; k++)
        {
        pr [j][k] = rand()%100;
        cout << pr[j][k] << "\t";
        }
        cout << endl;
    }
 //  int mat[4][4] = {{2, 3, 4, 5}, {1, 2, 3, 4},{7, 3, 7, 5}, {9, 2, 7, 4}};
 //  pr=mat;
   int * res = Fun5(pr, 4, 4);
   cout << "Min line"<< endl;
   for ( int i =0; i<4; i++) 
   cout << *(res + i)<< "\t";
    return 0;
}
