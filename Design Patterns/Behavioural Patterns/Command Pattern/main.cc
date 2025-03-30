#include "commands.h"
#include "device.h"

class RemoteControl {
public:
    void setCommand(Command* command) {
        command_ = command;
    }
    void pressButton() {
        if (command_) {
            command_->execute();
        }
    }
private:
    Command* command_;
};

int main () {
    // Create devices
    TV* tv = new TV();
    Radio* radio = new Radio();

    // Create commands
    TurnOnCommand* turnOnTV = new TurnOnCommand(tv);
    TurnOffCommand* turnOffTV = new TurnOffCommand(tv);
    AdjustVolumeCommand* adjustVolumeRadio = new AdjustVolumeCommand(radio);
    ChangeChannelCommand* changeChannelTV = new ChangeChannelCommand(tv);

    // Create remote control
    RemoteControl remote;

    // Set commands and press buttons
    remote.setCommand(turnOnTV);
    remote.pressButton();

    remote.setCommand(turnOffTV);
    remote.pressButton();

    remote.setCommand(adjustVolumeRadio);
    remote.pressButton();

    remote.setCommand(changeChannelTV);
    remote.pressButton();
}