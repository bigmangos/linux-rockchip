# SPDX-License-Identifier: GPL-2.0
#
# Makefile for the linux kernel.
#

obj-y				+= firmware.o

obj-$(CONFIG_FIQ_GLUE)		+= fiq_glue.o fiq_glue_setup.o
obj-$(CONFIG_SA1111)		+= sa1111.o
obj-$(CONFIG_KRAIT_L2_ACCESSORS) += krait-l2-accessors.o
obj-$(CONFIG_SHARP_LOCOMO)	+= locomo.o
obj-$(CONFIG_SHARP_PARAM)	+= sharpsl_param.o
obj-$(CONFIG_SHARP_SCOOP)	+= scoop.o
obj-$(CONFIG_CPU_V7)		+= secure_cntvoff.o
obj-$(CONFIG_MCPM)		+= mcpm_head.o mcpm_entry.o mcpm_platsmp.o vlock.o
CFLAGS_REMOVE_mcpm_entry.o	= -pg
AFLAGS_mcpm_head.o		:= -march=armv7-a
AFLAGS_vlock.o			:= -march=armv7-a
obj-$(CONFIG_BL_SWITCHER)	+= bL_switcher.o
obj-$(CONFIG_BL_SWITCHER_DUMMY_IF) += bL_switcher_dummy_if.o
