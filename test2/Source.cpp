#include <iostream>
using namespace std;
const int DAT = 50;
struct MATRAN
{
	int list[DAT][DAT];
	int n;
	int m;
};

void Nhap_MaTran(MATRAN& a)
{
	cout << "\n Nhap So Dong: "; cin >> a.n;
	cout << "\n Nhap So Cot: "; cin >> a.m;
	for (int i = 0; i < a.n; i++)
		for (int j = 0; j < a.m; j++)
		{
			cout << "\n a[" << i << "]" << "[" << j << "]=";
			cin >> a.list[i][j];
		}
}

void Xuat_MaTran(MATRAN a)
{
	for (int i = 0; i < a.n; i++)
	{
		cout << endl;
		for (int j = 0; j < a.m; j++)
			cout << " " << a.list[i][j];
	}
}


void Tong_cot(MATRAN a)
{
	for (int i = 0; i < a.m; i++)
	{
		int s = 0;
		for (int j = 0; j < a.n; j++)
		{
			s += a.list[j][i];
		}
		cout << "\n Cot thu " << i << "co tong la: " << s;
	}
}

void Tong_dong(MATRAN a)
{
	for (int i = 0; i < a.n; i++) {
		int s = 0; //khai báo ở đây bởi vì có 2 vòng lặp, 1 là cho dòng, 1 là cho cột. Nếu khai báo ở ngoài thì sẽ bị kh chuẩn kqua
		for (int j = 0; j < a.m; j++)
		{
			s += a.list[i][j];
		}
		cout << "\n Dong Thu " << i << "co tong la: " << s;
	}


}



int main()
{
	MATRAN a;
	Nhap_MaTran(a);
	cout << "\n Xuat Ma Tran: ";
	Xuat_MaTran(a);
	Tong_cot(a);
	Tong_dong(a);
	return 0;
}