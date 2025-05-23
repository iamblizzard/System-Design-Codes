#include "us-charging.h"
#include "eu-charging.h"
#include "us-adapter.h"

int main () {
    EuSocket eu_socket;

    UsAdapter* us_adapter = new UsAdapter();
    us_adapter->chargeDevice(eu_socket);
}