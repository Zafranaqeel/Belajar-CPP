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
