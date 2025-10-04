#pragma once
using namespace System;

namespace SmartWash3Model {

    public ref class SuscriptionPlan {
    private:
        int id;
        String^ nombre;
        String^ descripcion;
        double precioMensual;
        int maxWashesPerMonth;
        bool includesInterior;
        bool includesWax;

    public:
        // Constructores
        SuscriptionPlan();
        SuscriptionPlan(int id, String^ nombre, String^ descripcion, double precioMensual,
            int maxWashesPerMonth, bool includesInterior, bool includesWax);

       //getter
        int getId();
        void setId(int id);

        String^ getNombre();
        void setNombre(String^ nombre);

        String^ getDescripcion();
        void setDescripcion(String^ descripcion);

        double getPrecioMensual();
        void setPrecioMensual(double precioMensual);

        int getMaxWashesPerMonth();
        void setMaxWashesPerMonth(int maxWashesPerMonth);

        bool getIncludesInterior();
        void setIncludesInterior(bool includesInterior);

        bool getIncludesWax();
        void setIncludesWax(bool includesWax);

        
        double calculateProRatedPrice(int daysUsed);
    };
}

