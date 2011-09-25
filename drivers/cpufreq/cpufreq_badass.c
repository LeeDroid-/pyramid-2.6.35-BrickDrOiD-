/*
 *  drivers/cpufreq/cpufreq_badass.c
 *
 *  Copyright (C)  2011 Dennis Rassmann (showp1984@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>
#include <linux/cpufreq.h>
#include <linux/cpu.h>
#include <linux/jiffies.h>
#include <linux/kernel_stat.h>
#include <linux/mutex.h>
#include <linux/hrtimer.h>
#include <linux/tick.h>
#include <linux/ktime.h>
#include <linux/sched.h>
#include <linux/input.h>
#include <linux/workqueue.h>
#include <linux/slab.h>


/*
*	TODO: Everything that has an actual function :D
*/


MODULE_AUTHOR("Dennis Rassmann <showp1984@gmail.com>");
MODULE_DESCRIPTION("'cpufreq_badass' - A badass cpufreq governor");
MODULE_LICENSE("GPL");

#ifdef CONFIG_CPU_FREQ_DEFAULT_GOV_BADASS
fs_initcall(cpufreq_gov_dbs_init);
#else
module_init(cpufreq_gov_dbs_init);
#endif
module_exit(cpufreq_gov_dbs_exit);
