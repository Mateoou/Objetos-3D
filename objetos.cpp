#include <iostream>
using namespace std;
int main(){
int opción=0;
string menu_v="1=vertices";
string menu_c="2=caras";
string menu_r="3=mostrar resultados";
string menu_f="4=fin";
// Lista de vertices y caras
int num_vertices=0,num_caras=0;
int vertices_x[100];
int vertices_y[100];
int vertices_z[100];
int caras[100];

while(opción!=4){
//muestra el menu y pide una opción
cout<<"\n------MENU------"<<endl;
cout<<menu_v<<endl;
cout<<menu_c<<endl;
cout<<menu_r<<endl;
cout<<menu_f<<endl;
cout<<"Que quiere hacer?: ";
cin>>opción;
//opción 1    
if(opción==1){
cout<<"Ingrese la cantidad de vertices (max 100): ";
cin>>num_vertices;
if(num_vertices<=0||num_vertices>100){
cout<<"Cantidad inválida. Debe ser entre 1 y 100."<<endl;
num_vertices=0;
}else{
cout<<"Ingrese los "<<num_vertices<<" vertices:"<<endl;
for(int i=0;i<num_vertices;i++){
cout<<"Vertice "<<(i+1)<<" coordenada x: ";
cin>>vertices_x[i];
cout<<"Vertice "<<(i+1)<<" coordenada y: ";
cin>>vertices_y[i];
cout<<"Vertice "<<(i+1)<<" coordenada z: ";
cin>>vertices_z[i];
}
cout<<"Vertices guardados correctamente."<<endl;
}
}
//opción 2
if(opción==2){
cout<<"Ingrese la cantidad de caras (max 100): ";
cin>>num_caras;
if(num_caras<=0||num_caras>100){
cout<<"Cantidad inválida. Debe ser entre 1 y 100."<<endl;
num_caras=0;
}else{
cout<<"Ingrese las "<<num_caras<<" caras:"<<endl;
for(int i=0;i<num_caras;i++){
cout<<"Cara "<<(i+1)<<": ";
cin>>caras[i];
}
cout<<"Caras guardadas correctamente."<<endl;
}
}
//opción 3
if(opción==3){
cout<<"\n-----RESULTADOS-----"<<endl;
// Mostrar vértices en formato "v x y z"
cout<<"Vertices ("<<num_vertices<<"):"<<endl;
if(num_vertices==0){
cout<<"No hay vertices registrados."<<endl;
}else{
for(int i=0;i<num_vertices;i++){
cout<<"v "<<vertices_x[i]<<" "<<vertices_y[i]<<" "<<vertices_z[i]<<endl;
}
}
// Mostrar caras
cout<<"Caras ("<<num_caras<<"): ";
if(num_caras==0){
cout<<"No hay caras registradas.";
}else{
for(int i=0;i<num_caras;i++){
cout<<caras[i];
if(i<num_caras-1)cout<<", ";
}
}
cout<<endl;
}
}
return 0;
}
