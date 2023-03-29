#include<stdio.h>
#include "hhc.h";

int main()
{
    printf("estern electricity bill\n");
    lcd_init();
    gsm_init();
    gps_init();
    ds1307_init();
    at24_init();
    printer_init();
    printf("\n");
}


