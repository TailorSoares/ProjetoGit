#include <iostream>
#include <cmath>
using namespace std;
int main() 
{ 
	
	int codigo, pais;
	float peso,imposto,precobruto, precototal,pesogramas;


    cin>>codigo>>peso>>pais;
    
    if (1<=codigo and codigo<5)  {
		
	precobruto=peso*10;
}
	else if (5<=codigo and codigo<8)  {
		
	precobruto=peso*25;
}
	else if (8<=codigo and codigo<=10)  {
		
	precobruto=peso*35;
}			
	  
	
	
	
    if (pais==1)  {
		
    imposto=0;
}
    else if (pais==2)  {
		
    imposto=0.15*precobruto;
}

    else if (pais==3)  {
		
	imposto=0.25*precobruto;
}

    pesogramas=peso*1000;
    precototal=precobruto+imposto;
	
	
   cout<<pesogramas<<"\n" << precobruto*1000<<"\n" <<imposto*1000 <<"\n" <<precototal*1000;
   
return 0;

}   
