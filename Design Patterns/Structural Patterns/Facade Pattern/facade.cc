#include "systems.h"
#include "facade.h"

Facade::Facade() {
    // Initialize the subsystem components
    system1_ = new System1();
    system2_ = new System2();
}

void Facade::operation() {
    // Call methods from the subsystems
    system1_->operation1();
    system2_->operation1();
    system1_->operation2();
    system2_->operation2();
}