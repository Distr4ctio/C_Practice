/*
 * operators_precedence.c
 * 
 * Copyright 2016 Mark <mark@Workdesk1>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>

main()
	{
	int a = 20;
	int b = 10;
	int c = 15;
	int d = 5;
	int e;
	
	e = (a + b) * c / d; //(30*15)/5
	printf("Value of (a + b) * c / d is : %d\n", e);
	
	e = ((a + b) * c) / d; //(30*15)/5
	printf("Value of ((a + b) *c) / d is : %d\n", e);
	
	e = (a + b) * (c / d); // (30) * (15/5)
	printf("Value of (a + b) * (c / d) is : %d\n", e);
	
	e = a + (b * c) / d; // 20 + (150/5)
	printf("Value of a + (b * c) / d is : %d\n", e);
	return 0;
	}
