#include <iostream>
#include <string.h>
using namespace std;
struct SV
{
    string Name;
    float Math;
    float Physics;
    float English;
};
void Input(int n, SV A[]);
void Output(int n, SV A[]);

int main()
{
    int n;
    SV A[100];
    cout << "**********Danh sach sinh vien**********" << endl;
    cout << "Nhap so luong sinh vien :";
    cin >> n;
    Input(n, A);
    cout << endl;
    Output(n, A);
}
void Input(int n, SV A[])
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap ten sinh vien : ";
        cin >> A[i].Name;
        cout << "Nhap diem toan : ";
        cin >> A[i].Math;
        cout << "Nhap diem ly : ";
        cin >> A[i].Physics;
        cout << "Nhap diem Ngoai Ngu : ";
        cin >> A[i].English;
    }
}
void Output(int n, SV A[])
{
    cout << "**********Danh sach sinh vien**********" << endl;
    cout << "Name\t|\tMath\t|\tPhysics\t|\tEnglish\t" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i].Name << "\t|\t" << A[i].Math << "\t|\t" << A[i].Physics << "\t|\t" << A[i].English << endl;
        cout << (A[i].Math + A[i].Physics + A[i].English) / 3;
    }
}
