/*
 * File:   main.c
 * Author: Phil Glazzard
 *
 * Created on 31 October 2018, 19:11
 */


#include <xc.h>
#include "config.h"
#include "init_ports.h"
#include "main.h"
void main(void) 
{
    init_ports();
    while(1)
    {
        PORTBbits.RB5 = 1;
        __delay_ms(50);
        PORTBbits.RB5 = 0;
        __delay_ms(50);
    }
    
}
