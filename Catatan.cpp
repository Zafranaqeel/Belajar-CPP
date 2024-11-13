//TLX 01-A
#include <iostream>

int main() {
    std::cout << "Halo, dunia!" << std::endl;
}

//TLX 01-B
#include <iostream>

int main() {
    std::cout << "Halo, dunia!" << std::endl;
    std::cout << "Aku semangat belajar C++!";
}

//TLX 01-C
#include <iostream>

int main() {
    std::cout << "Pak Dengklek memiliki " << "75" << " ekor bebek." << std::endl;
}

//TLX 01-D
#include <iostream>

int main() {
    std::cout << "Pak Dengklek memiliki " << 738+519 << " ekor bebek." << std::endl;
}

//TLX 01-E

//TLX 01-F
#include <iostream>

int main() {
    // cetak luas kandang
    std::cout << 364*79 << std::endl;

    // cetak keliling kandang
    std::cout << 2*(364+79) << std::endl;
}

//TLX 01-G

//TLX 02-A

//TLX 02-B
#include <iostream>
using namespace std;

int main() {
    int panjang = 364;
    int lebar = 79;

    // cetak luas kandang
    cout << panjang*lebar << endl;

    // cetak keliling kandang
    cout << 2*(panjang+lebar) << endl;
}

//TLX 02-C
#include <iostream>
using namespace std;

int main() {
    // kata sandi bulan pertama
    int sandi = 174;
    cout << sandi << endl;

    // kata sandi bulan kedua
    sandi = sandi*23;
    cout << sandi << endl;

    // kata sandi bulan ketiga
    sandi = sandi*23;
    cout << sandi << endl;
}

//TLX 02-D

//TLX 02-E
#include <iostream> // untuk menggunakan cout dan endl
#include <string>   // untuk menggunakan string
using namespace std;

int main() {
    int tanggal = 15;
    int tahun = 2023;

    // jangan lupa bahwa string perlu diapit dengan kutip dua
    string bulan = "Februari"; 

    // cetak kata sandi
    cout << tahun+10 << "-" << bulan << "-" << tanggal+7 << endl;
}

//TLX 02-F

//TLX 02-G
#include <iostream>
using namespace std;

int main() {
	int jantan, betina;
 
    // banyaknya bebek saat ini
	jantan = 63;
	betina = 192;
 
    // setelah bulan pertama
	betina = betina + jantan;
	jantan = jantan - jantan/3;
 
    // setelah bulan kedua
	jantan = jantan + betina;
	betina = betina - 10;
 
    // cetak total bebek
	cout << jantan + betina << endl;
}

//TLX 02-H

//TLX 03-A

//TLX 03-B
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;

    // bulan pertama
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan kedua
    luas_kandang += 7;
    cout << luas_kandang << endl;

    // bulan ketiga
    luas_kandang += 7;
    cout << luas_kandang << endl;
}

//TLX 03-C
#include <iostream>
using namespace std;

int main() {
    int total_baris = 0;
    int luas_kandang = 12;

    while (total_baris < 3) {
        luas_kandang += 7;
        cout << luas_kandang << endl;

        total_baris += 1;
    }
}

//TLX 03-D

//TLX 03-E
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    int nomor_baris = 1;

    while (nomor_baris <= 3) {
        luas_kandang += 7;
        cout << nomor_baris << ": " << luas_kandang << endl;

        nomor_baris += 1;
    }
}

//TLX 03-F
#include <iostream>
using namespace std;

int main() {
    int luas_kandang = 12;
    
    // Menyatakan sudah berapa bulan (berapa kali) Pak Dengklek
    // membeli kandang baru.
    int total_bulan = 0;

    // Menyatakan total luas kandang yang dimiliki Pak Dengklek.
    // Pada mulanya, totalnya adalah luas kandang lama Pak Dengklek.
    int total_luas_kandang = luas_kandang;

    while (total_bulan < 10) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;

        total_bulan += 1;
    }

    cout << total_luas_kandang << endl;
}

//TLX 03-G
#include <iostream>
using namespace std;

int main() {
    // Menyatakan total banyaknya kandang yang dimiliki Pak Dengklek.
    // Pada mulanya, Pak Dengklek memiliki 1 kandang seluas 12 meter persegi.
    int total_kandang = 1;
    int luas_kandang = 12;

    int total_luas_kandang = luas_kandang;

    while (total_luas_kandang <= 800) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;

        total_kandang += 1;
    }

    cout << total_kandang << endl;
}

//TLX 03-H
#include <iostream>
using namespace std;

int main() {
    int jantan = 0, betina = 0;
    int tanggal = 1;

    while ((jantan +1)*10 > betina+1) {
        jantan += 1;
        betina += tanggal;
        tanggal ++;
    }

    cout << tanggal << endl;
}

//TLX 03-I

//TLX 04-A

//TLX 04-B
#include <iostream>
using namespace std;

int main() {
    int jantan = 67;
    int betina = 98;

    if (jantan % 2 == 0) {
        cout << "banyaknya bebek jantan adalah bilangan genap" << endl;
    }

    if (betina % 2 == 0) {
        cout << "banyaknya bebek betina adalah bilangan genap" << endl;
    }
}

//TLX 04-C
#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 2 == 0) {
        cout << "total banyaknya bebek adalah bilangan genap" << endl;
    } else {
        cout << "total banyaknya bebek adalah bilangan ganjil";
    }
}

//TLX 04-D
#include <iostream>
using namespace std;

int main() {
    int total_bebek = 67 + 98;

    if (total_bebek % 13 == 0) {
        cout << 13 << endl;
    } else if (total_bebek % 11 == 0) {
        cout << 11 << endl;
    } else if (total_bebek % 5 == 0) {
        cout << 5 << endl;
    } else if (total_bebek % 3 == 0) {
        cout << 3 << endl;
    } else {
        cout << 1 << endl;
    }
}

//TLX 04-E

//TLX 04-F

//TLX 04-G
#include <iostream>
#include <string>
using namespace std;

int main() {
    int A = 364 * 79;
    int B = 243 * 99;
    int C = 189 * 155;

    string terbesar, terkecil;

    if (A > B && A > C) {
        // jika A lebih besar dari B dan C, maka A terbesar
        terbesar = "A";

        // cari yang terkecil, yakni yang lebih kecil antara B dan C
        if (B < C) {
            terkecil = "B";
        } else {
            terkecil = "C";
        }
    } else if (B > A && B > C) {
        // jika B lebih besar dari A dan C, maka B terbesar
        terbesar = "B";

        // cari yang terkecil, yakni yang lebih kecil antara A dan C
        if (A < C) {
            terkecil = "A";
        } else {
            terkecil = "C";
        }
    } else {
        // sampai sini, maka C terbesar
        terbesar = "C";

        // cari yang terkecil, yakni yang lebih kecil antara A dan B
        if (A < B){
            terkecil = "A";
        } else{
            terkecil = "B";
        }
    }
    
    cout << terbesar << endl;
    cout << terkecil << endl;
}

//TLX 04-H

//TLX 05-A
#include <iostream>
using namespace std;

int main() {
    for (int sisi = 121; sisi <= 125; sisi += 1) {
        cout << sisi * sisi << endl;
    }
}

//TLX 05-B
#include <iostream>
using namespace std;

int main() {
    bool ada_yang_dijual = false;

    for (int sisi = 121; sisi <= 125; sisi++) {
        bool kelipatan_2 = sisi % 2 == 0;
        bool kelipatan_3 = sisi % 3 == 0;

        if (kelipatan_2 = true) {
            ada_yang_dijual = true;
        }
    }

    if (ada_yang_dijual) {
        cout << "ada" << endl;
    } else {
        cout << "tidak ada" << endl;
    }
}

//TLX 05-C
#include <iostream>
using namespace std;

int main() {
    for (int luas = 100000; luas <= 200000; luas++) {
        // Jika luas ini bukan bilangan genap, iterasi ini bisa dihentikan
        // (dilewati), karena luas ini pasti tidak memenuhi syarat.
        if (luas % 2 == 1) {
            continue;
        }
        
        // Sekarang, kita akan cek apakah luas ini merupakan bilangan kuadrat sempurna.
        bool kuadrat_sempurna = false;

        for (int k = 1; k <= luas; k++) {
            // Jika luas adalah tepat k * k,
            // maka luas ini merupakan bilangan kuadrat sempurna.
            if (luas == k*k) {
                kuadrat_sempurna = true;
            }
        }

        if (kuadrat_sempurna) {
            // Kita telah menemukan luas terkecil yang memenuhi seluruh syarat.

            // Cetak luas ini.
            cout << luas << endl;

            // Kita tidak perlu lagi melanjutkan perulangan.
            break;
        }
    }
}

//TLX 05-D
