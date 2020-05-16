/* Experimentacon 1*/


#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "inc/tm4c123gh6pm.h"
#include "driverlib/sysctl.h"
#include "driverlib/gpio.h"




int main()){
    SysCtlClockSet(SYSCTL_XTAL_16MHZ|SYSCTL_SYSDIV_10);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);


}
