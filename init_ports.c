
#include <pic16f690.h>
void init_ports(void)
{ 
    ANSELHbits.ANS11 = 0;   // disable analogue input on pin 12
    TRISBbits.TRISB5 = 0;   // B5 is a digital output
}
