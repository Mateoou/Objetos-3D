#include <iostream>
using namespace std;

int main() {
    // Variables
    int num_vertices, num_caras;
    
    // Pedir vértices
    cout << "Cuantos vertices?: ";
    cin >> num_vertices;
    
    float vertices[num_vertices][3];
    
    for(int i = 0; i < num_vertices; i++) {
        cout << "Vertice " << i+1 << " (x y z): ";
        cin >> vertices[i][0] >> vertices[i][1] >> vertices[i][2];
    }
    
    // Pedir caras
    cout << "\nCuantas caras?: ";
    cin >> num_caras;
    
    int caras[num_caras][10];
    int vertices_por_cara[num_caras];
    
    for(int i = 0; i < num_caras; i++) {
        cout << "Cuantos vertices para cara " << i+1 << "?: ";
        cin >> vertices_por_cara[i];
        
        cout << "Indices (separados por espacio): ";
        for(int j = 0; j < vertices_por_cara[i]; j++) {
            cin >> caras[i][j];
        }
    }
    
    // Mostrar resultados
    cout << "\nVertices:\n";
    for(int i = 0; i < num_vertices; i++) {
        cout << i+1 << ". (" << vertices[i][0] << ", " 
             << vertices[i][1] << ", " << vertices[i][2] << ")\n";
    }
    
    cout << "\nCaras:\n";
    for(int i = 0; i < num_caras; i++) {
        cout << i+1 << ". [";
        for(int j = 0; j < vertices_por_cara[i]; j++) {
            cout << caras[i][j];
            if(j != vertices_por_cara[i]-1) cout << " ";
        }
        cout << "]\n";
    }

    return 0;
}
