#include <iostream>
#include <cmath>
using namespace std;
struct DSdac
{
    int a[100];
    int n;
    void menu()
    {
        system("cls");
        cout << "==============================Menu========================================" << endl;
        cout << endl;
        cout << "1.  Viet thu tuc nhap danh sach \n";
        cout << "2.  Xuat danh sach \n";
        cout << "3.  Tim mot phan tu trong danh sach \n";
        cout << "4.  Them mot phan tu vao dau trong sach \n";
        cout << "5.  Them mot phan tu vao cuoi trong sach \n";
        cout << "6.  Xoa phan tu dau trong danh sach \n";
        cout << "7.  Xoa phan tu cuoi trong danh sach \n";
        cout << "8.  Xoa phan tu thu i trong danh sach \n";
        cout << "9.  Them phan tu thu i trong danh sach \n";
        cout << "10. Tim va xoa phan tu tim thay dau tien trong danh sach \n";
        cout << "11. Tim mot phan tu va xoa tat ca phan tu tim thay trong danh sach \n";
        cout << "12. Thoat  " << endl;
        cout << "================================================================" << endl;
    }
    void input(DSdac& ds)
    {
        for (int i = 0; i < ds.n; i++)
        {
            cout << "Nhap a[" << i << "]=";
            cin >> ds.a[i];
        }
    }
    void out(DSdac& ds)
    {
        cout << "Xuat mang : ";
        for (int i = 0; i < ds.n; i++)
        {
            cout << ds.a[i];
            if (i < ds.n - 1)
                cout << ",";
        }
        cout << endl;
    }
    int find( int x)
    {
        int i = 0;
        while (i < n && a[i] != x)
            i++;
        if (i == n)
            return -1; // tra ve gia tri ko tim thay
        return i;
    }
    void addfirst(DSdac& ds, int x)
    {
        ds.n++;
        for (int i = ds.n - 1; i >= 0; i--)
        {
            ds.a[i] = ds.a[i - 1];
        }
        ds.a[0] = x;
    }
    void addlast(DSdac& ds, int x)
    {
        ds.a[ds.n] = x; // vd n = 5
        ds.n++;         // 1 2 3 4 5    // a[5] = 6     --> 1 2 3 4 5 6
    }
    void delfirst(DSdac& ds, int& n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            ds.a[i] = ds.a[i + 1];
        }
        n--;
    }
    void dellast(DSdac& ds)
    {
        // xoa phan tu cuoi
        ds.n--;
    }
    bool del( int pos)
    {
        if (pos >= 0 && pos < n)
        {
            for (int i = pos; i < n - 1; i++)
            {
                a[i] = a[i + 1];
            }
            n--;
            return true;
        }
        return false;
    }
    bool addarry(DSdac& ds, int pos, int x)
    {
        if (pos < 0 || pos > ds.n)
            return false;
        ds.n++;
        for (int i = ds.n; i >= pos + 1; i--)
        {
            ds.a[i] = ds.a[i - 1];
        }
        ds.a[pos] = x;
        return true;
    }
   bool Removeat(int x)
   {
        int pos = find(x);
        if(pos==-1)
            return false;
        return del(pos);
   }
    void Xoa_Trung( int x)
	{
		int tmp = 0;
		int i, j;
		for (i = 0; i < n; i++)
		{
			if (a[i] == x)
			{
				for (int j = i; j < n - 1; j++)
				{
					a[j] = a[j + 1];

				}
				tmp++;
				n--;
				i--;
			}
		}
	}
};


