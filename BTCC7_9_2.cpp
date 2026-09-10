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
    friend istream& operator>>(istream& in, PhanSo& p) {
        cout << "Nhap tu so: ";
        in >> p.tuSo;
        cout << "Nhap mau so: ";
        in >> p.mauSo;
        return in;
    }

    friend ostream& operator<<(ostream& out, PhanSo& p) {
        out << p.tuSo << "/" << p.mauSo;
        return out;
    }
    PhanSo operator+(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.mauSo + b.tuSo * mauSo;
        kq.mauSo = mauSo * b.mauSo;
        return kq;
    }

    PhanSo operator-(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.mauSo - b.tuSo * mauSo;
        kq.mauSo = mauSo * b.mauSo;
        return kq;
    }

    PhanSo operator*(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.tuSo;
        kq.mauSo = mauSo * b.mauSo;
        return kq;
    }

    PhanSo operator/(PhanSo b) {
        PhanSo kq;
        kq.tuSo = tuSo * b.mauSo;
        kq.mauSo = mauSo * b.tuSo;
        return kq;
    }
};
int main() {
    PhanSo a, b;

    cout << "--- Nhap phan so thu nhat ---\n";
    cin >> a;
    cout << "--- Nhap phan so thu hai ---\n";
    cin >> b;

    PhanSo tong = a + b;
    tong.rutGon();
    cout << "\nTong: " << tong << endl;

    PhanSo hieu = a - b;
    hieu.rutGon();
    cout << "Hieu: " << hieu << endl;

    PhanSo tich = a * b;
    tich.rutGon();
    cout << "Tich: " << tich << endl;

    PhanSo thuong = a / b;
    thuong.rutGon();
    cout << "Thuong: " << thuong << endl;

    return 0;
}
