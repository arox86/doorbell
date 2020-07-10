#include "gpio.h"
#include <stdlib.h>
#include <stdio.h>

static int value = 0;

int main()
{
printf("hello\n");
export_pin(17);
pin_mode(17,IN);

while(pin_read_value(17) == 0 )
{	system("clear");
        value = pin_read_value(17);
	printf("%d\n",value);
}
printf("da war ein Ton !\n");



return 0;
}

