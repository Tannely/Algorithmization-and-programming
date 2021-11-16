#include <iostream>
#include <cstdlib>
#define HASHTAB_MUL 31
#define HASHTAB_SIZE 120

using namespace std;
//тут все працює
int h(int k){
	int r=16;//кількість середніх двійкових цифр які отримуємо
	int sqr;//квадрат ключа
	int shift;//значення зсуву на певну кількість двійкових цифр
	sqr=k*k;//обчислення квадрату
	shift=(32-r)/2;//обчислення значеняя зсуву
	return ((sqr>>shift)&0xffff);//вилучення двох середніх двійкових цифр і зсув їх на величину шіфт, поміщення у комірку пам'яті за певною адресою
}
typedef struct node_HT  { 
int value;  
node_HT *next; 
} node; 
node *htab[HASHTAB_SIZE];

void initializeHashTable (node* hash_table[],  /* масив покажчиків на блоки ланцюжків 
хеш-таблиці  */ 
int m)  {      /*  розмір хеш-масиву */ 
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
		while (p->next!=NULL){//треба цикл
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
		while (p->next!=NULL){//треба цикл
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
if (!new_node)  /* немає доступної пам'яті */  
 {
// printf("the memory is full\n");
  return 0; 
}
  if (searchValue2(hash_table,key)!=NULL){
  	//printf("the element is in present in hashtable...\n");
  	/*
  	new_node->next=hash_table[h(key)];//новий ключ додавати не треба
  	hash_table[h(key)]=new_node;
  	*/
  	printf("the element was not added\n");
  	return NULL; 
  }
  else {  
  //printf("beginning...\n");
/* Вставка нового елемента */ 
new_node->value=key; 
//printf("well 1 step\n");
p=hash_table[h(key)];
if (p!=NULL){
new_node->next=p;  // встановлюємо на колишній перший  
                    //  елемент блоку 
             
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
//вище все працювало
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
}// тут зупинились чи треба додавати ключ, якщо він вже є?
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
// ініціалізація пошуку 
save = NULL; 
int flag=0;
ptr = hash_table[h(key)]; // визначаємо адресу блоку зберігання елемента 
 // пошук елемента, що видаляється, в блоці хеш-таблиці  
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
save->next=ptr->next; // зв'язуємо попередній елемент перед тим, 
// що видаляємо, і наступний елемент в блоці  
free (ptr); 
return 0;  // елемент видалений 
} 
else 
return 1;  // елемент не знайдений, операція не виконана 
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
