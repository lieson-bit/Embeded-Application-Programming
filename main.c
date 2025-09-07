#include "RTE_Components.h"
#include CMSIS_device_header

int main(void) {
	  *(uint32_t*)(0x40021014) |= 0x00200000; 
    while(1){} 
}