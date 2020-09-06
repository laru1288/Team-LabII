#ifndef STRUCS_H_INCLUDED
#define STRUCS_H_INCLUDED
struct Campo{
    int ID;
   char Nombres[50];
   char Apellidos[50];
   char Perfil_de_actividad;
    Fecha Fecha_de_nacimiento;
    float Altura;
    float Peso;
    bool Apto_medico;
    bool Estado;
};

struct Fecha{
short día;
short mes;
short anio;
};
#endif // STRUCS_H_INCLUDED
