class Notification {
public:
    virtual void send() = 0;
};

class EmailNotification : public Notification {
public:
    void send() override;
};

class NotificationDecorator : public Notification {
public:
    NotificationDecorator(Notification* notification);
    void send() override;
private:
    Notification* notification_;
};

class SlackNotification : public NotificationDecorator {
public:
    SlackNotification(Notification* notification);
    void send() override;
};

class FacebookNotification : public NotificationDecorator {
public:
    FacebookNotification(Notification* notification);
    void send() override;
};