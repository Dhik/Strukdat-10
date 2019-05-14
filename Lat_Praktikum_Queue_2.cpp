/*
Nama : Mohammad Dhikri
NPM : 140810180075
Kelas : A
*/
#include <iostream>
using namespace std;
const  int maxElemen = 255; 
struct Queue{ 
	char isi[maxElemen]; 
	int head;                         // depan 
	int tail;                         // belakang 
};
Queue Q;
void createElmt(char& elemen){
	cout<<"Input Char : "; cin>>elemen;
}
void createQueue (Queue& Q){ 
	Q.head = 0; 
	Q.tail = -1; 
}
void insertQueue(Queue& Q, char elemen) { 
	if (Q.tail==maxElemen-1){ 
		cout<<"Antrian sudah penuh"<<endl; 
	} 
	else { 
		Q.tail=Q.tail + 1; 
		Q.isi[Q.tail] = elemen; 
	} 
}
void deleteQueue(Queue& Q, char& elemenHapus){ 
	cout<<"Delete Queue (Antrian) "<<endl; 
	if (Q.head>Q.tail){           // atau  
		cout<<"Antrian kosong"<<endl; 
	} 
	else { 
		elemenHapus= Q.isi[Q.head];   //
		for (int i=0;i<Q.tail;i++){   // Geser ke depan 
			Q.isi[i]=Q.isi[i+1]; 
		} 
		Q.tail=Q.tail-1; 
	} 
}
void traversal(Queue& Q, int& n){
	for(int i=0; i<n; i++){
		cout<<Q.isi[i]<<" ";
	}
}
main(){
	char c;
	int n;
	createQueue(Q);
	
	cout<<"Masukan banyak data : "; cin>>n;
	for(int i=0; i<n; i++){
		createElmt(c);
		insertQueue(Q, c);
	}
	traversal(Q, n);
}
