#include <18F4620.h>
#fuses hs,nowdt
#USE DELAY (clock=16000000)

void main(void) {
    set_tris_d(0x00);
    output_d(0x00);
    int16 conteo;
    while (1) {
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
        for(conteo=1;conteo<=128;conteo/=2)
        {
            output_d(conteo);
            delay_ms(500);
        }
        
    }
}
