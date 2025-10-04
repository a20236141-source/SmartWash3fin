#pragma once
using namespace System;

namespace SmartWash3Model {

    public ref class Subscription {
    private:
        int id;
        String^ userID;
        String^ planID;
        DateTime startDate;
        DateTime endDate;
        bool autoRenew;
        String^ state;

    public:
        // Constructores
        Subscription();
        Subscription(int id, String^ userID, String^ planID, DateTime startDate,
            DateTime endDate, bool autoRenew, String^ state);

        // Getters y Setters
        int getId();
        void setId(int id);

        String^ getUserID();
        void setUserID(String^ userID);

        String^ getPlanID();
        void setPlanID(String^ planID);

        DateTime getStartDate();
        void setStartDate(DateTime startDate);

        DateTime getEndDate();
        void setEndDate(DateTime endDate);

        bool getAutoRenew();
        void setAutoRenew(bool autoRenew);

        String^ getState();
        void setState(String^ state);

        // Métodos funcionales
        void Renew();
        void Cancel();
        bool IsActive();
    };
}
