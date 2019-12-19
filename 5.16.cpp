#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int main(int argc, const char *argv[]) {
    double rate = .05f;
    int principal = 1000;

    cout << "Year" <<setw(21) << "Amount on deposit" <<endl;

    cout << fixed << setprecision(2);

    for (int year = 0; year <= 10; ++year) {
        int amount = principal * pow(1.0f + rate, year);

        // get dollar and cent amount using division and modulus
        int dollar = amount / 100;
        int cent = amount % 100;

        cout << setw(4) << year << setw(12) << dollar << '.' << cent << endl;
    }
    return 0;
}
