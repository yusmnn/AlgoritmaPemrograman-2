#include <iostream>
#include <string>

using namespace std;

struct Tugas{
    int tugas1, tugas2, tugas3, tugas4;
};

int main(){

    string namaSiswa[20];
    string nimSiswa[20];
    Tugas nilaiTugas[20]; 
    int nilaiMid[20]; 
    int nilaiUas[20]; 
    int nilaiRata[20]; 
    int nilaiAkhir[20]; 

    for(int i=0; i<20; i++){
        cout<<"Nama siswa : ";
        cin >> namaSiswa[i]; 
        cout<<"NIM siswa : ";
        cin >> nimSiswa[i]; 
        cout<<"Nilai tugas 1 : ";
        cin >> nilaiTugas[i].tugas1;
        cout<<"Nilai tugas 2 : ";
        cin >> nilaiTugas[i].tugas2;
        cout<<"Nilai tugas 3 : ";
        cin >> nilaiTugas[i].tugas3;
        cout<<"Nilai tugas 4 : ";
        cin >> nilaiTugas[i].tugas4;
        cout<<"Nilai UTS : ";
        cin >> nilaiMid[i];
        cout<<"Nilai UAS : ";
        cin >> nilaiUas[i];
        nilaiRata[i] = (nilaiTugas[i].tugas1 + nilaiTugas[i].tugas2 + nilaiTugas[i].tugas3 + nilaiTugas[i].tugas4 / 4);
        cout<<"Nilai rata-rata tugas: "<<nilaiRata[i] << endl;
        nilaiAkhir[i] = (30*nilaiRata[i]/100) + (30*nilaiMid[i]/100) + (40*nilaiUas[i]/100);
        cout<<"Nilai akhir IPS "<< namaSiswa[i]<< " : "<<nilaiAkhir[i]<<endl;
        cout<<"_______________________________________"<<endl;
    }

}
