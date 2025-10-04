#include "Promotion.h"

namespace SmartWash3Model {


    // Constructor por defecto
    Promotion::Promotion() {
        this->id = "";
        this->code = "";
        this->descripcion = "";
        this->descuento = 0.0;
        this->validFrom = DateTime::Now;
        this->validTo = this->validFrom.AddMonths(1);
        this->maxUses = 0;
    }

    // Constructor con parámetros
    Promotion::Promotion(String^ id, String^ code, String^ descripcion, double descuento,
        DateTime validFrom, DateTime validTo, int maxUses) {
        this->id = id;
        this->code = code;
        this->descripcion = descripcion;
        this->descuento = descuento;
        this->validFrom = validFrom;
        this->validTo = validTo;
        this->maxUses = maxUses;
    }

    // Getters y Setters
    String^ Promotion::getId() { 
        return this->id; 
    }
    void Promotion::setId(String^ id) { 
        this->id = id;
    }

    String^ Promotion::getCode() { 
        return this->code;
    }
    void Promotion::setCode(String^ code) {
        this->code = code; 
    }

    String^ Promotion::getDescripcion() { 
        return this->descripcion; 
    }
    void Promotion::setDescripcion(String^ descripcion) { 
        this->descripcion = descripcion; 
    }

    double Promotion::getDescuento() { 
        return this->descuento; 
    }
    void Promotion::setDescuento(double descuento) {
        this->descuento = descuento; 
    }

    DateTime Promotion::getValidFrom() {
        return this->validFrom; 
    }
    void Promotion::setValidFrom(DateTime validFrom) { 
        this->validFrom = validFrom;
    }

    DateTime Promotion::getValidTo() { 
        return this->validTo;
    }
    void Promotion::setValidTo(DateTime validTo) {
        this->validTo = validTo; 
    }

    int Promotion::getMaxUses() {
        return this->maxUses; 
    }
    void Promotion::setMaxUses(int maxUses) {
        this->maxUses = maxUses; 
    }

    // Método para verificar si la promoción es válida (por fecha)
    bool Promotion::IsValid() {
        DateTime now = DateTime::Now;
        return (now >= this->validFrom && now <= this->validTo && this->maxUses > 0);
    }

    // Aplica el descuento al monto si la promoción es válida
    double Promotion::ApplyDiscount(double monto) {
        if (IsValid()) {
            this->maxUses--; // cada uso reduce el contador
            return monto - (monto * this->descuento / 100.0);
        }
        return monto; // si no es válida, no aplica descuento
    }

}
