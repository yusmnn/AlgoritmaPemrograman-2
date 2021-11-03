#include <iostream>
#include <string>
#include <array>
#include <stdlib.h>

using namespace std;

struct Tugas{
    int tugas1, tugas2, tugas3, tugas4;
};


int main(){
   
    int pilihan;
    string namaSiswa[5];
    string nimSiswa[5];
    int nilaiMid[5]; 
    int nilaiUas[5]; 
    int nilaiRata[5]; 
    int nilaiAkhir[5];
    Tugas nilaiTugas[5]; // array didalam struct
    string *ptrnamaSiswa = &namaSiswa[5];
    int *ptrnilaiAkhir = &nilaiAkhir[5];
    int *ptrnilaiRata = &nilaiAkhir[5];
    do{
        cout << "1. input nilai mahasiswa" << endl;
        cout << "2. tampil nilai mahasiswa" << endl;
        cout << "masukkan pilihan 1 atau 2: ";
        cin >> pilihan;
        system("cls");

        switch(pilihan)
        {
            case 1:{
                if(pilihan == 1){
                    for(int i=0; i<5; i++){
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
                        nilaiAkhir[i] = (30*nilaiRata[i]/100) + (30*nilaiMid[i]/100) + (40*nilaiUas[i]/100);
                    }
                }
                else {
                    cout << "data penuh!!"<< endl;
                }
            break;
            }
            case 2:{               
                if(namaSiswa == NULL){
                   cout << "NILAI KOSONG";
                }
                else { 
                    cout << "NILAI KESELURUHAN MAHASISWA" << endl;
                    cout << " nama mahasiswa : " << *ptrnamaSiswa << endl;
                    cout<<"Nilai rata-rata tugas: "<<*ptrnilaiRata << endl;
                    cout << " nilai akhir siswa : " << *ptrnilaiAkhir << endl;
                    cout<<"_______________________________________"<<endl;                   
                }
            }
        }system("pause");
    }while(pilihan== 1 && pilihan==2);


return 0;
}
