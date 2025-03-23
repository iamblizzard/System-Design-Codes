#include "us-charging.h"
#include "eu-charging.h"
#include "us-adapter.h"

int main () {
    EuSocket euSocket;

    // UsCharger usCharger;
    // usCharger.chargeDevice(euSocket);

    UsAdapter usAdapter;
    usAdapter.chargeDevice(euSocket);
}