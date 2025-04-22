/*Saya Muhammad 'Azmi Salam dengan NIM 2406010
mengerjakan UTS soal 1 dalam mata kuliah
dasar pemrograman untuk keberkahan-Nya, maka saya
tidak akan melakukan kecurangan seperti yang telah
di spesifikasikan Aamiin.*/

#include "naka24.h"//menggunakan library naka24.h

int main(){
    /*mendeklarasikan variabel untuk menampung nilai
    penghuni = bungkusan penghuni yang berisi (nama, no kamar, dan space)
    i = counting untuk loop for
    n = jumlah bungkusan penghuni yang ingin dibuat
    spacex = jumlah spasi yang selalu bertambah mengikuti aturan string sebelumnya*/
    x penghuni[51];
    int i, n;
    int spacex = 0;

/*Meminta input dari user*/
    //meminta input untuk jumlah bungkusan penghuni yang ingin dibuat
    scanf("%d", &n);

    //looping untuk input bungkusan penghuni
    for(i = 0; i < n; i++){
        penghuni[i].space = 0;//marking 0 untuk mengisi jumlah spasi awal
        penghuni[i].space += spacex;//mengupdate setiap array baru dan mengisinya dengan jumlah spacex
        scanf("%s %d", penghuni[i].nama, &penghuni[i].kamar);//meminta input untuk bungkusan penghuni yang berisi nama dan no kamar
        //membuat kondisi jika no kamar ganjil atau genal
        if(penghuni[i].kamar % 2 == 1){//jika ganjil
            spacex += strlen(penghuni[i].nama);//spacex akan diisi sesuai jumlah string nama penghuni
        }else{//jika genap
            spacex += 1;//spacex akan diisi dengan 1 spasi
        }
        
    }
    
/*Menghasilkan output sesuai input yang telah diproses dalam prosedur*/
    //looping untuk memanggil prosedur
    for(i = 0; i < n; i++){
        hasil(penghuni[i]);//memanggil prosedur hasil
    }
    
    return 0;
}