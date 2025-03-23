#include "notification.h"

#include <iostream>

int main () {
    Notification* email_notification = new EmailNotification();
    std::cout << "Sending basic email notification" << std::endl;
    email_notification->send();

    // Decorate email notification with slack and facebook notifications.
    Notification* slack_notification = new SlackNotification(email_notification);
    Notification* facebook_notification = new FacebookNotification(slack_notification);

    std::cout << "\nSending combined notifications" << std::endl;
    facebook_notification->send();
}