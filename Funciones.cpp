#include <iostream>
using namespace std;
#include "participante.h"

void cargar_usuario(){
    Campo reg;
    FILE *p;

    p=fopen("archivo.dat","ab");

    if(p==NULL){
        cout<<"No se pudo abrir."<<endl;
        return;
    }

    fwrite(&reg,sizeof(Campo),1,p);
    cout << "Ingrese el ID   : " ;
    cin>>reg.ID;
    cout<< endl;
    cout << "Ingrese el nombre   : ";
     cin>>reg.nombres;
     cout<< endl;
    cout << "Ingrese el apellido : ";
    cin>>reg.apellidos;
    cout<<endl;
    cout << "Ingrese el perfil de actividad : ";
    cin>>reg.Perfil_de_actividad;
    cout<<endl;
    cout << "Ingrese la fecha de nacimiento: "<<endl;
    reg.Fecha_de_nacimiento=cagar_fecha_de_nacimiento();
    cout<<"Ingrese la altura en cms: ";
    cin>>reg.Altura;
    cout<<endl;
    cout<<"Ingrese el Peso en kilogramos: ";
    cin>>reg.Peso;
    cout<<endl;
    cout<<"Ingrese el apto medico: ";
    cin>>reg.Apto_medico;
    cout<<endl;
    cout<<"Ingrese el estado: ";
    cin>>reg.Estado;
    cout<<endl;

    fclose(p);

}

Fecha cagar_fecha_de_nacimiento(){
 Fecha nac;

 cin>>nac.dia;
 cin>>nac.mes;
cin>>nac.anio;

return nac;
}


void mostrar_usuario(Campo reg){
    FILE *p;

    p=fopen("archivo.dat","rb");

    int fread(&reg,sizeof(Campo),1,p);

    cout << "ID   : " << reg.ID << endl;
    cout << "Nombres   : " << reg.nombres << endl;
    cout << "Apellidos : " << reg.apellidos<< endl;
    cout << "Perfil de actividad : " << reg.Perfil_de_actividad << endl;
    cout << "Fecha de nacimiento: ";
    mostrar_fecha_de_nacimiento(Fecha Fecha_de_nacimiento);
    cout<<" Altura: "<<reg.Altura<<endl;
    cout<<"Peso: "<<reg.Peso<<endl;
    cout<<"Apto medico: "<<reg.Apto_medico<<endl;
    cout<<"Estado: "<<reg.Estado<<endl;

    fclose(p);
}

void mostrar_fecha_de_nacimiento(Fecha nac){

    cout<<nac.día<<" / "<<nac.mes<<" / "<<nac.anio<<" / "<<endl;

}

void listar_usuarios(){
    Participante reg;
    FILE *f;
    int aux;
    f = fopen("datos/participantes.dat", "rb");
    if (f == NULL){
        cout << "No se puede leer el archivo.";
        return;
    }
    while(fread(&reg, sizeof(Participante), 1, f)){
        mostrar_participante(reg);
        cout << endl;
    }
    fclose(f);
}



int buscar_participante(int codigo_buscado){
    Participante reg;
    FILE *f;
    int pos=0;
    f = fopen("datos/participantes.dat", "rb");
    if (f == NULL){
        return -1;
    }
    while(fread(&reg, sizeof(Participante), 1, f)){
        if (codigo_buscado == reg.codigo){
            fclose(f);
            return pos;
        }
        pos++;
    }
    fclose(f);
    return -1;
}


bool guardar_participante(Participante reg){
    bool grabo;
    FILE *f;
    f = fopen("datos/participantes.dat", "ab");
    if (f == NULL){
        return false;
    }
    grabo = fwrite(&reg, sizeof(Participante), 1, f);
    fclose(f);
    return grabo;
}









