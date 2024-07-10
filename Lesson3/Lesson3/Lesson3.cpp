#include <iostream>

using namespace std;

int main()
{
    cout << "gedilecek yol = ";
    double s;
    cin >> s;
    cout << "\nbenzinin 100 km xerci = ";
    double b100;
    cin >> b100;
    double const benzinqiymet = 0.9;
    double total = b100 / 100 * s * benzinqiymet;
    cout << "\nxerc olunan pul = " << total << endl;


    double h;
    cout << "hundurluyu daxil edin = ";
    cin >> h;
    double l;
    cout << "\nuzunlugu daxil edin = ";
    cin >> l;
    double w;
    cout << "\neni daxil edin = ";
    cin >> w;

    double oboyS = (h * l + h * w) * 2;
    cout << "Lazim olan oboy miqdari = " << oboyS<<endl;



    cout << "otaq sayi = ";
    double otqsay;
    cin >> otqsay;
    double tvsay = otqsay * 1;
    double zibilsay = otqsay * 1;
    double skafsay = otqsay * 1;
    cout << "otaqlarda birlikde " << tvsay << " televizor, " << zibilsay << " zibil qabi, " << skafsay << " skaf var"<<endl;


    cout << "kitab sehfe sayi =";
    double kitabsayi;
    cin >> kitabsayi;
    cout << "kitab oxuma suretiniz = ";
    double oxusuret;
    cin >> oxusuret;
    double gunler = kitabsayi / oxusuret;
    cout << "siz kitabi "<<gunler<<"-e gune qutaracaqsiniz"<<endl;

    double q12;
    cout << "12 qiymetinizin  sayi = ";
    cin >> q12;
    double q11;
    cout << "11 qiymetinizin  sayi = ";
    cin >> q11;
    double q10;
    cout << "10 qiymetinizin  sayi = ";
    cin >> q10;
    double q9;
    cout << "9 qiymetinizin  sayi = ";
    cin >> q9;    
    double q8;
    cout << "8 qiymetinizin  sayi = ";
    cin >> q8;
    double totalqizil = q12 * 5 + q11 * 4 + q10 * 3 + q9 * 2 + q8 * 1;
    cout << "sizin qizil sayini = " << totalqizil;

}
