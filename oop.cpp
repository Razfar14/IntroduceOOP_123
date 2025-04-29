#include <iostream>
using namespace std;

class Mahasiswa{
    public:
int Nim;
string Nama;
float Nilai;

void PrintData(){
    cout << "Nim :" << Nim << endl;
    cout << "Nama :" << Nama << endl;
    cout << "Nilai :" << Nilai << endl;
    }
}

int main(){
    Mahasiswa mhs;
    mhs.Nim = 123;
    mhs.Nama = "Raja";
    mhs.Nilai = 15;
    mhs.PrintData();
} 