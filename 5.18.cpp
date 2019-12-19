#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    cout << "Binary\tOctal\tHexadecimal\n";

    for (int i = 1; i <= 256; i++) {
        cout << dec << i << "\t" << oct << i << "\t" << hex << i << endl;
    }
    return 0;
}
