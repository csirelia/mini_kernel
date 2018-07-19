#ifndef INCLUDE_COMMON_H_
#define INCLUDE_COMMON_H_

#include "types.h"

void outb(uint16_t port, uint8_t value);	//端口写一个字节

uint8_t inb(uint16_t port);		//端口读一个字节

uint16_t inw(uint16_t port);	//端口读一个字

#endif	//INCLUDE_COMMON_H_