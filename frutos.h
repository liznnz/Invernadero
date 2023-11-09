#ifndef frutos_h_
#define frutos_h_

#include <string>

class Frutos {
private:
    std::string color;
    std::string sabor;
    bool jugosa;

public:
    // Constructor
    Frutos(std::string col, std::string sab, bool jug) : color(col), sabor(sab), jugosa(jug) {}

    // Getters
    std::string getColor() const { return color; }
    std::string getSabor() const { return sabor; }
    bool esJugosa() const { return jugosa; }

    // Setters
    void setColor(std::string col) { color = col; }
    void setSabor(std::string sab) { sabor = sab; }
    void setJugosa(bool jug) { jugosa = jug; }
};

#endif // frutos_h_
