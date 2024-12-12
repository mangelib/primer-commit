#include <iostream>
using namespace std;
//prueba pra git
int main(){
    //se decalaran las variables que hacen funcionar al cajero
    float saldo_inicial =1000,retiro,deposito,transferencia;
    int opc;

    do{
        cout<<"\t CAJERO ATM"<<endl;
        cout<<"1. consultar saldo "<<endl;
        cout<<"2. Deposito de efectivo "<<endl;
        cout<<"3. Retiro de efectivo "<<endl;
        cout<<"4. hacer transferencias "<<endl;
        cout<<"0. salir del cajero"<<endl;
        cin>>opc;

        //Menu de opciones estructura
    if(opc == 1){// consulta de saldo

        cout<<"Su saldo es de: "<<saldo_inicial<<"\n\n"<<endl;

    }else if (opc ==2){//depositos

    cout<<"Digite la cantidad a depositar: "; cin>>deposito;
    saldo_inicial+=deposito;

    cout<<"Su saldo es de: "<<saldo_inicial<<"\n\n"<<endl;

    }else if (opc == 3){//retiros

    cout<<"Digite la cantidad a retirar: "; cin>>retiro;
    saldo_inicial-=retiro;

    cout<<"Su saldo es de: "<<saldo_inicial<<"\n\n"<<endl;

    }else if (opc ==4){//transferencias

    cout<<"Digite la cantidad a transferir: "; cin>>transferencia;
    saldo_inicial-=transferencia;

    cout<<"Su saldo es de: "<<saldo_inicial<<"\n\n"<<endl;
    }
    }while(opc!=0); cout<<"Gracias por usar nuestros servivios.............."<<endl;
    return 0;
}
