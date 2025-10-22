#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *
 * Description: This function uses nested loops to print
 * every minute of the day in 24-hour format, starting
 * from 00:00 to 23:59. Each time is printed on a new line.
 *
 * Return: Nothing (void)
 */
#include<stdio.h>
#include "main.h"

void jack_bauer(void)	
{
	int hour;
	int minute;	

	for (hour = 0; hour <= 23; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
		
	}



}
