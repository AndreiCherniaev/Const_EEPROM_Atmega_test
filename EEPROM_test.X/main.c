//see aslo 
//avr-objcopy -I ihex Gcc.X.production.eep -O binary file.bin

//see Preprocessor -> Defined symbols #define F_CPU 1000000UL

#include <avr/io.h>
#include <util/delay.h>

#define EEMEM __attribute__ ((section (".eeprom")))
volatile const uint8_t EEMEM eeword=0x12; 

int main()
{
    return 0;
}
