#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Khai bao Nhan Vien
class NhanVien{
	private:
		string Hoten;
		string Manv;
		string ngaysinh;
		string diachi;
	public:
		void nhap(){
			cout<<"Nhap ho va ten:";
			getline (cin,Hoten);
			cout<<"Nhap ma nv:";
			getline(cin,Manv);
			cout<<"Nhap ngay sinh:";
			getline(cin,ngaysinh);
			cout<<"Nhap dia chi:";
			getline(cin,diachi);
		}
		void xuat(){
			cout<<"\n---THONG TIN NHAN VIEN---\n"<<endl;
			cout<<"Ho ten:"<<Hoten<<endl;
			cout<<"Ma nhan vien:"<<Manv<<endl;
			cout<<"Ngay sinh:"<<ngaysinh<<endl;
			cout<<"Dia chi:"<<diachi<<endl;
		}
};
//Khai bao main
int main(){
	int n=3;
	//Cach 1:Mang tinh
	cout<<"CACH 1:DUNG MANG TINH\n";
	NhanVien dsnv1[10];
	for (int i=0;i<n;i++){
		cout <<"Nhap nhan vien thu"<<i+1<<"\n";
		dsnv1[i].nhap();
	}
	cout<<"Xuat nhan vien\n";
	for (int i=0;i<n;i++){
		cout<<"Nhan vien"<<i+1<<":";
		dsnv1[i].xuat();
	}
	
	//Cach 2:Dung toan tu new va mang dong
	cout<<"CACH 2:DUNG TOAN TU NEW VA MANG DONG\n";
	NhanVien *dsnv2;
	dsnv2=new NhanVien[n];//Cap phat mang n phan tu
	for (int i=0;i<n;i++){
		cout<<"Nhap nhan vien thu"<<i+1<<"\n";
		dsnv2[i].nhap();
	}
	cout <<"Xuat nhan vien\n";
	for (int i=0;i<n;i++){
		cout <<"Nhan vien"<<i+1<<":";
		dsnv2[i].xuat();
	}
	delete[] dsnv2;
	
	//Cach 3:Dung vector
	cout<<"CACH 3:DUNG VECTOR";
	vector<NhanVien> ds;
	for (int i=0;i<n;i++){
		cout<<"Nhap thong tin nhan vien"<<i+1<<"\n";
		NhanVien nv;
		nv.nhap();
		ds.push_back(nv);
	}
	cout<<"Xuat nhan vien\n";
	for (int i=0;i<ds.size();i++){
		cout<<"Nhan vien"<<i+1<<":";
		ds[i].xuat();
	}
	return 0;
}
