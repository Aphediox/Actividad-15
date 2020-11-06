#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::string> cadenas ;
    std::string op;
    while (true)
    {
        std::cout << "1) Agregar al final" << std::endl;
        std::cout << "2) Mostrar" << std::endl;
        std::cout << "3) Inicializar " << std::endl;
        std::cout << "4) Frente " << std::endl;
        std::cout << "5) Ultimo " << std::endl;
        std::cout << "6) Ordenar " << std::endl;
        std::cout << "7) Insertar" << std::endl;
        std::cout << "8) Eliminar" << std::endl;
        std::cout << "9) Eliminar ultimo" << std::endl;
        std::cout << "0) Salir " << std::endl;
        std::getline(std::cin, op);
        if (op == "1")
        {   std::string aux;
            std::cout << "Cadena : " ;
            std::getline(std::cin, aux);
            cadenas.push_back(aux);
        }
        else if (op == "2" ){
            for (size_t i = 0; i < cadenas.size(); i++){
                std::cout << cadenas[i] << ", ";
            }
            std::cout << std::endl;
        }
        else if (op == "3"){
            size_t n;
            std::string aux2;

            std::cout << "Tam: ";
            std::cin >> n; std::cin.ignore();
            std::cout << "Cadena: ";
            std::getline(std::cin, aux2);

            cadenas = std::vector<std::string>(n, aux2);

        }
        else if ( op == "4"){
            if(cadenas.empty()){
                std::cout << "Vector vacio. "<< std::endl;
            }
            else{
                std::cout << cadenas.front() << std::endl;
            }
        }
        else if (op == "5"){
            if(cadenas.empty()){
                std::cout << "Vector vacio. "<< std::endl;
            }
            else{
                std::cout << cadenas.back() << std::endl;
            }
        }
        else if(op == "6"){
            //sort(cadenas.begin(), cadenas.end());
            sort(cadenas.begin(), cadenas.end(), std::greater<std::string>());        
        }
        else if (op == "7"){
            size_t n;
            std::string aux;
            std::cout << "Posicion: ";
            std::cin >> n; std::cin.ignore();
            std::cout << "Cadena: ";
            std::getline(std::cin, aux);

            if( n >= cadenas.size()){
                std::cout << "Posicion no valida" << std::endl;
            }
            else{
                cadenas.insert(cadenas.begin()+n, aux);
            }

        }
        else if(op == "8"){
            size_t n;
            std::cout << "Posicion: ";
            std::cin >> n; std::cin.ignore();

            if(n >= cadenas.size()){
                std::cout << "Posicion no valida." << std::endl;
            }
            else{
                cadenas.erase(cadenas.begin()+n);
            }
        }
        else if( op == "9"){
            if(cadenas.empty()){
                std::cout << "Vector vacio. " << std::endl;
            }
            else {
                cadenas.pop_back();
            }
        }
        else if (op == "0" ){
            break;
        }
    }
    
    return 0;
}