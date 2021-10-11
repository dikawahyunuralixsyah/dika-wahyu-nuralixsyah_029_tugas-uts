#include <iostream>

using namespace std;

int main()
{

//Data

    
	int umur;

    //Entry

    cout<< "--------------------------"<<endl;
    cout<< "Kategori Umur Pada Manusia"<< endl;
    cout<< "--------------------------"<<endl;


    //Data Input


    

    start:
	cout<<"Masukkan Umur anda	= ";
	cin>>umur;


	//Declaration

	if(umur>=60 && umur<=100){
		cout<<"\n Lansia";

	}else if(umur>=30 && umur<=59){
		cout<<"Dewasa";

	}else if(umur>=18 && umur<=29){
		cout<<"Pemuda";

	}else if(umur>=12 && umur<=17){
		cout<<"Remaja";

	}else if(umur>=6 && umur<=11){
		cout<<"Anak-anak";

    }else if(umur>=3 && umur<=5){
		cout<<"Balita";

    }else if(umur>=1 && umur<=2){
		cout<<"Batita";

    }else if(umur>=0 && umur<=0){
		cout<<"Bayi";


	}else {
		cout<<"Umur yang anda masukan salah"<<endl;
		goto start;
	}

    return 0;
}
