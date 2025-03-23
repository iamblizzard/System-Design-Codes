#include "notification.h"

#include <iostream>

void EmailNotification::send() {
    std::cout << "EmailNotification: Sending email notification" << std::endl;
}

NotificationDecorator::NotificationDecorator(Notification* notification) :
    notification_(notification) {}

void NotificationDecorator::send() {
    notification_->send();
}

SlackNotification::SlackNotification(Notification* notification) :
    NotificationDecorator(notification) {}

void SlackNotification::send() {
    NotificationDecorator::send();
    std::cout << "SlackNotification: Sending slack notification" << std::endl;
}

FacebookNotification::FacebookNotification(Notification* notification) :
    NotificationDecorator(notification) {}

void FacebookNotification::send() {
    NotificationDecorator::send();
    std::cout << "FacebookNotification: Sending facebook notification" << std::endl;
}