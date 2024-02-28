#include <iostream>
using namespace std;
main(){
/*	// variable inicio; incrementar o decrementar
	int i =0;
	int contar =0;
	for( i=4;i<=8;i+=2){//4 hasta 7; 4 hasta 8
		cout<<i<< endl;
		contar++;
		
	}
		cout<<"1 fuera:"<<i<<endl;
		cout<<"ciclos:"<<contar<<endl;
		system("pause");
		*/
		
		/*
		
		for(int i=10;i>=0; i--){
			if(i==5){
				continue;
				cout<<"if"<<endl;
			
			}
			cout<<i<<endl;
		}
		cout<<"fuera del for"<<endl;
		system("pause");
		*/
		/*
		int tam=0;
		int datos[]={10,40,100,250,300};
		tam=sizeof(datos)/sizeof(datos[0]);
		for(int i : datos);
		cout<<i<<endl;
		for (int i=0;i<tam;i++){
			cout<<datos[i]<<endl;
			
			system("pause");
	
		}
		*/
		
		
		int inicio = 0, fin = 0, res = 0;
		
		cout<<"ingrese tabla inicial:";
		cin>>inicio;
		cout<<"ingrese tabla final:";
		cin>>fin;
		
		
		for (int rango=inicio;rango<=fin;rango++){
			cout<<"tabla del"<<rango<<endl;
			
			for(int i=1;i<=10;i++){
			res= rango * i;
			cout<<rango<<" x " << i <<" ="<<res<<endl;
			}
	
		}
		
		
		}
	
	
	
	
	
