#include<iostream>
#include<windows.h>
#include "cliente.h"
#include "habitaciones.h"
using namespace std; 

int main(){
	int opcion;
	cout<<"\n----BIENVENIDOS AL HOTEL EL 'TELO'----\n"<<endl;
	
	while(opcion!=9){ //Impresi�n del men� en la pantalla
	
	    cout<<"Seleccione una opci�n:"<<endl<<endl;
	    cout<<"1) Cliente"<<endl;
	    cout    <<"2) Habitaciones"<<endl;
cout	        <<"3) Reservas"<<endl;
	cout        <<"4) Salir del programa"<<endl;
	    cout<<"Elige una opcion ";
	    cin>>opcion;
	    cout<<endl;
	    
	    switch(opcion){
	    	case 1:
	    		clienteHotel();
	    		break;
	    	case 2:
	    		habitacionesHotel();
	    		break;
	    	case 3:
	    		break;
	    	case 4:
	    		break;
	    	case 5:
	    		break;
	    	case 6:
	    		break;
	    	case 7:
	    		break;
	    	case 8:
	    		break;
	    	case 9:
	    		cout<<"Saliendo...";
	    		break;
	    	default:
	    			cout<<"ERROR: Alternativa no v�lida, intente de nuevo..."<<endl<<endl;
	    		break;
		}
    }
    return 0;
}
