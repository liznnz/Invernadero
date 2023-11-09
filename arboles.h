#ifndef arboles_h_
#define arboles_h_

#include <string>

class Arboles {
private:
    int edad;
    float ancho;
    float alto;
    int numRamas;

public:
    // Constructor
    Arboles(int e, float a, float alt, int ramas) : edad(e), ancho(a), alto(alt), numRamas(ramas) {}

    // Getters
    int getEdad() const { return edad; }
    float getAncho() const { return ancho; }
    float getAlto() const { return alto; }
    int getNumRamas() const { return numRamas; }

    // Setters
    void setEdad(int e) { edad = e; }
    void setAncho(float a) { ancho = a; }
    void setAlto(float alt) { alto = alt; }
    void setNumRamas(int ramas) { numRamas = ramas; }
};


#endif // arboles_h_
