/*
Nama : Mohammad Dhikri
NPM : 140810180075
Kelas : A
*/
#include <iostream>
using namespace std;
struct ElmtList{
	int num;
	ElmtList* next;
};
typedef ElmtList* pointer;
typedef pointer List;
struct Queue{
	List Head;
	List Tail;
};
Queue Q;
void createQueue(Queue& Q){
	Q.Head=NULL;
	Q.Tail=NULL;
}
void createElmt(pointer& pBaru){
	pBaru=new ElmtList;
	cout<<"Input a Number : "; cin>>pBaru->num;
	pBaru->next=NULL;
}
void insertQueue(Queue& Q, pointer pBaru){
	if(Q.Head==NULL && Q.Tail==NULL){
		Q.Head=pBaru;
		Q.Tail=pBaru;
	}
	else{
		Q.Tail->next=pBaru;
		Q.Tail=pBaru;
	}
}
void deleteQueue(Queue& Q, pointer pHapus){
	if(Q.Head==NULL && Q.Tail==NULL){
		cout<<"Empty List "<<endl;
	}
	else if(Q.Head->next==NULL){
		pHapus=Q.Head;
		Q.Head=NULL;
		Q.Tail=NULL;
	}
	else{
		pHapus=Q.Head;
		Q.Head=Q.Head->next;
		pHapus->next=NULL;
	}
}
void traversal(Queue Q){
	pointer pBantu;
	if(Q.Head==NULL && Q.Tail==NULL){
		cout<<"List Kosong "<<endl;
	}
	else{
		pBantu=Q.Head;
		do{
			cout<<pBantu->num<<" ";
			pBantu=pBantu->next;
		}
		while(pBantu != NULL);
	}
}
main(){
	int n;
	pointer p, pHapus;
	
	createQueue(Q);
	cout<<"Masukan banyak data : "; cin>>n;
	for(int i=0; i<n; i++){
		createElmt(p);
		insertQueue(Q, p);
	}
	deleteQueue(Q, pHapus);
	traversal(Q);
}

