#include "SuscriptionPlan.h"

namespace SmartWash3Model {

    
    SuscriptionPlan::SuscriptionPlan() {
        this->id = 0;
        this->nombre = "";
        this->descripcion = "";
        this->precioMensual = 0.0;
        this->maxWashesPerMonth = 0;
        this->includesInterior = false;
        this->includesWax = false;
    }

    // Constructor con parámetros
    SuscriptionPlan::SuscriptionPlan(int id, String^ nombre, 
        String^ descripcion, double precioMensual,
        int maxWashesPerMonth, bool includesInterior, bool includesWax) {
        this->id = id;
        this->nombre = nombre;
        this->descripcion = descripcion;
        this->precioMensual = precioMensual;
        this->maxWashesPerMonth = maxWashesPerMonth;
        this->includesInterior = includesInterior;
        this->includesWax = includesWax;
    }

    // Metodos GET yu set
    int SuscriptionPlan::getId() { 
        return this->id; 
    }
    void SuscriptionPlan::setId(int id) { 
        this->id = id; }

    String^ SuscriptionPlan::getNombre() { 
        return this->nombre; 
    }
    void SuscriptionPlan::setNombre(String^ nombre) { 
        this->nombre = nombre; 
    }

    String^ SuscriptionPlan::getDescripcion() { 
        return this->descripcion; 
    }
    void SuscriptionPlan::setDescripcion(String^ descripcion) {
        this->descripcion = descripcion; 
    }

    double SuscriptionPlan::getPrecioMensual() { 
        return this->precioMensual; 
    }
    void SuscriptionPlan::setPrecioMensual(double precioMensual) {
        this->precioMensual = precioMensual; 
    }

    int SuscriptionPlan::getMaxWashesPerMonth() { 
        return this->maxWashesPerMonth; 
    }
    void SuscriptionPlan::setMaxWashesPerMonth(int maxWashesPerMonth) { 
        this->maxWashesPerMonth = maxWashesPerMonth; 
    }

    bool SuscriptionPlan::getIncludesInterior() { 
        return this->includesInterior; 
    }

    void SuscriptionPlan::setIncludesInterior(bool includesInterior) { 
        this->includesInterior = includesInterior; 
    }

    bool SuscriptionPlan::getIncludesWax() { 
        return this->includesWax; 
    }
    void SuscriptionPlan::setIncludesWax(bool includesWax) {
        this->includesWax = includesWax;
    }

    // Método funcional: calcula precio proporcional según días usados
    double SuscriptionPlan::calculateProRatedPrice(int daysUsed) {
        if (daysUsed < 0 || daysUsed > 30) daysUsed = 30;
        return (this->precioMensual / 30.0) * daysUsed;
    }
}
