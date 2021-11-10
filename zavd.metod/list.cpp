#include <iostream>
#define MAXLENGTH 100
typedef int ELEMENT;
typedef unsigned int POSITION;

typedef struct
{
ELEMENT elements[100 + 1];
POSITION last;
} FLIST;

ELEMENT extract(FLIST* pointlist, POSITION numellist, int* error);
void edit(FLIST* pointlist, POSITION numellist, ELEMENT point, int* error);
void inset(FLIST * pointlist, POSITION numellist, ELEMENT point, int* error);
ELEMENT del(FLIST* pointlist, POSITION numellist, int* error);
POSITION locate(FLIST* pointlist, POSITION numellist);
int lenght(FLIST* pointlist);

int main()
{
FLIST L;
L.last = 0;
int i = 0;
int nerror;
inset(&L, 1, 111, &nerror);
inset(&L, 2, 112, &nerror);
inset(&L, 3, 113, &nerror);
inset(&L, 4, 114, &nerror);
std:: cout<<"After inset:\n";
for (int i = 1; i < lenght(&L)+1; i++)
std::cout << "L [" << i<< "]=" << extract(&L, i, &nerror)<< "\n";
std::cout << lenght(&L) << "\n";
std:: cout<<"After del:\n";
for (int i = 1; i < lenght(&L)+1; i++)
std::cout << "L [" << i<< "]=" << del(&L, 2, &nerror) << "\n";
std::cout << lenght(&L) << "\n";
return 0;
}

int lenght(FLIST* pointlist)
{
return pointlist->last;
}

ELEMENT extract(FLIST * pointlist, POSITION numellist, int *error)
{
ELEMENT elem =0;
if (numellist<1 || numellist>pointlist->last) *error=1;
else
{
elem = pointlist->elements[numellist];
*error = 0;
}
return elem;
}

void edit(FLIST *pointlist,POSITION numellist, ELEMENT point, int *error)
{
if (numellist < 1||numellist > pointlist ->last) *error=1;
else
{
pointlist->elements[numellist] = point;
*error = 0;
}
}

ELEMENT del(FLIST *pointlist, POSITION numellist, int *error)
{
ELEMENT elem=0;
if (numellist < 1||numellist > pointlist -> last) *error=1;
else
{
elem = pointlist -> elements[numellist];
for (POSITION i=numellist; i<pointlist->last; i++)
{
pointlist->elements[i]=pointlist->elements[i+1];
}
pointlist->last--;
*error=0;
}
return elem;
}


void inset(FLIST* pointlist, POSITION numellist, ELEMENT point, int* error)
{
if (numellist < 1 || numellist > pointlist->last + 1 || pointlist->last == 100) *error = 1;
else
{
for (POSITION i = pointlist->last; i >= numellist; i--)
{
pointlist->elements[i + 1] = pointlist->elements[i];
}
pointlist->elements[numellist] = point;
pointlist->last++;
*error = 0;
}
}

POSITION locate(FLIST *pointlist, ELEMENT point)
{
for (POSITION q = 1; q<= pointlist->last; q++)
if (pointlist->elements[q]==point) return q;
return pointlist->last;
}