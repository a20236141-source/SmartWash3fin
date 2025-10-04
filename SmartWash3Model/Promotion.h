#pragma once

using namespace System;

namespace SmartWash3Model {

    public ref class Promotion {
    private:
        String^ id;
        String^ code;
        String^ descripcion;
        double descuento;
        DateTime validFrom;
        DateTime validTo;
        int maxUses;

    public:
        // Constructores
        Promotion();
        Promotion(String^ id, String^ code, String^ descripcion, double descuento,
            DateTime validFrom, DateTime validTo, int maxUses);

        // Getters y Setters
        String^ getId();
        void setId(String^ id);

        String^ getCode();
        void setCode(String^ code);

        String^ getDescripcion();
        void setDescripcion(String^ descripcion);

        double getDescuento();
        void setDescuento(double descuento);

        DateTime getValidFrom();
        void setValidFrom(DateTime validFrom);

        DateTime getValidTo();
        void setValidTo(DateTime validTo);

        int getMaxUses();
        void setMaxUses(int maxUses);

        // Métodos funcionales
        bool IsValid();
        double ApplyDiscount(double monto);
    };
}