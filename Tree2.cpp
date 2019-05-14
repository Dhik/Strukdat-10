/*
Nama : Mohammad Dhikri
NPM : 140810180075
Kelas : A
Deskripsi : Tree
*/
#include <iostream>
using namespace std;
struct Simpul{
	int num;
	Simpul* left;
	Simpul* right;
};
typedef Simpul* pointer;
typedef pointer tree;
void createTree(tree& root){
	root=NULL;
}
void insertBST(tree& root, pointer pBaru){
	if(root==NULL){
		root=pBaru;
	}
	else if(pBaru->num < root->num){
		insertBST(root->left, pBaru);
	}
	else if(pBaru->num > root->num){
		insertBST(root->right, pBaru);
	}
	else{
		cout<<"Exist"<<endl;
	}
}
void createSimpul(pointer& pBaru){
	pBaru=new Simpul;
	cout<<"Masukan satu Angka : ";
	cin>>pBaru->num;
	pBaru->left=NULL;
	pBaru->right=NULL;
}
void preOrder(tree root){
	if(root != NULL){
		cout<<"("<<root->num<<" ";
		preOrder(root->left);
		preOrder(root->right);
		cout<<")";
	}
}
void inOrder(tree root){
	if(root != NULL){
		inOrder(root->left);
		cout<<"("<<root->num<<" ";
		inOrder(root->right);
		cout<<")";
	}
}
void postOrder(tree root){
	if(root != NULL){
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->num<<" ";
	}
}
main(){
	int n, a, choose;
	pointer p;
	tree pohon;
	char pilih;
	
	createTree(pohon);
	cout<<"Masukan banyak data : "; cin>>n;
	for(int i=0; i<n; i++){
		createSimpul(p);
		insertBST(pohon, p);
	}
	do{
		system("cls");
	cout<<"Notasi Kurung : "<<endl;
	preOrder(pohon);
	cout<<endl;
	cout<<"\tMENU"<<endl;
	cout<<"1. Pre-Order"<<endl;
	cout<<"2. In-Order"<<endl;
	cout<<"3. Post-Order"<<endl;
	cout<<endl<<"Pilih menu : "; cin>>choose;
	if(choose==1){
		preOrder(pohon);
	}
	else if(choose==2){
		inOrder(pohon);
	}
	else if(choose==3){
		postOrder(pohon);
	}
	else{
		return 0;
	}
	cout<<endl<<"Back to menu ? "; cin>>pilih;
}
	while(pilih=='Y'||pilih=='y');
}
