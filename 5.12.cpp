 #include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
int x, i, m;
x = 3;
m = 0;
i = 0;
while (m <= 50) {
i++;
m= i *= x;
cout << m << endl; }


return 0;
}
