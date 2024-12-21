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
