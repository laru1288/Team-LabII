#include <iostream>
#include <cstdio>
#include "Strucs.h"
#include "Funciones.h"
using namespace std;

int main()
{
   Campo reg;
   int m_pricipal,m_usuario;

   do{
   cout<<"MENU PRINCIPAL"<<endl;
   cout<<"--------------------------"<<endl;
   cout<<"1) USUARIOS"<<endl;
   cout<<"2) ENTRENAMIENTOS"<<endl;
   cout<<"3) REPORTES"<<endl;
   cout<<"4) CONFIGURACION"<<endl;
   cout<<"--------------------------"<<endl;
   cout<<"0) SALIR DEL PROGRAMA"endl;
   cin>>m_pricipal;
   switch(m_pricipal){
   case 1:
       do{
   cout<<"MENU DE USUARIO"<<endl;
   cout<<"--------------------------"<<endl;
   cout<<"1) NUEVO USUARIO"<<endl;
   cout<<"2) MODIFICAR USUARIO"<<endl;
   cout<<"3) LISTAR USUARIO POR ID"<<endl;
   cout<<"4) LISTAR TODOS LOS USUARIOS"<<endl;
   cout<<"5) ELIMINAR USUARIO"<<endl;
   cout<<"--------------------------"<<endl;
   cout<<"0) VOLVER AL MENU PRINCIPAL"<<endl;
   cin>>m_usuario;
   switch(m_usuario){
   case 1:
       cargar_usuario();
   break;
   ///Completar!!!!!!
   case 2:

    break;
   case 3:

    break;

   case 4:

    break;

   case 5:

    break;
   case 0:
    break;

    default:
    cout<<"Error!!!"<<endl;
    cout<<"Ingrese una opcion valida."<<endl;
    break;

   }



       }while(m_usuario!=0);
       break;

   case 2:

    break;

   case 3:

    break;

   case 4:

    break;

   case 0:

    break;

    ///Completar!!!!!
   default:
    cout<<"Error!!!"<<endl;
    cout<<"Ingrese una opcion valida."<<endl;
    break;

   }
   }while(m_pricipal!=0);




    return 0;
}
