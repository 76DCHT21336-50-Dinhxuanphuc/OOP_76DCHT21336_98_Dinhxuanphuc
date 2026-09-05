#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// ================= CÂU 1 =================
// Khai báo l?p SinhVien
class SinhVien
{
private:
    string hoTen;
    int namSinh;
    float diem[5];

public:

    // ================= CÂU 2 =================
    // Phuong th?c nh?p
    void nhap()
    {
        cout << "Nhap ho ten: ";
        cin.ignore();
        getline(cin, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;

        cout << "Nhap diem 5 mon hoc:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Nhap diem mon " << i + 1 << ": ";
            cin >> diem[i];
        }
    }

    // Phuong th?c xu?t
    void xuat()
    {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;

        cout << "Diem 5 mon: ";

        for (int i = 0; i < 5; i++)
        {
            cout << diem[i] << " ";
        }

        cout << endl;

        cout << "Diem trung binh: "
             << fixed << setprecision(2)
             << tinhDiemTrungBinh() << endl;
    }

    // Phuong th?c tính di?m trung bình
    float tinhDiemTrungBinh()
    {
        float tong = 0;

        for (int i = 0; i < 5; i++)
        {
            tong += diem[i];
        }

        return tong / 5;
    }

    // Ki?m tra có môn du?i 5
    bool phaiThiLai()
    {
        for (int i = 0; i < 5; i++)
        {
            if (diem[i] < 5)
            {
                return true;
            }
        }

        return false;
    }
};


// ================= CÂU 3 =================
int main()
{
    int n;

    cout << "Nhap so luong sinh vien: ";
    cin >> n;

    SinhVien ds[100];

    // Nh?p n sinh viên
    for (int i = 0; i < n; i++)
    {
        cout << "\n========== SINH VIEN THU "
             << i + 1 << " ==========\n";

        ds[i].nhap();
    }

    // Xu?t danh sách sinh viên
    cout << "\n\n========== DANH SACH SINH VIEN ==========\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\n----- Sinh vien thu " << i + 1 << " -----\n";
        ds[i].xuat();
    }

    // In sinh viên ph?i thi l?i
    cout << "\n\n========== SINH VIEN PHAI THI LAI ==========\n";

    bool coThiLai = false;

    for (int i = 0; i < n; i++)
    {
        if (ds[i].phaiThiLai())
        {
            cout << "\n----- Sinh vien thu " << i + 1 << " -----\n";
            ds[i].xuat();

            coThiLai = true;
        }
    }

    if (coThiLai == false)
    {
        cout << "Khong co sinh vien nao phai thi lai.\n";
    }

    return 0;
}
