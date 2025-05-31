#include<iostream>
#include<string>
using namespace std;

int main (){

	 int nama;
	 string nim ,saldo,alamat, jenis barang;
    
    cout <<"==============================="<<endl;
    cout << "nama:" <<endl;
    cin >> nama;
    cout<<"nim:"<<endl;
    cin >> nim;
    cout<<"saldo:"<<endl;
    cin >> saldo;
     cout<<" alamat:";
    cin >> alamat;

    cout <<" jenis barang:"<<endl;
     cout << " 1 meja  "<<endl;
     cout << " 2 lemari "<<endl;
      cout << " 3 kalkulator "<<endl;
       cout << " 4 pintu "<<endl;
        cout << " 5 kaca "<<endl;
      
     cout<<"jenis barang:"<<endl;
     
     swicht (jenis barang){
     	case 1 ;
     	  "1 meja'"; 
     	 case 2 ;
     	 "2 meja";
        case 3 ;
     	 "3 meja";
     	 case 4 ;
     	 "4 meja";
     	 case 5;
     	 "5 meja";
	 }
	 cout << Barang yang di pilaih 1-3<<barang<<endl
	  
	   
	  
	  return 0;
   
}
