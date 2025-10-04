#pragma once
#include "Subscription.h"

namespace SmartWash3Model {

    Subscription::Subscription() {
        this->id = 0;
        this->userID = "";
        this->planID = "";
        this->startDate = DateTime::Now;
        this->endDate = this->startDate.AddMonths(1);
        this->autoRenew = false;
        this->state = "Inactive";
    }

    Subscription::Subscription(int id, String^ userID,
        String^ planID, DateTime startDate,
        DateTime endDate, bool autoRenew, String^ state) {
        this->id = id;
        this->userID = userID;
        this->planID = planID;
        this->startDate = startDate;
        this->endDate = endDate;
        this->autoRenew = autoRenew;
        this->state = state;
    }

    int Subscription::getId() {
        return this->id;
    }

    void Subscription::setId(int id) {
        this->id = id;
    }

    String^ Subscription::getUserID() {
        return this->userID;
    }
    void Subscription::setUserID(String^ userID) {
        this->userID = userID;
    }

    String^ Subscription::getPlanID() { 
        return this->planID;
    }
    void Subscription::setPlanID(String^ planID) { 
        this->planID = planID; 
    }

    DateTime Subscription::getStartDate() { 
        return this->startDate; 
    }
    void Subscription::setStartDate(DateTime startDate) {
        this->startDate = startDate; 
    }

    DateTime Subscription::getEndDate() { 
        return this->endDate; 
    }
    void Subscription::setEndDate(DateTime endDate) {
        this->endDate = endDate; 
    }

    bool Subscription::getAutoRenew() { 
        return this->autoRenew; 
    }
    void Subscription::setAutoRenew(bool autoRenew) { 
        this->autoRenew = autoRenew; 
    }

    String^ Subscription::getState() { 
        return this->state; 
    }
    void Subscription::setState(String^ state) {
        this->state = state; 
    }

    void Subscription::Renew() {
        if (this->autoRenew) {
            this->startDate = DateTime::Now;
            this->endDate = this->startDate.AddMonths(1);
            this->state = "Renewed";
        }
    }

    void Subscription::Cancel() {
        this->state = "Cancelled";
        this->autoRenew = false;
    }

    bool Subscription::IsActive() {
        return (this->state == "Active" && DateTime::Now <= this->endDate);
    }

}