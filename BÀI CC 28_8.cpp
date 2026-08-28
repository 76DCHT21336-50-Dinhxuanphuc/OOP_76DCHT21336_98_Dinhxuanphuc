#include <iostream>
using namespace std;

class MaTran {
private:
    int soHang;
    int soCot;
    int **a;

public:
    // Ham nhap ma tran
    void nhap() {
        cout << "Nhap so hang: ";
        cin >> soHang;

        cout << "Nhap so cot: ";
        cin >> soCot;

        // Cap phat mang 2 chieu dong
        a = new int*[soHang];

        for (int i = 0; i < soHang; i++) {
            a[i] = new int[soCot];
        }

        // Nhap cac phan tu
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            }
        }
    }

    // Ham xuat ma tran
    void xuat() {
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    // Ham cong hai ma tran
    MaTran cong(MaTran b) {
        MaTran c;

        c.soHang = soHang;
        c.soCot = soCot;

        // Cap phat ma tran ket qua
        c.a = new int*[c.soHang];

        for (int i = 0; i < c.soHang; i++) {
            c.a[i] = new int[c.soCot];
        }

        // Cong hai ma tran
        for (int i = 0; i < soHang; i++) {
            for (int j = 0; j < soCot; j++) {
                c.a[i][j] = a[i][j] + b.a[i][j];
            }
        }

        return c;
    }
};

int main() {
    MaTran m1, m2, m3;

    cout << "===== NHAP MA TRAN 1 =====" << endl;
    m1.nhap();

    cout << "\n===== NHAP MA TRAN 2 =====" << endl;
    m2.nhap();

    cout << "\n===== MA TRAN 1 =====" << endl;
    m1.xuat();

    cout << "\n===== MA TRAN 2 =====" << endl;
    m2.xuat();

    // Cong hai ma tran
    m3 = m1.cong(m2);

    cout << "\n===== MA TRAN TONG =====" << endl;
    m3.xuat();

    return 0;
}

