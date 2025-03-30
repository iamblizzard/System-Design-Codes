#include "commands.h"

#include <iostream>

void TurnOnCommand::execute() {
    device_->turnOn();
}

void TurnOffCommand::execute() {
    device_->turnOff();
}

void AdjustVolumeCommand::execute() {
    radio_->adjustVolume();
}

void ChangeChannelCommand::execute() {
    tv_->changeChannel();
}