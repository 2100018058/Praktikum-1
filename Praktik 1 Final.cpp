#include <iostream>
using namespace std;
int main()
{
  int bulan1,bulan2,bonus1,bonus2,gajibonus1,gajibonus2,gajipokok1=22000000,gajipokok2=28000000;
  cout<<"Berapa Bulan Tim 1 Mengerjakan Fitur Login ? ";cin>>bulan1;
  
  
    if (bulan1<=5)
  {
    bonus1=22000000*0.06;
    gajibonus1= 22000000+bonus1;
  }
  
  else if (bulan1>5)
  {
	bonus1=0;
  }
  
  
  cout<<"Berapa bulan tim 2 mengerjakan Fitur Responsive ?"; cin >>bulan2;


  if (bulan2<=5)
  {
    bonus2 = 28000000*0.06;
    gajibonus2 = 28000000+bonus2;
    cout <<endl;
  }
    
  else if(bulan2>5)
  {
  	bonus2=0;
  }
  
  
  
  cout<<"===== SLIP GAJI DEVELOPER FITUR LOGIN ====="<<endl;
  cout<<"GAJI POKOK 	= "<<"22000000 "<<endl;
  cout<<"Bonus 		= "<<bonus1<<endl;
  cout<<"Total		= "<<gajipokok1+bonus1<<endl;
  
  cout<<"===== SLIP GAJI DEVELOPER FITUR RESPONSIVE ====="<<endl;
  cout<<"GAJI POKOK 	= "<<"28000000 "<<endl;
  cout<<"Bonus 		= "<<bonus2<<endl;
  cout<<"Total		= "<<gajipokok2+bonus2<<endl;
  
  return 0;
}