#include<iostream>
#include<conio.h>
#include<fstream>
#include<string>
#include<iomanip>
#include<iostream>

using namespace std;

typedef struct {
	string jenisSusu;
	string ukuranSusu;
	int hargaSusu;
} susu;

susu dataSusu[9];

typedef struct {
	string noPenjualan;
	string namaCustomer;
	string jenisSusu;
	string ukuranSusu;
	int jumlahBeli;
	int hargaSusu;
	double diskon;
	int subTotal;
	double total;
} penjualan;

penjualan dataPenjualan[100];
penjualan temp;

int jumlahDataSusu = sizeof(dataSusu) / sizeof(dataSusu[0]);
int jumlahDataPenjualan;

void menu()
{
	system("CLS");
	cout<<endl<<endl;
	cout<<"	====================================================="<<endl;
	cout<<"		Menu Aplikasi Penjualan Susu Kotak"<<endl;
	cout<<"	====================================================="<<endl<<endl;
	cout<<"		1. Input Data Penjualan"<<endl;
	cout<<"		2. Tampil Data Penjualan"<<endl;
	cout<<"		3. Cari Data Penjualan"<<endl;
	cout<<"		4. Urutkan Data Penjualan (Desc)"<<endl;
	cout<<"		5. Export Data Penjualan"<<endl;
	cout<<"		6. Import Data Penjualan"<<endl;
	cout<<"		7. Exit"<<endl;
	cout<<endl<<endl;
}

void isiSusu()
{
	dataSusu[0].jenisSusu = "Dancow";
	dataSusu[0].ukuranSusu = "Kecil";
	dataSusu[0].hargaSusu = 15000;
	
	dataSusu[1].jenisSusu = "Dancow";
	dataSusu[1].ukuranSusu = "Sedang";
	dataSusu[1].hargaSusu = 20000;
	
	dataSusu[2].jenisSusu = "Dancow";
	dataSusu[2].ukuranSusu = "Besar";
	dataSusu[2].hargaSusu = 25000;
	
	dataSusu[3].jenisSusu = "Bendera";
	dataSusu[3].ukuranSusu = "Kecil";
	dataSusu[3].hargaSusu = 14000;
	
	dataSusu[4].jenisSusu = "Bendera";
	dataSusu[4].ukuranSusu = "Sedang";
	dataSusu[4].hargaSusu = 19000;

	dataSusu[5].jenisSusu = "Bendera";
	dataSusu[5].ukuranSusu = "Besar";
	dataSusu[5].hargaSusu = 23000;
	
	dataSusu[6].jenisSusu = "SGM";
	dataSusu[6].ukuranSusu = "Kecil";
	dataSusu[6].hargaSusu = 13000;
	
	dataSusu[7].jenisSusu = "SGM";
	dataSusu[7].ukuranSusu = "Sedang";
	dataSusu[7].hargaSusu = 18000;
	
	dataSusu[8].jenisSusu = "SGM";
	dataSusu[8].ukuranSusu = "Besar";
	dataSusu[8].hargaSusu = 22000;
}

int search(susu a[], int jml, string jenis, string ukuran)
{
	for (int i = jml - 1; i > -2; i--)
	{
		if(i == -1 || (a[i].jenisSusu == jenis && a[i].ukuranSusu == ukuran))
		{
			return i;
		}
	}
}

void inputData()
{
	system("CLS");
	char ulangi = 'y';
	int a = 0, b = 0;
	int qtyPenjualan;
	string jenisSusu, ukuranSusu;
	double diskon;
	if(jumlahDataPenjualan != 0)
	{
		a = jumlahDataPenjualan - 1;
	} 
	else {
		jumlahDataPenjualan = 0;
	}
	cout<<endl;
	cout<<"	====================================================="<<endl;
	cout<<"		TOKO KELONTONG KERONCONGAN"<<endl;
	cout<<"	====================================================="<<endl<<endl;
	cout<<"		A. Susu Dancow"<<endl;
	cout<<"			1. Ukuran Kecil : 15.000"<<endl;
	cout<<"			2. Ukuran Sedang : 20.000"<<endl;
	cout<<"			3. Ukuran Besar : 25.000"<<endl;
	cout<<"		B. Susu Bendera"<<endl;
	cout<<"			1. Ukuran Kecil : 14.000"<<endl;
	cout<<"			2. Ukuran Sedang : 19.000"<<endl;
	cout<<"			3. Ukuran Besar : 23.000"<<endl;
	cout<<"		C. Susu SGM"<<endl;
	cout<<"			1. Ukuran Kecil : 13.000"<<endl;
	cout<<"			2. Ukuran Sedang : 18.000"<<endl;
	cout<<"			3. Ukuran Besar : 22.000"<<endl;
	cout<<"	====================================================="<<endl<<endl;
	cout<<endl<<endl;
	
	do {
		cout<<"	Masukkan No Penjualan (Alphanumeric) : ";
		cin>>dataPenjualan[a].noPenjualan;
		
		cout<<"	Masukkan Nama Customer : ";
		cin>>dataPenjualan[a].namaCustomer;
		
		cout<<"	Masukkan Jenis Susu (A - C) : ";
		cin>>jenisSusu;
		
		jenisSusu = jenisSusu == "A" ? jenisSusu = "Dancow" : (jenisSusu == "B" ? jenisSusu = "Bendera" : (jenisSusu == "C" ? jenisSusu = "SGM" : "ERROR"));
		dataPenjualan[a].jenisSusu = jenisSusu;
		
		cout<<"	Masukkan Ukuran Kaleng (1 - 3) : ";
		cin>>ukuranSusu;
		
		ukuranSusu = ukuranSusu == "1" ? ukuranSusu = "Kecil" : (ukuranSusu == "2" ? ukuranSusu = "Sedang" : (ukuranSusu == "3" ? ukuranSusu = "Besar" : "ERROR"));
		dataPenjualan[a].ukuranSusu = ukuranSusu;
		
		b = search(dataSusu, jumlahDataSusu, jenisSusu, ukuranSusu);
		
		if(b == -1)
		{
			cout<<"	Data Tidak Ditemukan!"<<endl;
		}
		else
		{
			cout<<"	Harga Satuan Barang "<<"Rp. "<<dataSusu[b].hargaSusu<<endl;
			dataPenjualan[a].hargaSusu = dataSusu[b].hargaSusu;
		
			cout<<"	Masukkan Jumlah Yang Dibeli : ";
			cin>>qtyPenjualan;
			dataPenjualan[a].jumlahBeli = qtyPenjualan;
			
			cout<<endl;
			cout<<"	Subtotal : "<<"Rp. "<<dataPenjualan[a].jumlahBeli * dataPenjualan[a].hargaSusu;
			cout<<endl<<endl;
			
			if(qtyPenjualan >= 10 && (ukuranSusu == "Besar")) 
			{
				diskon = 0.1;
			} 
			else if(qtyPenjualan >= 5 && (ukuranSusu == "Sedang" || ukuranSusu == "Besar"))
			{
				diskon = 0.05;
			}
			else if(qtyPenjualan >= 10 && ukuranSusu == "Kecil")
			{
				diskon = 0.02;
			}
			else 
			{
				diskon = 0;
			}
			
			cout<<"	Diskon (%) : "<<diskon * 100<<"%"<<endl;
			dataPenjualan[a].diskon = diskon;
			
			double totalDiskon = dataPenjualan[a].hargaSusu * dataPenjualan[a].jumlahBeli * dataPenjualan[a].diskon;
			double subTotal = (dataPenjualan[a].jumlahBeli * dataPenjualan[a].hargaSusu);
			double total = subTotal - totalDiskon;
			
			dataPenjualan[a].total = total;
			dataPenjualan[a].subTotal = subTotal;
			
			cout<<"	Total Diskon : "<<"Rp. "<<totalDiskon<<endl;
			cout<<"	Total Bayar : "<<"Rp. "<<total<<endl;
			
			a++;
		}
		cout<<endl;
		cout<<"	Tambah Data Lagi ? (y / n) : ";
		cin>>ulangi;
		cout<<endl;
		
	} while(ulangi == 'y' || ulangi == 'Y');
	if(jumlahDataPenjualan != 0)
	{
		jumlahDataPenjualan = a + 1;
	} 
	else 
	{
		jumlahDataPenjualan += a + 1;
	}
}

void tampilData()
{
	system("CLS");
	cout<<endl;
	cout<<"					PENJUALAN SUSU KOTAK"<<endl;
	cout<<"======================================================================================================="<<endl;
	cout<<	setw(12) << "No_Penjualan" << setw(10) << "Jenis" << setw(10) << "Ukuran" << setw(10) << "Harga"
	<< setw(10) << "Jumlah" << setw(10) << "Subtotal" << setw(10) << "Disc(%)" << setw(15) << "Total_Disc" << setw(15) << "Total_Bayar" << endl;
	cout<<"======================================================================================================="<<endl;
	
	for(int a = 0; a < jumlahDataPenjualan - 1; a++)
	{
		cout<< setw(5) << dataPenjualan[a].noPenjualan << setw(15) << dataPenjualan[a].jenisSusu << setw(10) << dataPenjualan[a].ukuranSusu << setw(7)
		<< "Rp." << dataPenjualan[a].hargaSusu << setw(7) << dataPenjualan[a].jumlahBeli << setw(8) << "Rp. " << dataPenjualan[a].subTotal << setw(6) 
		<< dataPenjualan[a].diskon * 100 << "%" << setw(10) << "Rp. " << dataPenjualan[a].subTotal * dataPenjualan[a].diskon << setw(8) << "Rp. " << dataPenjualan[a].total << endl;
	}
	cout<<endl;
}

int searchPenjualan(penjualan a[], int jml, string no)
{
	for(int i = jml - 1; i > -2; i--)
	{
		if(i == -1 || a[i].noPenjualan == no)
		{
			return i;
		}
	}
}

void cariData()
{
	system("CLS");
	string noPenjualan;
	int result = 0;
	char ulangi = 'y';
	
	do {
		cout<<"	====================================================="<<endl;
		cout<<"		Cari Penjualan (Susu Kotak)"<<endl;
		cout<<"	====================================================="<<endl<<endl;
		cout<<endl;
		cout<<"	Masukkan Nomor Penjualan : ";
		cin>>noPenjualan;
		result = searchPenjualan(dataPenjualan, jumlahDataPenjualan, noPenjualan);
		
		if(result == -1)
		{
			cout<<"	Data Tidak Ditemukan!"<<endl;
		}
		else 
		{
			cout<<"	Nomor Penjualan : "<<dataPenjualan[result].noPenjualan<<endl;
			cout<<"	Nama Customer : "<<dataPenjualan[result].namaCustomer<<endl;
			cout<<"	Jenis Susu : "<<dataPenjualan[result].jenisSusu<<endl;
			cout<<"	Ukuran Susu : "<<dataPenjualan[result].ukuranSusu<<endl;
			cout<<"	Harga Susu : "<<dataPenjualan[result].hargaSusu<<endl;
			cout<<"	Jumlah Beli : "<<dataPenjualan[result].jumlahBeli<<endl;
			cout<<"	Diskon (%) : "<<dataPenjualan[result].diskon * 100<<"%"<<endl;
			cout<<"	Subtotal : "<<dataPenjualan[result].subTotal<<endl;	
			cout<<"	Total Bayar : "<<dataPenjualan[result].total<<endl;
			cout<<"	Cari Penjualan Lainnya? (y / n) :";
			cin>>ulangi;
		}
	} while(ulangi == 'y' || ulangi == 'Y');
}

int sorting()
{
	for(int i = 1; i < jumlahDataPenjualan; i++)
	{
		for(int j = jumlahDataPenjualan - 1; j >= i; j--)
		{
			if(dataPenjualan[j].subTotal > dataPenjualan[j - 1].subTotal)
			{
				temp = dataPenjualan[j];
				dataPenjualan[j] = dataPenjualan[j - 1];
				dataPenjualan[j - 1] = temp;
			}
		}
	}
}

void sortingData()
{
	system("CLS");
	sorting();
	cout<<endl;
	cout<<"					PENJUALAN SUSU KOTAK"<<endl;
	cout<<"======================================================================================================="<<endl;
	cout<<	setw(12) << "No_Penjualan" << setw(10) << "Jenis" << setw(10) << "Ukuran" << setw(10) << "Harga"
	<< setw(10) << "Jumlah" << setw(10) << "Subtotal" << setw(10) << "Disc(%)" << setw(15) << "Total_Disc" << setw(15) << "Total_Bayar" << endl;
	cout<<"======================================================================================================="<<endl;
	
	for(int a = 0; a < jumlahDataPenjualan - 1; a++)
	{
		cout<< setw(5) << dataPenjualan[a].noPenjualan << setw(15) << dataPenjualan[a].jenisSusu << setw(10) << dataPenjualan[a].ukuranSusu << setw(7)
		<< "Rp." << dataPenjualan[a].hargaSusu << setw(7) << dataPenjualan[a].jumlahBeli << setw(8) << "Rp. " << dataPenjualan[a].subTotal << setw(6) 
		<< dataPenjualan[a].diskon * 100 << "%" << setw(10) << "Rp. " << dataPenjualan[a].subTotal * dataPenjualan[a].diskon << setw(8) << "Rp. " << dataPenjualan[a].total << endl;
	}
	cout<<endl;
}

void exportData()
{
	system("CLS");
	ofstream file("Data Penjualan Susu Kotak - 2021.txt");
	cout<<endl<<endl;
	if(jumlahDataPenjualan != 0 && file.is_open())
	{
		
		file<<endl;
		file<<"					PENJUALAN SUSU KOTAK"<<endl;
		file<<"======================================================================================================="<<endl;
		file<<	setw(12) << "No_Penjualan" << setw(10) << "Jenis" << setw(10) << "Ukuran" << setw(10) << "Harga"
		<< setw(10) << "Jumlah" << setw(10) << "Subtotal" << setw(10) << "Disc(%)" << setw(15) << "Total_Disc" << setw(15) << "Total_Bayar" << endl;
		file<<"======================================================================================================="<<endl;
	
		for(int a = 0; a < jumlahDataPenjualan - 1; a++)
		{
			file<< setw(5) << dataPenjualan[a].noPenjualan << setw(15) << dataPenjualan[a].jenisSusu << setw(10) << dataPenjualan[a].ukuranSusu << setw(7)
			<< "Rp." << dataPenjualan[a].hargaSusu << setw(7) << dataPenjualan[a].jumlahBeli << setw(8) << "Rp. " << dataPenjualan[a].subTotal << setw(6) 
			<< dataPenjualan[a].diskon * 100 << "%" << setw(10) << "Rp. " << dataPenjualan[a].subTotal * dataPenjualan[a].diskon << setw(8) << "Rp. " << dataPenjualan[a].total << endl;
		}
		file<<endl;
		cout<<"	Data Berhasil Disimpan!"<<endl;
	}
	else
	{
		cout<<"	Data Gagal Disimpan! Data Masih Kosong!"<<endl;
	}
}

void importData()
{
	system("CLS");
	ifstream file("Data Penjualan Susu Kotak - 2021.txt");
	cout<<endl<<endl;
	string line;
	if(file.is_open())
	{
		while(getline(file, line))
		{
			cout<<line<<endl;
		}
		file.close();
	}
	else 
	{
		cout<<"	Gagal Membaca File!"<<endl;
	}
}

int main()
{
	int selectMenu;
	char backToMenu = 'y';
	system("COLOR FD");
	system("CLS");
	isiSusu();
	do {
		menu();
		cout<<endl;
		cout<<"		Pilih Menu [1..6] : ";
		cin>>selectMenu;
		
		switch(selectMenu) {
			case 1:
			inputData();
			break;
			
			case 2:
			tampilData();
			break;
			
			case 3:
			cariData();
			break;
			
			case 4:
			sortingData();
			break;
			
			case 5:
			exportData();
			break;
			
			case 6:
			importData();
			break;
			
			default:
			cout<<"	Pilihan Menu Tidak Ada!"<<endl;
		}
		cout<<"	Kembali Ke Menu (y / n) ? : ";
		cin>>backToMenu;
	} while(backToMenu == 'y' || backToMenu == 'Y');
}
