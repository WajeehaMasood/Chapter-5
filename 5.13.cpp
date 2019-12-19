#include<iostream>
using namespace std;
int main(){
double result = 1;
for (int n=1; n<=5; n++)
{
result*=n;
cout<<"Factorial of \t"<<n<<"\t is \t"<<result<<endl;
}
return 0;
}
