#include <iostream>
#include <cstdlib>
#define HASHTAB_MUL 31
#define HASHTAB_SIZE 120

using namespace std;
//��� ��� ������
int h(int k){
	int r=16;//������� ������� �������� ���� �� ��������
	int sqr;//������� �����
	int shift;//�������� ����� �� ����� ������� �������� ����
	sqr=k*k;//���������� ��������
	shift=(32-r)/2;//���������� �������� �����
	return ((sqr>>shift)&0xffff);//��������� ���� ������� �������� ���� � ���� �� �� �������� ����, �������� � ������ ���'�� �� ������ �������
}
typedef struct node_HT  { 
int value;  
node_HT *next; 
} node; 
node *htab[HASHTAB_SIZE];

void initializeHashTable (node* hash_table[],  /* ����� ��������� �� ����� �������� 
���-�������  */ 
int m)  {      /*  ����� ���-������ */ 
int i; 
for(i=0; i<m; i++)  {
hash_table[i]=NULL; 
//printf("OK  ");
}
return; 
} 
node *searchValue(node* hash_table[], int key) {   
node *ptr,*p; 
ptr=NULL;
p=NULL;
ptr = hash_table[h(key)]; 
//printf("\nbeginning search...\n");
int i=0, index=0;
int flag=0;
for (i=0;i<HASHTAB_SIZE;i++){
	index=h(i);
	//printf("the index =%i\n",index);
	//p=hash_table[i];
	p=ptr;
	//printf("the pointer of i=%i\n",i);
	if (p!=NULL){
	//printf("the pointer is not NULL")	;
	if(p->value==key){
		//printf("program stopped\n");
		flag=1;
		break;
	}
	else{
		while (p->next!=NULL){//����� ����
		p=p->next;
		if (p->value==key){
			flag=1;
			break;
		}
		}
		//printf("Not is it\n");
	}
}
else {
	//printf("the value P=NULL\n");
}
//flag=0;
}
if (flag==1){
	return p;
}
else {
	//printf("the value was not found\n");
	return NULL;
}}
node *searchValue2(node* hash_table[], int key) {   
node *ptr,*p; 
ptr=NULL;
p=NULL;
ptr = hash_table[h(key)]; 
int i=0, index=0;
int flag=0;
	p=ptr;
	//printf("the pointer of i=%i\n",i);
	if (p!=NULL){
	//printf("the pointer is not NULL")	;
	if(p->value==key){
		//printf("program stopped\n");
		flag=1;		
	}
	else{
		while (p->next!=NULL){//����� ����
		p=p->next;
		if (p->value==key){
			flag=1;			
		}
		}
		//printf("Not is it\n");
	}
}
else {
	//printf("the value P=NULL\n");
}
//flag=0;

if (flag==1){
	return p;
}
else {
	//printf("the value was not found\n");
	return NULL;
}
}
node *insertValue (node* hash_table[], int key) {  
node *new_node; 
node *p;
//node hash_table2=*hash_table;
new_node = (node*) malloc(sizeof(node)); 
new_node->value=key;
//printf("the procedure InsertValue has begun\n");
if (!new_node)  /* ���� �������� ���'�� */  
 {
// printf("the memory is full\n");
  return 0; 
}
  if (searchValue2(hash_table,key)!=NULL){
  	//printf("the element is in present in hashtable...\n");
  	/*
  	new_node->next=hash_table[h(key)];//����� ���� �������� �� �����
  	hash_table[h(key)]=new_node;
  	*/
  	printf("the element was not added\n");
  	return NULL; 
  }
  else {  
  //printf("beginning...\n");
/* ������� ������ �������� */ 
new_node->value=key; 
//printf("well 1 step\n");
p=hash_table[h(key)];
if (p!=NULL){
new_node->next=p;  // ������������ �� ������� ������  
                    //  ������� ����� 
             
 hash_table[h(key)]=new_node;
return new_node; 
}
else {
	hash_table[h(key)]=new_node;
	hash_table[h(key)]->next=NULL;
	return new_node; 
//	printf("element added\n");
}
}
} 
//���� ��� ���������
//
void print_htable(node* hash_table[]){
	int i=0;
	node *p;	
	for (i=0;i<HASHTAB_SIZE;i++){
		p=hash_table[i];
		if (p!=NULL){
			printf("i=%i     key=%i         ",i,p->value);
			for (int j=0;j<10;j++){			
			if(p->next!=NULL){
				p=p->next;
				printf("key=%i      ",p->value);
			}			
		}
		printf("\n");
		}
	}	
}// ��� ���������� �� ����� �������� ����, ���� �� ��� �?
void print_node(node* hash_table[],int key){
	int index=h(key);
	node *pp;
	pp=hash_table[index];
	if (pp!=NULL){
		if (pp->value==key){
			printf("i=%i    key=%i\n",index,key);
		}
		else {
			for (int j=0;j<10;j++){
				if(pp->next!=NULL){				
				pp=pp->next;
				if (pp->value==key){
			printf("i=%i    key=%i\n",index,key);
		    }
			}
			}
		}
	}
	else {
		printf("the key value is empty\n");
	}

}

int deleteValue (node* hash_table[], int key) { 
node *save, *ptr;  
// ����������� ������ 
save = NULL; 
int flag=0;
ptr = hash_table[h(key)]; // ��������� ������ ����� ��������� �������� 
 // ����� ��������, �� �����������, � ����� ���-�������  
 printf("deleting begin...\n");
 int counter=0;
 if (ptr!=NULL){ 
 if (ptr->value==key){
 	if (ptr->next==NULL){	
 	hash_table[h(key)]=NULL;
    }
    else {
    	save=ptr->next;
    	hash_table[h(key)]=save;
    	free(ptr);
    }
 	return 0;
 }
 else {
 
 for (int j=0; j<10;j++){
 save=ptr; 
 if(ptr->next!=NULL){
 save=ptr; 
 ptr=ptr->next; 
if(ptr->value==key){
	flag=1;
	break;
}
} 
}
}
if (flag==1)  { 
save->next=ptr->next; // ��'����� ��������� ������� ����� ���, 
// �� ���������, � ��������� ������� � �����  
free (ptr); 
return 0;  // ������� ��������� 
} 
else 
return 1;  // ������� �� ���������, �������� �� �������� 
} 
}

void delete_htable(node* hash_table[]){
	int i=0;
	for (i=0;i<HASHTAB_SIZE;i++){
		free(hash_table[i]);
	}
}


int main(int argc, char** argv) {
	node *node1;
	initializeHashTable(htab,HASHTAB_SIZE);
	//node1=*insertValue(htab,1);
	//node1=searchValue(htab,1);
	int i=0;
	int index=0;
	
	for (i=0;i<51;i++){
		node1=insertValue(htab,i);
	}
    cout<<"----Hash Table----"<<endl;
    cout<<endl;
	print_htable(htab);
	delete_htable(htab);
	return 0;
}
