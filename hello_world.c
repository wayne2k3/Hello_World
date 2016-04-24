/*
*  Hallo Welt Treiber
*
*  Copyright (C) 2014 THD
*
* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*
*  This program is free software; you can redistribute it and/or modify
*  it under the terms of the GNU General Public License as published by
*  the Free Software Foundation; either version 2 of the License, or (at
*  your option) any later version.
*
*  This program is distributed in the hope that it will be useful, but
*  WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
*  General Public License for more details.
*
*  You should have received a copy of the GNU General Public License along
*  with this program; if not, write to the Free Software Foundation, Inc.,
*  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA.
*
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init driver_init(void)
{
	printk("Hallo Welt \n");

	return 0;
}


static void driver_exit(void)
{
	printk("Tschuess Welt \n");

}


module_init(driver_init);
module_exit(driver_exit);


MODULE_LICENSE("GPL");
MODULE_AUTHOR("wayne");
MODULE_DESCRIPTION("Hallo Welt Treiber");

