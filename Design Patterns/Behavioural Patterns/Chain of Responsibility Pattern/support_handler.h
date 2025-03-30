#ifndef SUPPORT_HANDLER_H
#define SUPPORT_HANDLER_H

enum Priority {
    BASIC, INTERMEDIATE, CRITICAL
};

class Request {
public:
    Request(Priority priority) : priority_(priority) {}
    Priority getPriority();
private:
    Priority priority_;
};

class SupportHandler {
public:
    virtual void setNext(SupportHandler* next) = 0;
    virtual void handleRequest(Request request) = 0;
};

class BasicSupportHandler : public SupportHandler {
public:
    void setNext(SupportHandler* next) override;
    void handleRequest(Request request) override;
private:
    SupportHandler* next_;
};

class IntermediateSupportHandler : public SupportHandler {
public:
    void setNext(SupportHandler* next) override;
    void handleRequest(Request request) override;
private:
    SupportHandler* next_;
};

class CriticalSupportHandler : public SupportHandler {
public:
    void setNext(SupportHandler* next) override;
    void handleRequest(Request request) override;
private:
    SupportHandler* next_;
};

#endif // SUPPORT_HANDLER_H