#include<iostream>
#include "main.cpp"
using namespace std;
int main()
{
    DSdac ds;
    int chon, n, x;
    bool in = false;
    int pos;
    do
    {
        ds.menu();
        cout << endl;
        cout << "Moi ban chon chuc nang = ";
        cin >> chon;
        switch (chon)
        {
        case 1:
            do
            {
                cout << "Nhap vao so luong phan tu = ";
                cin >> ds.n;
                if (ds.n < 0 || ds.n > 100)
                    cout << "Khong vuot qua 100" << endl;
            } while (ds.n < 0 || ds.n > 100);
            ds.input(ds);
            in = true;
            break;
        case 2:
            if (in)
            {
                ds.out(ds);
            }
            else
                cout << "Chua nhap thong tin" << endl;
            break;
        case 3:
            if (in)
            {
                cout << "Nhap gia tri can tm = ";
                cin >> x;
                cout << "Gia tri " << x << "o vi tri " << ds.find( x) << endl;
            }
            else
                cout << "Chua nhap thong tin " << endl;
            break;
        case 4:
            if (in)
            {
                cout << "Nhap vao gia tri can them  = ";
                cin >> x;
                ds.addfirst(ds, x);
                cout << "Them thanh cong " << endl;
            }
            else
                cout << "Chua nhap thong tin " << endl;
            break;
        case 5:
            if (in)
            {
                cout << "Nhap vao gia tri can them  = ";
                cin >> x;
                ds.addlast(ds, x);
                cout << "Them thanh cong " << endl;
            }
            else
                cout << "Chua nhap thong tin " << endl;
            break;
        case 6:
            if (in)
            {
                ds.delfirst(ds, n);
            }
            else
                cout << "Chua nhap thong tin " << endl;
            break;
        case 7:
            if (in)
            {
                ds.dellast(ds);
            }
            else
                cout << "chua nhap thong tin " << endl;
            break;
        case 8:
            if (in)
            {
                cout << "nhap vao vi tri can xoa = ";
                cin >> pos;
                if (ds.del(x) == true)
                {
                    cout << "xoa thanh cong " << endl;
                }
                else
                    cout << "Khong thong cong " << endl;
            }
            else
                cout << "chua nhap thong tin " << endl;
            break;
        case 9:
            if (in)
            {
                cout << "nhap vao vi tri can them = ";
                cin >> pos;
                cout << "Nhap vao gia tri can chen = ";
                cin >> x;
                if (ds.addarry(ds, pos, x) == true)
                    cout << "Them thanh cong " << endl;
                else
                    cout << "Khong thong cong " << endl;
            }
            else
                cout << "chua nhap thong tin " << endl;
            break;
        case 10:
            if (in)
            {
                cout << "Nhap vao gia tri dau can xoa = ";
                cin >> x;
                if (ds.Removeat(x) == true)
                {
                    cout << "Thanh cong " << endl;
                }
                else
                    cout << " khong thanh cong " << endl;
            }
            else
                cout << "chua nhap thong tin";
            break;
        case 11:
            if (in)
            {
                cout << "Nhap vao gia tri ban muon xoa het = ";
                cin >> x;
                ds.Xoa_Trung( x);
                cout << "Thanh cong " << endl;
            }
            else
                cout << "Chua nhap thong tin " << endl;
            break;
        case 12:
            cout << "Thanks " << endl;
            break;
        default:
            cout << "Error , Cn u check " << endl;
            break;
        }
        system("pause");
    } while (chon >= 1 && chon < 12);
    return 0;
}