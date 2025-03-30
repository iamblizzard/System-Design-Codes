#ifndef COMMANDS_H
#define COMMANDS_H

#include "device.h"

class Command {
public:
    virtual void execute() = 0;
};

class TurnOnCommand : public Command {
public:
    TurnOnCommand(Device* device) : device_(device) {}
    void execute() override;
private:
    Device* device_;
};

class TurnOffCommand : public Command {
public:
    TurnOffCommand(Device* device) : device_(device) {}
    void execute() override;
private:
    Device* device_;
};

class AdjustVolumeCommand : public Command {
public:
    AdjustVolumeCommand(Radio* radio) : radio_(radio) {}
    void execute() override;
private:
    Radio* radio_;
};

class ChangeChannelCommand : public Command {
public:
    ChangeChannelCommand(TV* tv) : tv_(tv) {}
    void execute() override;
private:
    TV* tv_;
};

#endif // COMMANDS_H