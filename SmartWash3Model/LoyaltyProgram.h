#pragma once
using namespace System;

namespace SmartWash3Model {

    public ref class LoyaltyProgram {
    private:
        String^ userID;
        int pointsBalance;

    public:
        // Constructores
        LoyaltyProgram();
        LoyaltyProgram(String^ userID, int pointsBalance);

        // Getters y Setters
        String^ getUserID();
        void setUserID(String^ userID);

        int getPointsBalance();
        void setPointsBalance(int pointsBalance);

        // Métodos funcionales
        void AddPoints(int points);
        bool RedeemPoints(int points);
        };
    }


