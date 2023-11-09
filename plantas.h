#ifndef plantas_h_
#define plantas_h_

#include <string>

class Plantas {
private:
    std::string tipoFlor;
    std::string color;
    int edad;

public:
    // Constructor
    Plantas(std::string tipo, std::string col, int e) : tipoFlor(tipo), color(col), edad(e) {}

    // Getters
    std::string getTipoFlor() const { return tipoFlor; }
    std::string getColor() const { return color; }
    int getEdad() const { return edad; }

    // Setters
    void setTipoFlor(std::string tipo) { tipoFlor = tipo; }
    void setColor(std::string col) { color = col; }
    void setEdad(int e) { edad = e; }
};


#endif // plantas_h_
