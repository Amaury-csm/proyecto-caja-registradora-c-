#include <iostream>
#include <vector> 
using namespace std;
int main()
{
    float devuelta,c,sumacosto=0,caja = 6000,pago;
    int n,p;
   cout<<"¡¡¡¡ PRODUCTOS DE LA TIENDA !!!! : "<<endl;
        cout<<"zukaritas = 40 pesos----------- {0}"<<endl;
        cout<<"coca = 12 pesos---------- {1}"<<endl;
        cout<<"leche = 15 pesos---------- {2}"<<endl;
        cout<<"atun = 50 pesos---------- {3} "<<endl;
        cout<<"agua 1L = 12 pesos---------- {4}"<<endl;
        cout<<"MARUCHAN = 15 PESOS------- {5} "<<endl;
        cout<<"CAFE = 40 pesos--------- {6}"<<endl;
        cout<<"PASTA = 7 pesos---------- {7} "<<endl;
        cout<<"JAMON KIR = 35 pesos--------- {8}"<<endl;
        cout<<"SALCHICHAS KIR = 40 pesos--------- {9} "<<endl;
        cout<<"PAN BIMBO = 32 pesos----------- {10}"<<endl;
        cout<<"QUESO = 30 pesos---------- {11}"<<endl;
        cout<<"CARNE DE RES = 55 pesos----------- {12}"<<endl;
        cout<<"AZUCAR = 25 pesos----------- {13} "<<endl;
        cout<<"PAPEL DE BAÑO = 32 pesos---------- {14}"<<endl;
        cout<<"PASTA DE DIENTES = 30 pesos---------- {15}"<<endl;
    cout<<" ¿Cuantos productos lleva? "<<endl;
    cin>>c;
    for(int n=1;n<=c;n++){
        cout<<" ingresa el producto ";
        cin>>p;
        switch(p)
        {
         case 0 :
         cout<<"zukaritas-------------- 40 pesos"<<endl;
         sumacosto+= 40.0;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 1 :
         cout<<"coca----------- 12 pesos"<<endl;
         sumacosto+= 12;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 2 :
         cout<<"leche-------------15 pesos "<<endl;
         sumacosto+= 15;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 3 :
         cout<<"atun---------------50 pesos"<<endl;
         sumacosto+= 50 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 4 :
         cout<<"agua 1L---------------- 12 pesos"<<endl;
         sumacosto+= 12.0;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 5 :
         cout<<"MARUCHAN-------------15 pesos"<<endl;
         sumacosto+= 15;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 6 :
         cout<<"CAFE---------- 40 pesos"<<endl;
         sumacosto+= 40 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 7 :
         cout<<"PASTA---------- 7 pesos"<<endl;
         sumacosto+= 7 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 8 :
         cout<<"JAMON KIR-----------35 pesos"<<endl;
         sumacosto+= 35.0;
         cout<<"suma de los productos-------- "<<sumacosto<<"PESOS"<<endl;
         break;
         case 9 :
         cout<<"SALCHICHAS KIR-------------40 pesos"<<endl;
         sumacosto+= 40 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 10 :
         cout<<"PAN BIMBO--------------32 pesos "<<endl;
         sumacosto+= 32 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 11 :
         cout<<"QUESO----------- 30 pesos"<<endl;
         sumacosto+= 30 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 12 :
         cout<<"CARNE DE RES----------55 pesos"<<endl;
         sumacosto+= 55.0;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 13 :
         cout<<"AZUCAR-------------25 pesos"<<endl;
         sumacosto+= 25 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         case 14 :
         cout<<"PAPEL DE BAÑO---------- 32 pesos"<<endl;
         sumacosto+= 32 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
        case 15 :
         cout<<"PASTA DE DIENTES----------30 pesos"<<endl;
         sumacosto+= 30 ;
         cout<<"suma de los productos-------- "<<sumacosto<<" PESOS"<<endl;
         break;
         default:
         cout<<" vuelva a poner el producto "<<endl;
         break;
         
        }
        }
    cout<<"ingresa el pago de los productos"<<endl;
    cin>>pago;
    if(pago >= sumacosto)
    {
        devuelta = pago - sumacosto;
        caja = caja + pago;
        caja = caja - devuelta;
        cout<< "el costo total es: "<<sumacosto<<" pesos "<<", se le devuelve: "<<devuelta<<" pesos "<<", la caja tiene: "<<caja<<" pesos"<<endl;
    }else
    cout<<"le falta dinero prro, ¡ FUERA DE AQUI ! ";
    return 0;
}





