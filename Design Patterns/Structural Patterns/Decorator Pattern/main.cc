#include "notification.h"

#include <iostream>

void sendNotification(Notification* notification) {
    notification->send();
}

int main () {
    Notification* email_notification = new EmailNotification();
    std::cout << "Sending basic email notification" << std::endl;
    email_notification->send();

    // Decorate email notification with slack and facebook notifications.
    Notification* email_slack_notifications = new SlackNotification(email_notification);
    Notification* email_slack_facebook_notifications = new FacebookNotification(email_slack_notifications);

    std::cout << "\nSending combined notifications" << std::endl;
    sendNotification(email_slack_facebook_notifications);
}