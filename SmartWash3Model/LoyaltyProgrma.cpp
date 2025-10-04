#include "LoyaltyProgram.h"

namespace SmartWash3Model {

    // Constructo
    LoyaltyProgram::LoyaltyProgram() {
        this->userID = "";
        this->pointsBalance = 0;
    }

    // Constructor 
    LoyaltyProgram::LoyaltyProgram(String^ userID, int pointsBalance) {
        this->userID = userID;
        this->pointsBalance = pointsBalance;
    }

    // 
    String^ LoyaltyProgram::getUserID() { 
        return this->userID; 
    }
    void LoyaltyProgram::setUserID(String^ userID) { 
        this->userID = userID; 
    }

    int LoyaltyProgram::getPointsBalance() { 
        return this->pointsBalance; 
    }
    void LoyaltyProgram::setPointsBalance(int pointsBalance) {
        this->pointsBalance = pointsBalance;
    }

    // Agregar puntos al balance
    void LoyaltyProgram::AddPoints(int points) {
        if (points > 0)
            this->pointsBalance += points;
    }

    // Canjear puntos, devuelve true si el canje fue exitoso
    bool LoyaltyProgram::RedeemPoints(int points) {
        if (points > 0 && this->pointsBalance >= points) {
            this->pointsBalance -= points;
            return true;
        }
        return false; // No hay suficientes puntos
    }
}