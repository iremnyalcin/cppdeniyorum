#include <iostream>

using namespace std;


int main() {
    int a;
    int b;
    string soru = "1.Sayıyı girin: ";

    cout << soru;
    cin >> a;
    soru = "2.Sayıyı girin: ";

    cout << soru;
    cin >> b;
    string carpım = "Sayıların çarpımı ";
    string bolum = "Sayıların bolumu ";
    string toplam = "Sayıların toplamı ";
    string cıkarma = "Sayıların çıkarma ";
    cout << toplam << a + b << std::endl;
    cout << cıkarma << a - b << std::endl;
    cout << bolum << a / b << std::endl;
    cout << carpım << a * b << std::endl;

}
