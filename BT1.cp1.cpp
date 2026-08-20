#include <iostream>
#include <string>
using namespace std;
struct NhanVien{
	string Manv;
	string Tennv;
	double luongcoban;
	double heSo;
};
void nhapNV(NhanVien ds[],int n){
	for (int i=0;i<n;i++){
		cout <<"---Nhap thong tin nhan vien thu---"<<i+1<<"\n";
		cout <<"Nhap ma Nv:";
		cin.ignore();
		getline(cin,ds[i].Manv);
		cout <<"Nhap ten Nv:";
		getline(cin,ds[i].Tennv);
		cout<<"Nhap luong co ban:";
		cin >>ds[i].luongcoban;
		cout <<"Nhap he So:";
		cin >>ds[i].heSo;
	}
}
void xuatNV(const NhanVien ds[],int n){
	cout <<"\n---DANH SACH NHAN VIEN---\n";
	for (int i=0;i<n;i++){
		cout <<"NV"<<i+1<<"|Ma:"<<ds[i].Manv
			 <<"|Ten:"<<ds[i].Tennv
			 <<"|Luong cb"<<ds[i].luongcoban
			 <<"|He so"<<ds[i].heSo<<endl;
	}
}
int main (){
	int n;
	cout <<"Nhap so luong n:";
	cin >>n;
	NhanVien ds[100];
	nhapNV(ds,n);
	xuatNV(ds,n);
	return 0;
}


