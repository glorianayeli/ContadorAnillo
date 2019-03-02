#include <18F4620.h>
#fuses HS, NOFCMEN, NOIESO, PUT, NOBROWNOUT, NOWDT
#fuses NOPBADEN, MCLR, STVREN, NOLVP, NODEBUG
#USE DELAY (clock=16000000)

void main(void) {
    set_tris_d(0x00);
    output_d(0x00);
    int16 conteo;
    while (TRUE) {
        /*output_d(0x01);
        delay_ms(500);
        output_d(0x02);
        delay_ms(500);
        output_d(0x04);
        delay_ms(500);
        output_d(0x08);
        delay_ms(500);
        output_d(0x10);
        delay_ms(500);
        output_d(0x20);
        delay_ms(500);
        output_d(0x40);
        delay_ms(500);
        output_d(0x80);
        delay_ms(500);*/
        for(conteo=128;conteo>=1;conteo/=2)
        {
            output_d(conteo);
            delay_ms(500);
        }
        
    }
}
