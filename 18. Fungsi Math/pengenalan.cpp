#include <iostream>
#include <cmath>

using namespace std;

/*
library cmath : referensi www.cppreference.com
ceil(x) 	<- pembulatan ke atas
cos(x) 		<- cosinus
exp(x) 		<- eksponen
fabs(x) 	<- nilai absolut dalam float
floor(x) 	<- pembulatan ke bawah
fmod(x) 	<- modulus dalam float
log(x) 		<- logaritma dengan basis natural
log10(x) 	<- logaritma dengan basis 10
pow(x,y) 	<- x pangkat y
sin(x) 		<- sinus
sqrt(x) 	<- akar kuadrat
tan(x) 		<- tangen
*/

int main ()
{
    int x, y, z;

    cout << "Masukkan nilai x : ";
    cin >> x;
    cout << "Masukkan nilai y : ";
    cin >> y;
     
    z = pow (x,y);
    cout << "Nilai dari x^y adalah : " << z << endl;

    return 0;
}