/*
  important notes!!!
  user : a1
  pass : a2
*/

#include <iostream>
using namespace std;

int main() {
    string usr, pass;
    float panjang, lebar, alas, tinggi, luas;
    char confirm;
    int prog;

    do {
        system("cls");
        cout << "\n\n\n\n\n\n";
        cout << "                       ============================================" << endl;
        cout << "                                     >>  user : ";
        cin >> usr;

        cout << "                                     >>  pass : ";
        cin >> pass;
        cout << "                       ============================================" << endl;

        if (usr == "a1" && pass == "a2"){
            do {
                system("cls");
                cout << "\n\n\n\n\n\n";
                cout << "                       ============================================" << endl << endl;
                cout << "                             >> Choose the program (1 or 2) : ";
                cin >> prog;

                if (prog == 1) {
                    cout << "\n";
                    cout << "                       ____________________________________________" << endl << endl;
                    cout << "                         [Program Penghitung Luas Persegi Panjang]" << endl << endl;
                    cout << "                             >> Masukkan Panjang : ";
                    cin >> panjang;
                    cout << "                             >> Masukkan Lebar   : ";
                    cin >> lebar;

                    luas = panjang * lebar;

                    cout << "\n";
                    cout << "                       ____________________________________________" << endl << endl;
                    cout << "                             >> Luas persegi panjang adalah " << luas << endl << endl;
                    cout << "                             >> Input data lagi (Y/T) ? : ";
                    cin >> confirm;
                    system("cls");

                } else if (prog == 2) {
                    cout << "\n";
                    cout << "                       ____________________________________________" << endl << endl;
                    cout << "                            [Program Penghitung Luas Segitiga]" << endl << endl;
                    cout << "                             >> Masukkan alas : ";
                    cin >> alas;
                    cout << "                             >> Masukkan tinggi : ";
                    cin >> tinggi;

                    luas = 0.5 * alas * tinggi;

                    cout << "\n";
                    cout << "                       ____________________________________________" << endl << endl;
                    cout << "                             >> Luas segitiga adalah " << luas << endl << endl;
                    cout << "                             >> Input data lagi (Y/T) ? : ";
                    cin >> confirm;

                } else {
                    cout << "\n";
                    cout << "                       ____________________________________________" << endl << endl;
                    cout << "                             >> Program not found ... " << endl << endl;
                    cout << "                             >> Input data lagi (Y/T) ? : ";
                    cin >> confirm;
                }
            } while (confirm == 'Y' || confirm ==  'y');

            cout << "\n";
            cout << "                       ---------------------!!!--------------------" << endl << endl;
            cout << "                                 Please enter to close ... ";
            getchar();

        } else if (usr != "a1" && pass == "a2") {

            cout << "\n";
            cout << "                              >> Sorry username incorrect !!! " << endl << endl;
            cout << "                              >> Input pass lagi (Y/T) ? : ";
            cin >> confirm;
            cout << "\n";
            cout << "                       ============================================" << endl;

        } else if (usr == "a1" && pass != "a2") {

            cout << "\n";
            cout << "                              >> Sorry password incorrect !!! " << endl << endl;
            cout << "                              >> Input pass lagi (Y/T) ? : ";
            cin >> confirm;
            cout << "\n";
            cout << "                       ============================================" << endl;

        } else {

            cout << "\n";
            cout << "                         >> Sorry username & password incorrect !!! " << endl << endl;
            cout << "                         >> Input pass lagi (Y/T) ? : ";
            cin >> confirm;
            cout << "\n";
            cout << "                       ============================================" << endl;

        }
    } while (confirm == 'Y' || confirm == 'y');
    cin.get();
    return 0;
}
