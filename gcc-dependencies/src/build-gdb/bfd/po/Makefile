# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2001-2023 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.41.50

SHELL = /bin/sh


srcdir = ../../gdb-14.2/bfd/po
top_srcdir = ../../gdb-14.2/bfd
VPATH = ../../gdb-14.2/bfd/po
top_builddir = ..

prefix = /home/leonardo/Documents/GitHub/GCC-Cross-Compiler-Creation/cross
exec_prefix = ${prefix}
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gnulocaledir = ${prefix}/share/locale
gettextsrcdir = ${prefix}/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
MKINSTALLDIRS = $(top_builddir)/../gdb-14.2/bfd/../mkinstalldirs

CC = gcc
GENCAT = gencat
GMSGFMT = PATH=../src:$$PATH :
MSGFMT = :
XGETTEXT = PATH=../src:$$PATH :
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2  
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/da.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/hr.po $(srcdir)/id.po $(srcdir)/ja.po $(srcdir)/ro.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/pt.po
GMOFILES =  $(srcdir)/da.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/hr.gmo $(srcdir)/id.gmo $(srcdir)/ja.gmo $(srcdir)/ro.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/pt.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	../../gdb-14.2/bfd/aix5ppc-core.c \
	../../gdb-14.2/bfd/aout-cris.c \
	../../gdb-14.2/bfd/aout-ns32k.c \
	../../gdb-14.2/bfd/aout-target.h \
	../../gdb-14.2/bfd/aout32.c \
	../../gdb-14.2/bfd/aout64.c \
	../../gdb-14.2/bfd/aoutx.h \
	../../gdb-14.2/bfd/arc-got.h \
	../../gdb-14.2/bfd/arc-plt.h \
	../../gdb-14.2/bfd/archive.c \
	../../gdb-14.2/bfd/archive64.c \
	../../gdb-14.2/bfd/archures.c \
	../../gdb-14.2/bfd/bfd.c \
	../../gdb-14.2/bfd/bfdio.c \
	../../gdb-14.2/bfd/bfdwin.c \
	../../gdb-14.2/bfd/binary.c \
	../../gdb-14.2/bfd/cache.c \
	../../gdb-14.2/bfd/cf-i386lynx.c \
	../../gdb-14.2/bfd/cisco-core.c \
	../../gdb-14.2/bfd/coff-alpha.c \
	../../gdb-14.2/bfd/coff-arm.h \
	../../gdb-14.2/bfd/coff-bfd.c \
	../../gdb-14.2/bfd/coff-bfd.h \
	../../gdb-14.2/bfd/coff-go32.c \
	../../gdb-14.2/bfd/coff-i386.c \
	../../gdb-14.2/bfd/coff-mips.c \
	../../gdb-14.2/bfd/coff-rs6000.c \
	../../gdb-14.2/bfd/coff-sh.c \
	../../gdb-14.2/bfd/coff-stgo32.c \
	../../gdb-14.2/bfd/coff-tic30.c \
	../../gdb-14.2/bfd/coff-tic4x.c \
	../../gdb-14.2/bfd/coff-tic54x.c \
	../../gdb-14.2/bfd/coff-x86_64.c \
	../../gdb-14.2/bfd/coff-z80.c \
	../../gdb-14.2/bfd/coff-z8k.c \
	../../gdb-14.2/bfd/coff64-rs6000.c \
	../../gdb-14.2/bfd/coffcode.h \
	../../gdb-14.2/bfd/coffgen.c \
	../../gdb-14.2/bfd/cofflink.c \
	../../gdb-14.2/bfd/coffswap.h \
	../../gdb-14.2/bfd/compress.c \
	../../gdb-14.2/bfd/corefile.c \
	../../gdb-14.2/bfd/cpu-aarch64.c \
	../../gdb-14.2/bfd/cpu-aarch64.h \
	../../gdb-14.2/bfd/cpu-alpha.c \
	../../gdb-14.2/bfd/cpu-amdgcn.c \
	../../gdb-14.2/bfd/cpu-arc.c \
	../../gdb-14.2/bfd/cpu-arm.c \
	../../gdb-14.2/bfd/cpu-arm.h \
	../../gdb-14.2/bfd/cpu-avr.c \
	../../gdb-14.2/bfd/cpu-bfin.c \
	../../gdb-14.2/bfd/cpu-bpf.c \
	../../gdb-14.2/bfd/cpu-cr16.c \
	../../gdb-14.2/bfd/cpu-cris.c \
	../../gdb-14.2/bfd/cpu-crx.c \
	../../gdb-14.2/bfd/cpu-csky.c \
	../../gdb-14.2/bfd/cpu-d10v.c \
	../../gdb-14.2/bfd/cpu-d30v.c \
	../../gdb-14.2/bfd/cpu-dlx.c \
	../../gdb-14.2/bfd/cpu-epiphany.c \
	../../gdb-14.2/bfd/cpu-fr30.c \
	../../gdb-14.2/bfd/cpu-frv.c \
	../../gdb-14.2/bfd/cpu-ft32.c \
	../../gdb-14.2/bfd/cpu-h8300.c \
	../../gdb-14.2/bfd/cpu-h8300.h \
	../../gdb-14.2/bfd/cpu-hppa.c \
	../../gdb-14.2/bfd/cpu-i386.c \
	../../gdb-14.2/bfd/cpu-ia64.c \
	../../gdb-14.2/bfd/cpu-iamcu.c \
	../../gdb-14.2/bfd/cpu-ip2k.c \
	../../gdb-14.2/bfd/cpu-iq2000.c \
	../../gdb-14.2/bfd/cpu-kvx.c \
	../../gdb-14.2/bfd/cpu-lm32.c \
	../../gdb-14.2/bfd/cpu-loongarch.c \
	../../gdb-14.2/bfd/cpu-m10200.c \
	../../gdb-14.2/bfd/cpu-m10300.c \
	../../gdb-14.2/bfd/cpu-m32c.c \
	../../gdb-14.2/bfd/cpu-m32r.c \
	../../gdb-14.2/bfd/cpu-m68hc11.c \
	../../gdb-14.2/bfd/cpu-m68hc12.c \
	../../gdb-14.2/bfd/cpu-m68k.c \
	../../gdb-14.2/bfd/cpu-m68k.h \
	../../gdb-14.2/bfd/cpu-m9s12x.c \
	../../gdb-14.2/bfd/cpu-m9s12xg.c \
	../../gdb-14.2/bfd/cpu-mcore.c \
	../../gdb-14.2/bfd/cpu-mep.c \
	../../gdb-14.2/bfd/cpu-metag.c \
	../../gdb-14.2/bfd/cpu-microblaze.c \
	../../gdb-14.2/bfd/cpu-mips.c \
	../../gdb-14.2/bfd/cpu-mmix.c \
	../../gdb-14.2/bfd/cpu-moxie.c \
	../../gdb-14.2/bfd/cpu-msp430.c \
	../../gdb-14.2/bfd/cpu-mt.c \
	../../gdb-14.2/bfd/cpu-nds32.c \
	../../gdb-14.2/bfd/cpu-nfp.c \
	../../gdb-14.2/bfd/cpu-nios2.c \
	../../gdb-14.2/bfd/cpu-ns32k.c \
	../../gdb-14.2/bfd/cpu-or1k.c \
	../../gdb-14.2/bfd/cpu-pdp11.c \
	../../gdb-14.2/bfd/cpu-pj.c \
	../../gdb-14.2/bfd/cpu-powerpc.c \
	../../gdb-14.2/bfd/cpu-pru.c \
	../../gdb-14.2/bfd/cpu-riscv.c \
	../../gdb-14.2/bfd/cpu-riscv.h \
	../../gdb-14.2/bfd/cpu-rl78.c \
	../../gdb-14.2/bfd/cpu-rs6000.c \
	../../gdb-14.2/bfd/cpu-rx.c \
	../../gdb-14.2/bfd/cpu-s12z.c \
	../../gdb-14.2/bfd/cpu-s390.c \
	../../gdb-14.2/bfd/cpu-score.c \
	../../gdb-14.2/bfd/cpu-sh.c \
	../../gdb-14.2/bfd/cpu-sparc.c \
	../../gdb-14.2/bfd/cpu-spu.c \
	../../gdb-14.2/bfd/cpu-tic30.c \
	../../gdb-14.2/bfd/cpu-tic4x.c \
	../../gdb-14.2/bfd/cpu-tic54x.c \
	../../gdb-14.2/bfd/cpu-tic6x.c \
	../../gdb-14.2/bfd/cpu-tilegx.c \
	../../gdb-14.2/bfd/cpu-tilepro.c \
	../../gdb-14.2/bfd/cpu-v850.c \
	../../gdb-14.2/bfd/cpu-v850_rh850.c \
	../../gdb-14.2/bfd/cpu-vax.c \
	../../gdb-14.2/bfd/cpu-visium.c \
	../../gdb-14.2/bfd/cpu-wasm32.c \
	../../gdb-14.2/bfd/cpu-xgate.c \
	../../gdb-14.2/bfd/cpu-xstormy16.c \
	../../gdb-14.2/bfd/cpu-xtensa.c \
	../../gdb-14.2/bfd/cpu-z80.c \
	../../gdb-14.2/bfd/cpu-z8k.c \
	../../gdb-14.2/bfd/dwarf1.c \
	../../gdb-14.2/bfd/dwarf2.c \
	../../gdb-14.2/bfd/ecoff-bfd.h \
	../../gdb-14.2/bfd/ecoff.c \
	../../gdb-14.2/bfd/ecofflink.c \
	../../gdb-14.2/bfd/ecoffswap.h \
	../../gdb-14.2/bfd/elf-attrs.c \
	../../gdb-14.2/bfd/elf-bfd.h \
	../../gdb-14.2/bfd/elf-eh-frame.c \
	../../gdb-14.2/bfd/elf-hppa.h \
	../../gdb-14.2/bfd/elf-ifunc.c \
	../../gdb-14.2/bfd/elf-linker-x86.h \
	../../gdb-14.2/bfd/elf-linux-core.h \
	../../gdb-14.2/bfd/elf-m10200.c \
	../../gdb-14.2/bfd/elf-m10300.c \
	../../gdb-14.2/bfd/elf-nacl.c \
	../../gdb-14.2/bfd/elf-nacl.h \
	../../gdb-14.2/bfd/elf-properties.c \
	../../gdb-14.2/bfd/elf-s390.h \
	../../gdb-14.2/bfd/elf-sframe.c \
	../../gdb-14.2/bfd/elf-strtab.c \
	../../gdb-14.2/bfd/elf-vxworks.c \
	../../gdb-14.2/bfd/elf-vxworks.h \
	../../gdb-14.2/bfd/elf.c \
	../../gdb-14.2/bfd/elf32-am33lin.c \
	../../gdb-14.2/bfd/elf32-arc.c \
	../../gdb-14.2/bfd/elf32-arm.c \
	../../gdb-14.2/bfd/elf32-arm.h \
	../../gdb-14.2/bfd/elf32-avr.c \
	../../gdb-14.2/bfd/elf32-avr.h \
	../../gdb-14.2/bfd/elf32-bfin.c \
	../../gdb-14.2/bfd/elf32-bfin.h \
	../../gdb-14.2/bfd/elf32-cr16.c \
	../../gdb-14.2/bfd/elf32-cr16.h \
	../../gdb-14.2/bfd/elf32-cris.c \
	../../gdb-14.2/bfd/elf32-crx.c \
	../../gdb-14.2/bfd/elf32-csky.c \
	../../gdb-14.2/bfd/elf32-csky.h \
	../../gdb-14.2/bfd/elf32-d10v.c \
	../../gdb-14.2/bfd/elf32-d30v.c \
	../../gdb-14.2/bfd/elf32-dlx.c \
	../../gdb-14.2/bfd/elf32-dlx.h \
	../../gdb-14.2/bfd/elf32-epiphany.c \
	../../gdb-14.2/bfd/elf32-fr30.c \
	../../gdb-14.2/bfd/elf32-frv.c \
	../../gdb-14.2/bfd/elf32-ft32.c \
	../../gdb-14.2/bfd/elf32-gen.c \
	../../gdb-14.2/bfd/elf32-h8300.c \
	../../gdb-14.2/bfd/elf32-hppa.c \
	../../gdb-14.2/bfd/elf32-hppa.h \
	../../gdb-14.2/bfd/elf32-i386.c \
	../../gdb-14.2/bfd/elf32-ip2k.c \
	../../gdb-14.2/bfd/elf32-iq2000.c \
	../../gdb-14.2/bfd/elf32-lm32.c \
	../../gdb-14.2/bfd/elf32-m32c.c \
	../../gdb-14.2/bfd/elf32-m32r.c \
	../../gdb-14.2/bfd/elf32-m68hc11.c \
	../../gdb-14.2/bfd/elf32-m68hc12.c \
	../../gdb-14.2/bfd/elf32-m68hc1x.c \
	../../gdb-14.2/bfd/elf32-m68hc1x.h \
	../../gdb-14.2/bfd/elf32-m68k.c \
	../../gdb-14.2/bfd/elf32-m68k.h \
	../../gdb-14.2/bfd/elf32-mcore.c \
	../../gdb-14.2/bfd/elf32-mep.c \
	../../gdb-14.2/bfd/elf32-metag.c \
	../../gdb-14.2/bfd/elf32-metag.h \
	../../gdb-14.2/bfd/elf32-microblaze.c \
	../../gdb-14.2/bfd/elf32-mips.c \
	../../gdb-14.2/bfd/elf32-moxie.c \
	../../gdb-14.2/bfd/elf32-msp430.c \
	../../gdb-14.2/bfd/elf32-mt.c \
	../../gdb-14.2/bfd/elf32-nds32.c \
	../../gdb-14.2/bfd/elf32-nds32.h \
	../../gdb-14.2/bfd/elf32-nios2.c \
	../../gdb-14.2/bfd/elf32-nios2.h \
	../../gdb-14.2/bfd/elf32-or1k.c \
	../../gdb-14.2/bfd/elf32-pj.c \
	../../gdb-14.2/bfd/elf32-ppc.c \
	../../gdb-14.2/bfd/elf32-ppc.h \
	../../gdb-14.2/bfd/elf32-pru.c \
	../../gdb-14.2/bfd/elf32-rl78.c \
	../../gdb-14.2/bfd/elf32-rx.c \
	../../gdb-14.2/bfd/elf32-rx.h \
	../../gdb-14.2/bfd/elf32-s12z.c \
	../../gdb-14.2/bfd/elf32-s390.c \
	../../gdb-14.2/bfd/elf32-score.c \
	../../gdb-14.2/bfd/elf32-score.h \
	../../gdb-14.2/bfd/elf32-score7.c \
	../../gdb-14.2/bfd/elf32-sh-relocs.h \
	../../gdb-14.2/bfd/elf32-sh.c \
	../../gdb-14.2/bfd/elf32-sparc.c \
	../../gdb-14.2/bfd/elf32-spu.c \
	../../gdb-14.2/bfd/elf32-spu.h \
	../../gdb-14.2/bfd/elf32-tic6x.c \
	../../gdb-14.2/bfd/elf32-tic6x.h \
	../../gdb-14.2/bfd/elf32-tilegx.c \
	../../gdb-14.2/bfd/elf32-tilegx.h \
	../../gdb-14.2/bfd/elf32-tilepro.c \
	../../gdb-14.2/bfd/elf32-tilepro.h \
	../../gdb-14.2/bfd/elf32-v850.c \
	../../gdb-14.2/bfd/elf32-v850.h \
	../../gdb-14.2/bfd/elf32-vax.c \
	../../gdb-14.2/bfd/elf32-visium.c \
	../../gdb-14.2/bfd/elf32-wasm32.c \
	../../gdb-14.2/bfd/elf32-xgate.c \
	../../gdb-14.2/bfd/elf32-xstormy16.c \
	../../gdb-14.2/bfd/elf32-xtensa.c \
	../../gdb-14.2/bfd/elf32-z80.c \
	../../gdb-14.2/bfd/elf32.c \
	../../gdb-14.2/bfd/elf64-alpha.c \
	../../gdb-14.2/bfd/elf64-amdgcn.c \
	../../gdb-14.2/bfd/elf64-bpf.c \
	../../gdb-14.2/bfd/elf64-gen.c \
	../../gdb-14.2/bfd/elf64-hppa.c \
	../../gdb-14.2/bfd/elf64-hppa.h \
	../../gdb-14.2/bfd/elf64-ia64-vms.c \
	../../gdb-14.2/bfd/elf64-mips.c \
	../../gdb-14.2/bfd/elf64-mmix.c \
	../../gdb-14.2/bfd/elf64-nfp.c \
	../../gdb-14.2/bfd/elf64-ppc.c \
	../../gdb-14.2/bfd/elf64-ppc.h \
	../../gdb-14.2/bfd/elf64-s390.c \
	../../gdb-14.2/bfd/elf64-sparc.c \
	../../gdb-14.2/bfd/elf64-tilegx.c \
	../../gdb-14.2/bfd/elf64-tilegx.h \
	../../gdb-14.2/bfd/elf64-x86-64.c \
	../../gdb-14.2/bfd/elf64.c \
	../../gdb-14.2/bfd/elfcode.h \
	../../gdb-14.2/bfd/elfcore.h \
	../../gdb-14.2/bfd/elflink.c \
	../../gdb-14.2/bfd/elfn32-mips.c \
	../../gdb-14.2/bfd/elfxx-aarch64.c \
	../../gdb-14.2/bfd/elfxx-aarch64.h \
	../../gdb-14.2/bfd/elfxx-ia64.c \
	../../gdb-14.2/bfd/elfxx-ia64.h \
	../../gdb-14.2/bfd/elfxx-kvx.c \
	../../gdb-14.2/bfd/elfxx-loongarch.c \
	../../gdb-14.2/bfd/elfxx-loongarch.h \
	../../gdb-14.2/bfd/elfxx-mips.c \
	../../gdb-14.2/bfd/elfxx-mips.h \
	../../gdb-14.2/bfd/elfxx-riscv.c \
	../../gdb-14.2/bfd/elfxx-riscv.h \
	../../gdb-14.2/bfd/elfxx-sparc.c \
	../../gdb-14.2/bfd/elfxx-sparc.h \
	../../gdb-14.2/bfd/elfxx-tilegx.c \
	../../gdb-14.2/bfd/elfxx-tilegx.h \
	../../gdb-14.2/bfd/elfxx-x86.c \
	../../gdb-14.2/bfd/elfxx-x86.h \
	../../gdb-14.2/bfd/format.c \
	../../gdb-14.2/bfd/genlink.h \
	../../gdb-14.2/bfd/go32stub.h \
	../../gdb-14.2/bfd/hash.c \
	../../gdb-14.2/bfd/hpux-core.c \
	../../gdb-14.2/bfd/i386aout.c \
	../../gdb-14.2/bfd/i386bsd.c \
	../../gdb-14.2/bfd/i386lynx.c \
	../../gdb-14.2/bfd/i386msdos.c \
	../../gdb-14.2/bfd/ihex.c \
	../../gdb-14.2/bfd/irix-core.c \
	../../gdb-14.2/bfd/libaout.h \
	../../gdb-14.2/bfd/libbfd.c \
	../../gdb-14.2/bfd/libbfd.h \
	../../gdb-14.2/bfd/libcoff.h \
	../../gdb-14.2/bfd/libecoff.h \
	../../gdb-14.2/bfd/libhppa.h \
	../../gdb-14.2/bfd/libpei.h \
	../../gdb-14.2/bfd/libxcoff.h \
	../../gdb-14.2/bfd/linker.c \
	../../gdb-14.2/bfd/lynx-core.c \
	../../gdb-14.2/bfd/mach-o-aarch64.c \
	../../gdb-14.2/bfd/mach-o-arm.c \
	../../gdb-14.2/bfd/mach-o-i386.c \
	../../gdb-14.2/bfd/mach-o-x86-64.c \
	../../gdb-14.2/bfd/mach-o.c \
	../../gdb-14.2/bfd/mach-o.h \
	../../gdb-14.2/bfd/merge.c \
	../../gdb-14.2/bfd/mmo.c \
	../../gdb-14.2/bfd/netbsd-core.c \
	../../gdb-14.2/bfd/netbsd.h \
	../../gdb-14.2/bfd/ns32k.h \
	../../gdb-14.2/bfd/ns32knetbsd.c \
	../../gdb-14.2/bfd/opncls.c \
	../../gdb-14.2/bfd/osf-core.c \
	../../gdb-14.2/bfd/pc532-mach.c \
	../../gdb-14.2/bfd/pdb.c \
	../../gdb-14.2/bfd/pdp11.c \
	../../gdb-14.2/bfd/pe-aarch64.c \
	../../gdb-14.2/bfd/pe-arm-wince.c \
	../../gdb-14.2/bfd/pe-arm.c \
	../../gdb-14.2/bfd/pe-i386.c \
	../../gdb-14.2/bfd/pe-mcore.c \
	../../gdb-14.2/bfd/pe-sh.c \
	../../gdb-14.2/bfd/pe-x86_64.c \
	../../gdb-14.2/bfd/pef-traceback.h \
	../../gdb-14.2/bfd/pef.c \
	../../gdb-14.2/bfd/pef.h \
	../../gdb-14.2/bfd/pei-aarch64.c \
	../../gdb-14.2/bfd/pei-arm-wince.c \
	../../gdb-14.2/bfd/pei-arm.c \
	../../gdb-14.2/bfd/pei-i386.c \
	../../gdb-14.2/bfd/pei-ia64.c \
	../../gdb-14.2/bfd/pei-loongarch64.c \
	../../gdb-14.2/bfd/pei-mcore.c \
	../../gdb-14.2/bfd/pei-sh.c \
	../../gdb-14.2/bfd/pei-x86_64.c \
	../../gdb-14.2/bfd/peicode.h \
	../../gdb-14.2/bfd/plugin.c \
	../../gdb-14.2/bfd/plugin.h \
	../../gdb-14.2/bfd/ppcboot.c \
	../../gdb-14.2/bfd/reloc.c \
	../../gdb-14.2/bfd/reloc16.c \
	../../gdb-14.2/bfd/rs6000-core.c \
	../../gdb-14.2/bfd/section.c \
	../../gdb-14.2/bfd/simple.c \
	../../gdb-14.2/bfd/som.c \
	../../gdb-14.2/bfd/som.h \
	../../gdb-14.2/bfd/srec.c \
	../../gdb-14.2/bfd/stab-syms.c \
	../../gdb-14.2/bfd/stabs.c \
	../../gdb-14.2/bfd/syms.c \
	../../gdb-14.2/bfd/sysdep.h \
	../../gdb-14.2/bfd/targets.c \
	../../gdb-14.2/bfd/tekhex.c \
	../../gdb-14.2/bfd/trad-core.c \
	../../gdb-14.2/bfd/vax1knetbsd.c \
	../../gdb-14.2/bfd/vaxnetbsd.c \
	../../gdb-14.2/bfd/verilog.c \
	../../gdb-14.2/bfd/version.h \
	../../gdb-14.2/bfd/vms-alpha.c \
	../../gdb-14.2/bfd/vms-lib.c \
	../../gdb-14.2/bfd/vms-misc.c \
	../../gdb-14.2/bfd/vms.h \
	../../gdb-14.2/bfd/wasm-module.c \
	../../gdb-14.2/bfd/wasm-module.h \
	../../gdb-14.2/bfd/xcofflink.c \
	../../gdb-14.2/bfd/xcofflink.h \
	../../gdb-14.2/bfd/xsym.c \
	../../gdb-14.2/bfd/xsym.h \
	../../gdb-14.2/bfd/xtensa-dynconfig.c \
	../../gdb-14.2/bfd/xtensa-isa.c \
	../../gdb-14.2/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-kvx.c \
	../elf32-loongarch.c \
	../elf32-riscv.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-kvx.c \
	../elf64-loongarch.c \
	../elf64-riscv.c \
	../elf64-target.h \
	../pe-aarch64igen.c \
	../pe-loongarch64igen.c \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS =  da.gmo es.gmo fi.gmo fr.gmo hr.gmo id.gmo ja.gmo ka.gmo pt.gmo ro.gmo ru.gmo rw.gmo sr.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo da.gmo es.gmo fi.gmo fr.gmo hr.gmo id.gmo ja.gmo ka.gmo pt.gmo ro.gmo ru.gmo rw.gmo sr.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo
CATOBJEXT = .gmo
INSTOBJEXT = .mo

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-yes

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	sed -e '/^#:/s,$(top_srcdir)/,,g' < $(PACKAGE).po > $@-t
	mv -f $@-t $@

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-pdf:
install-data: install-data-yes
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
