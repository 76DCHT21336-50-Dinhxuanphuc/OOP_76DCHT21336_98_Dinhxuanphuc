#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

class NhanVien {
private:
    string ma, hoTen, chucVu;
    double luong;

public:
    void nhap() {
        cout << "Ma NV: ";
        getline(cin, ma);

        cout << "Ho ten: ";
        getline(cin, hoTen);

        cout << "Chuc vu: ";
        getline(cin, chucVu);

        cout << "Luong: ";
        cin >> luong;
        cin.ignore();
    }

    void xuat() {
        cout << left
             << setw(10) << ma
             << setw(20) << hoTen
             << setw(15) << chucVu
             << setw(10) << luong << endl;
    }
};

int main() {
    // Cach 3: Dung vector
    vector<NhanVien> ds;

    // Nhap 10 nhan vien
    for (int i = 0; i < 10; i++) {
        NhanVien nv;

        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN "
             << i + 1 << " ===" << endl;

        nv.nhap();

        // Them nhan vien vao vector
        ds.push_back(nv);
    }

    // Xuat danh sach
    cout << "\n=== DANH SACH NHAN VIEN ===" << endl;

    cout << left
         << setw(10) << "Ma NV"
         << setw(20) << "Ho ten"
         << setw(15) << "Chuc vu"
         << setw(10) << "Luong" << endl;

    for (int i = 0; i < ds.size(); i++) {
        ds[i].xuat();
    }

    return 0;
}
