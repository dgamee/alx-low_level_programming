#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - print time in 24 hours format
 *
 */

void jack_bauer(void)
{
	int hr, min;

	for (hr = 00; hr < 24; hr++)
	{
		for (min = 00; min < 60; min++)
		{
			if (hr < 10 && min < 10)
				printf("0%d:0%d\n", hr, min);
			else if (hr < 10)
				printf("0%d:%d\n", hr, min);
			else if (min < 10)
				printf("%d:0%d\n", hr, min);
			else
				printf("%d:%d\n", hr, min);
		}
	}
}
