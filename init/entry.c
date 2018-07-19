#include "types.h"
#include "common.h"

int kern_entry()
{
	console_clear();

	console_write_color("loading system...\n", rc_black, rc_green);

	return 0;
}