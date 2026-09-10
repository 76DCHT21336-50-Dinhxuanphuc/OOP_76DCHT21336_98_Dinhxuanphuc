#include <iostream>
using namespace std;

int ucln(int a, int b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

class PhanSo {
private:
   
    int tuSo;
    int mauSo;

public:
   
    PhanSo() {
        tuSo = 0;
        mauSo = 1;
    }

    PhanSo(int ts, int ms) {
        tuSo = ts;
        mauSo = ms;
    }

    ~PhanSo() {
    }

    
    void nhap() {
        cout << "Nhap tu so: ";
        cin >> tuSo;
        cout << "Nhap mau so: ";
        cin >> mauSo;
    }

    void xuat() {
        cout << tuSo << "/" << mauSo;
    }

    void rutGon() {
        int u = ucln(tuSo, mauSo);
        if (u != 0) {
            tuSo = tuSo / u;
            mauSo = mauSo / u;
        }
        if (mauSo < 0) { 
            tuSo = -tuSo;
            mauSo = -mauSo;
        }
    }

   
    PhanSo cong(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.mauSo + b.tuSo * mauSo;
        kq.mauSo = mauSo * b.mauSo;
        return kq;
    }

    PhanSo tru(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.mauSo - b.tuSo * mauSo;
        kq.mauSo = mauSo * b.mauSo;
        return kq;
    }

    PhanSo nhan(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.tuSo;
        kq.mauSo = mauSo * b.mauSo;
        return kq;
    }

    PhanSo chia(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.mauSo;
        kq.mauSo = mauSo * b.tuSo;
        return kq;
    }
};


int main() {
    PhanSo a, b;

    cout << "--- Nhap phan so thu nhat ---\n";
    a.nhap();
    cout << "--- Nhap phan so thu hai ---\n";
    b.nhap();

    PhanSo tong = a.cong(b);
    tong.rutGon();
    cout << "\nTong: "; tong.xuat(); cout << endl;

    PhanSo hieu = a.tru(b);
    hieu.rutGon();
    cout << "Hieu: "; hieu.xuat(); cout << endl;

    PhanSo tich = a.nhan(b);
    tich.rutGon();
    cout << "Tich: "; tich.xuat(); cout << endl;

    PhanSo thuong = a.chia(b);
    thuong.rutGon();
    cout << "Thuong: "; thuong.xuat(); cout << endl;

    return 0;
}
