// Solution of 1019 - Time Conversion in beecrowd
#include <iostream>

using namespace std;

int main ()
{
    int N, n;
    cin >> N;
    n = N%3600;
    cout <<N/3600<<":"<< n/60 <<":"<<n%60<<endl;
 
    system("pause");
    return 0;
}