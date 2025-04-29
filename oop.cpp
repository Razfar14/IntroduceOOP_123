#include <iostream>
using namespace std;

int Nim;
string Nama;
float Nilai;

void PrintData(){
    cout << "Nim :" << Nim << endl;
    cout << "Nama :" << Nama << endl;
    cout << "Nilai :" << Nilai << endl;
}

int main(){
    Nim = 123;
    Nama = "Raja";
    Nilai = 15;
    PrintData();
} 