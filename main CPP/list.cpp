#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <thread>
#include <fstream>
#include <string>

using namespace std;
void menu();
void BV();
void BBG();
void BBP();

int main()
{
    char name[100];
    int pilih;

    system("cls");
    printf("*************************************\n");
    printf("*** SELAMAT DATANG DI BELAJAR C++ ***\n");
    printf("**************************************\n");

    printf("masukan nama: ");
    fgets(name, sizeof(name), stdin); // mengambil input dari user dan disimpan dalam variabel name
    sleep(3);

    printf("halo %s\n", name);
    printf("Menyiapkan Program: ");
    for (int i = 10; i > 0; --i)
    {
        cout << i << "s" << endl;
        this_thread::sleep_for(chrono::seconds(1)); // menunggu selama 1 detik
    }

    system("cls");
    menu();
    return 0;
}

void menu()
{
    int pilih;
    int jumlah_pilihan = 4;
    bool input_valid = false; // variabel untuk menandai apakah input valid

    while (!input_valid)
    {
        printf("======================\n");
        printf("==== LIST BELAJAR ====\n");
        printf("======================\n");

        printf("1. Belajar Variabel\n");
        sleep(1);
        printf("2. Belajar Buat Game\n");
        sleep(1);
        printf("3. Belajar Buat Program\n");
        sleep(1);
        printf("4. exit\n\n");
        sleep(2);

        printf("masukan angka yang terdaftar: ");

        // validasi input pengguna
        if (scanf("%d", &pilih) != 1)
        {
            system("cls");
            // jika input tidak berupa angka
            printf("input tidak valid masukan angka\n\n");
            // membersihkan buffer input
            while (getchar() != '\n')
                ;
        }
        else
        {
            // jika input input dalam angka
            if (pilih >= 1 && pilih <= jumlah_pilihan)
            {
                // jika angka dalam rentang yang valid
                switch (pilih)
                {
                case 1:
                    system("cls");
                    sleep(2);
                    BV();
                    break;

                case 2:
                    system("cls");
                    sleep(2);
                    BBG();
                    break;

                case 3:
                    system("cls");
                    sleep(2);
                    BBP();
                    break;

                case 4:
                    printf("terima kasih sudah berkunjung disini \n\n");
                    sleep(2);
                    for (int i = 5; i > 0; --i)
                    {
                        cout << "sedang menghapus program " << i << "s" << endl;
                        this_thread::sleep_for(chrono::seconds(1)); // menunggu selama 1 detik
                    }

                    system("cls");
                    sleep(1);
                    exit(1);
                    break;

                default:
                    printf("ngasal loooo\n\n");
                    break;
                }
                input_valid = true; // set input valid menjadi true agar keluar dari loop
            }
            else
            {
                system("cls");
                printf("pilihan tidak valid\n\n");
            }
        }
    }
}

void BV()
{
    char lanjut;
    ifstream file("C:/Users/user/Desktop/main-cpp/tools/belajar_cpp.txt");
    string line;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            cout << line << endl;
        }
        file.close();
    }
    else
    {
        cout << "Gagal membuka file" << endl;
    }
    printf("\nini Belajar variabel\n");
    printf("ingin kembali ke menu ? (pencet [Y] jika lanjut): ");
    cin >> lanjut;
    if (lanjut == 'y' || lanjut == 'Y') // ini pakai ternary
    {
        system("cls");
        menu();
    }
    else
    {
        printf("terima kasih");
        sleep(1);
        system("cls");
        exit(0);
    }
}

void BBG()
{
    char lanjut;
    printf("ini bagaimana cara buat game dari cpp\n\n");
    printf("apakah kamu ingin kembali ke menu ? (pencet [Y] jika lanjut): ");
    cin >> lanjut;
    if (lanjut == 'y' || lanjut == 'Y') //ini pakai ternary
    {
        system("cls");
        menu();
    }
    else
    {
        printf("terima kasih");
        sleep(1);
        system("cls");
        exit(0);
    }
}

void BBP()
{
    char lanjut;
    printf("ini adalah pemrograman cpp\n\n");
    printf("apakah kamu ingin kembali ke menu ? (pencet [Y] jika lanjut): ");
    cin >> lanjut;
    if (lanjut == 'y' || lanjut == 'Y') // ini pakai ternary
    {
        system("cls");
        menu();
    }
    else
    {
        printf("terima kasih");
        sleep(1);
        system("cls");
        exit(0);
    }
}
