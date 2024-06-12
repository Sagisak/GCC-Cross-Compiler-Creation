# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2003-2023 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = opcodes
VERSION = 2.41.50

SHELL = /bin/sh


srcdir = ../../gdb-14.2/opcodes/po
top_srcdir = ../../gdb-14.2/opcodes
VPATH = ../../gdb-14.2/opcodes/po
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
MKINSTALLDIRS = $(top_builddir)/../gdb-14.2/opcodes/../mkinstalldirs

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
POFILES =  $(srcdir)/da.po $(srcdir)/de.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/ga.po $(srcdir)/id.po $(srcdir)/it.po $(srcdir)/nl.po $(srcdir)/pt_BR.po $(srcdir)/ro.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po
GMOFILES =  $(srcdir)/da.gmo $(srcdir)/de.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/ga.gmo $(srcdir)/id.gmo $(srcdir)/it.gmo $(srcdir)/nl.gmo $(srcdir)/pt_BR.gmo $(srcdir)/ro.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo
DISTFILES = ChangeLog Makefile.in.in POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

POTFILES = \
     ../../gdb-14.2/opcodes/aarch64-asm-2.c \
     ../../gdb-14.2/opcodes/aarch64-asm.c \
     ../../gdb-14.2/opcodes/aarch64-asm.h \
     ../../gdb-14.2/opcodes/aarch64-dis-2.c \
     ../../gdb-14.2/opcodes/aarch64-dis.c \
     ../../gdb-14.2/opcodes/aarch64-dis.h \
     ../../gdb-14.2/opcodes/aarch64-opc-2.c \
     ../../gdb-14.2/opcodes/aarch64-opc.c \
     ../../gdb-14.2/opcodes/aarch64-opc.h \
     ../../gdb-14.2/opcodes/aarch64-tbl.h \
     ../../gdb-14.2/opcodes/alpha-dis.c \
     ../../gdb-14.2/opcodes/alpha-opc.c \
     ../../gdb-14.2/opcodes/arc-dis.c \
     ../../gdb-14.2/opcodes/arc-ext.c \
     ../../gdb-14.2/opcodes/arc-opc.c \
     ../../gdb-14.2/opcodes/arm-dis.c \
     ../../gdb-14.2/opcodes/avr-dis.c \
     ../../gdb-14.2/opcodes/bfin-dis.c \
     ../../gdb-14.2/opcodes/bpf-dis.c \
     ../../gdb-14.2/opcodes/bpf-opc.c \
     ../../gdb-14.2/opcodes/cgen-asm.c \
     ../../gdb-14.2/opcodes/cgen-bitset.c \
     ../../gdb-14.2/opcodes/cgen-dis.c \
     ../../gdb-14.2/opcodes/cgen-opc.c \
     ../../gdb-14.2/opcodes/cr16-dis.c \
     ../../gdb-14.2/opcodes/cr16-opc.c \
     ../../gdb-14.2/opcodes/cris-desc.c \
     ../../gdb-14.2/opcodes/cris-desc.h \
     ../../gdb-14.2/opcodes/cris-dis.c \
     ../../gdb-14.2/opcodes/cris-opc.c \
     ../../gdb-14.2/opcodes/cris-opc.h \
     ../../gdb-14.2/opcodes/crx-dis.c \
     ../../gdb-14.2/opcodes/crx-opc.c \
     ../../gdb-14.2/opcodes/csky-dis.c \
     ../../gdb-14.2/opcodes/d10v-dis.c \
     ../../gdb-14.2/opcodes/d10v-opc.c \
     ../../gdb-14.2/opcodes/d30v-dis.c \
     ../../gdb-14.2/opcodes/d30v-opc.c \
     ../../gdb-14.2/opcodes/dis-buf.c \
     ../../gdb-14.2/opcodes/dis-init.c \
     ../../gdb-14.2/opcodes/disassemble.c \
     ../../gdb-14.2/opcodes/dlx-dis.c \
     ../../gdb-14.2/opcodes/epiphany-asm.c \
     ../../gdb-14.2/opcodes/epiphany-desc.c \
     ../../gdb-14.2/opcodes/epiphany-desc.h \
     ../../gdb-14.2/opcodes/epiphany-dis.c \
     ../../gdb-14.2/opcodes/epiphany-ibld.c \
     ../../gdb-14.2/opcodes/epiphany-opc.c \
     ../../gdb-14.2/opcodes/epiphany-opc.h \
     ../../gdb-14.2/opcodes/fr30-asm.c \
     ../../gdb-14.2/opcodes/fr30-desc.c \
     ../../gdb-14.2/opcodes/fr30-desc.h \
     ../../gdb-14.2/opcodes/fr30-dis.c \
     ../../gdb-14.2/opcodes/fr30-ibld.c \
     ../../gdb-14.2/opcodes/fr30-opc.c \
     ../../gdb-14.2/opcodes/fr30-opc.h \
     ../../gdb-14.2/opcodes/frv-asm.c \
     ../../gdb-14.2/opcodes/frv-desc.c \
     ../../gdb-14.2/opcodes/frv-desc.h \
     ../../gdb-14.2/opcodes/frv-dis.c \
     ../../gdb-14.2/opcodes/frv-ibld.c \
     ../../gdb-14.2/opcodes/frv-opc.c \
     ../../gdb-14.2/opcodes/frv-opc.h \
     ../../gdb-14.2/opcodes/ft32-dis.c \
     ../../gdb-14.2/opcodes/ft32-opc.c \
     ../../gdb-14.2/opcodes/h8300-dis.c \
     ../../gdb-14.2/opcodes/hppa-dis.c \
     ../../gdb-14.2/opcodes/i386-dis.c \
     ../../gdb-14.2/opcodes/i386-opc.h \
     ../../gdb-14.2/opcodes/ia64-asmtab.h \
     ../../gdb-14.2/opcodes/ia64-dis.c \
     ../../gdb-14.2/opcodes/ia64-opc.c \
     ../../gdb-14.2/opcodes/ia64-opc.h \
     ../../gdb-14.2/opcodes/ip2k-asm.c \
     ../../gdb-14.2/opcodes/ip2k-desc.c \
     ../../gdb-14.2/opcodes/ip2k-desc.h \
     ../../gdb-14.2/opcodes/ip2k-dis.c \
     ../../gdb-14.2/opcodes/ip2k-ibld.c \
     ../../gdb-14.2/opcodes/ip2k-opc.c \
     ../../gdb-14.2/opcodes/ip2k-opc.h \
     ../../gdb-14.2/opcodes/iq2000-asm.c \
     ../../gdb-14.2/opcodes/iq2000-desc.c \
     ../../gdb-14.2/opcodes/iq2000-desc.h \
     ../../gdb-14.2/opcodes/iq2000-dis.c \
     ../../gdb-14.2/opcodes/iq2000-ibld.c \
     ../../gdb-14.2/opcodes/iq2000-opc.c \
     ../../gdb-14.2/opcodes/iq2000-opc.h \
     ../../gdb-14.2/opcodes/kvx-dis.c \
     ../../gdb-14.2/opcodes/kvx-opc.c \
     ../../gdb-14.2/opcodes/lm32-asm.c \
     ../../gdb-14.2/opcodes/lm32-desc.c \
     ../../gdb-14.2/opcodes/lm32-desc.h \
     ../../gdb-14.2/opcodes/lm32-dis.c \
     ../../gdb-14.2/opcodes/lm32-ibld.c \
     ../../gdb-14.2/opcodes/lm32-opc.c \
     ../../gdb-14.2/opcodes/lm32-opc.h \
     ../../gdb-14.2/opcodes/lm32-opinst.c \
     ../../gdb-14.2/opcodes/loongarch-coder.c \
     ../../gdb-14.2/opcodes/loongarch-dis.c \
     ../../gdb-14.2/opcodes/loongarch-opc.c \
     ../../gdb-14.2/opcodes/m10200-dis.c \
     ../../gdb-14.2/opcodes/m10200-opc.c \
     ../../gdb-14.2/opcodes/m10300-dis.c \
     ../../gdb-14.2/opcodes/m10300-opc.c \
     ../../gdb-14.2/opcodes/m32c-asm.c \
     ../../gdb-14.2/opcodes/m32c-desc.c \
     ../../gdb-14.2/opcodes/m32c-desc.h \
     ../../gdb-14.2/opcodes/m32c-dis.c \
     ../../gdb-14.2/opcodes/m32c-ibld.c \
     ../../gdb-14.2/opcodes/m32c-opc.c \
     ../../gdb-14.2/opcodes/m32c-opc.h \
     ../../gdb-14.2/opcodes/m32r-asm.c \
     ../../gdb-14.2/opcodes/m32r-desc.c \
     ../../gdb-14.2/opcodes/m32r-desc.h \
     ../../gdb-14.2/opcodes/m32r-dis.c \
     ../../gdb-14.2/opcodes/m32r-ibld.c \
     ../../gdb-14.2/opcodes/m32r-opc.c \
     ../../gdb-14.2/opcodes/m32r-opc.h \
     ../../gdb-14.2/opcodes/m32r-opinst.c \
     ../../gdb-14.2/opcodes/m68hc11-dis.c \
     ../../gdb-14.2/opcodes/m68hc11-opc.c \
     ../../gdb-14.2/opcodes/m68k-dis.c \
     ../../gdb-14.2/opcodes/m68k-opc.c \
     ../../gdb-14.2/opcodes/mcore-dis.c \
     ../../gdb-14.2/opcodes/mcore-opc.h \
     ../../gdb-14.2/opcodes/mep-asm.c \
     ../../gdb-14.2/opcodes/mep-desc.c \
     ../../gdb-14.2/opcodes/mep-desc.h \
     ../../gdb-14.2/opcodes/mep-dis.c \
     ../../gdb-14.2/opcodes/mep-ibld.c \
     ../../gdb-14.2/opcodes/mep-opc.c \
     ../../gdb-14.2/opcodes/mep-opc.h \
     ../../gdb-14.2/opcodes/metag-dis.c \
     ../../gdb-14.2/opcodes/microblaze-dis.c \
     ../../gdb-14.2/opcodes/microblaze-opc.h \
     ../../gdb-14.2/opcodes/micromips-opc.c \
     ../../gdb-14.2/opcodes/mips-dis.c \
     ../../gdb-14.2/opcodes/mips-opc.c \
     ../../gdb-14.2/opcodes/mips16-opc.c \
     ../../gdb-14.2/opcodes/mmix-dis.c \
     ../../gdb-14.2/opcodes/mmix-opc.c \
     ../../gdb-14.2/opcodes/moxie-dis.c \
     ../../gdb-14.2/opcodes/moxie-opc.c \
     ../../gdb-14.2/opcodes/msp430-decode.c \
     ../../gdb-14.2/opcodes/msp430-dis.c \
     ../../gdb-14.2/opcodes/mt-asm.c \
     ../../gdb-14.2/opcodes/mt-desc.c \
     ../../gdb-14.2/opcodes/mt-desc.h \
     ../../gdb-14.2/opcodes/mt-dis.c \
     ../../gdb-14.2/opcodes/mt-ibld.c \
     ../../gdb-14.2/opcodes/mt-opc.c \
     ../../gdb-14.2/opcodes/mt-opc.h \
     ../../gdb-14.2/opcodes/nds32-asm.c \
     ../../gdb-14.2/opcodes/nds32-dis.c \
     ../../gdb-14.2/opcodes/nfp-dis.c \
     ../../gdb-14.2/opcodes/nios2-dis.c \
     ../../gdb-14.2/opcodes/nios2-opc.c \
     ../../gdb-14.2/opcodes/ns32k-dis.c \
     ../../gdb-14.2/opcodes/or1k-asm.c \
     ../../gdb-14.2/opcodes/or1k-desc.c \
     ../../gdb-14.2/opcodes/or1k-dis.c \
     ../../gdb-14.2/opcodes/or1k-ibld.c \
     ../../gdb-14.2/opcodes/or1k-opc.c \
     ../../gdb-14.2/opcodes/pdp11-dis.c \
     ../../gdb-14.2/opcodes/pdp11-opc.c \
     ../../gdb-14.2/opcodes/pj-dis.c \
     ../../gdb-14.2/opcodes/pj-opc.c \
     ../../gdb-14.2/opcodes/ppc-dis.c \
     ../../gdb-14.2/opcodes/ppc-opc.c \
     ../../gdb-14.2/opcodes/pru-dis.c \
     ../../gdb-14.2/opcodes/pru-opc.c \
     ../../gdb-14.2/opcodes/riscv-dis.c \
     ../../gdb-14.2/opcodes/riscv-opc.c \
     ../../gdb-14.2/opcodes/rl78-decode.c \
     ../../gdb-14.2/opcodes/rl78-dis.c \
     ../../gdb-14.2/opcodes/rx-decode.c \
     ../../gdb-14.2/opcodes/rx-dis.c \
     ../../gdb-14.2/opcodes/s12z-dis.c \
     ../../gdb-14.2/opcodes/s12z-opc.c \
     ../../gdb-14.2/opcodes/s390-dis.c \
     ../../gdb-14.2/opcodes/s390-opc.c \
     ../../gdb-14.2/opcodes/score-dis.c \
     ../../gdb-14.2/opcodes/score-opc.h \
     ../../gdb-14.2/opcodes/score7-dis.c \
     ../../gdb-14.2/opcodes/sh-dis.c \
     ../../gdb-14.2/opcodes/sh-opc.h \
     ../../gdb-14.2/opcodes/sparc-dis.c \
     ../../gdb-14.2/opcodes/sparc-opc.c \
     ../../gdb-14.2/opcodes/spu-dis.c \
     ../../gdb-14.2/opcodes/spu-opc.c \
     ../../gdb-14.2/opcodes/sysdep.h \
     ../../gdb-14.2/opcodes/tic30-dis.c \
     ../../gdb-14.2/opcodes/tic4x-dis.c \
     ../../gdb-14.2/opcodes/tic54x-dis.c \
     ../../gdb-14.2/opcodes/tic54x-opc.c \
     ../../gdb-14.2/opcodes/tic6x-dis.c \
     ../../gdb-14.2/opcodes/tilegx-dis.c \
     ../../gdb-14.2/opcodes/tilegx-opc.c \
     ../../gdb-14.2/opcodes/tilepro-dis.c \
     ../../gdb-14.2/opcodes/tilepro-opc.c \
     ../../gdb-14.2/opcodes/v850-dis.c \
     ../../gdb-14.2/opcodes/v850-opc.c \
     ../../gdb-14.2/opcodes/vax-dis.c \
     ../../gdb-14.2/opcodes/visium-dis.c \
     ../../gdb-14.2/opcodes/visium-opc.c \
     ../../gdb-14.2/opcodes/wasm32-dis.c \
     ../../gdb-14.2/opcodes/xgate-dis.c \
     ../../gdb-14.2/opcodes/xgate-opc.c \
     ../../gdb-14.2/opcodes/xstormy16-asm.c \
     ../../gdb-14.2/opcodes/xstormy16-desc.c \
     ../../gdb-14.2/opcodes/xstormy16-desc.h \
     ../../gdb-14.2/opcodes/xstormy16-dis.c \
     ../../gdb-14.2/opcodes/xstormy16-ibld.c \
     ../../gdb-14.2/opcodes/xstormy16-opc.c \
     ../../gdb-14.2/opcodes/xstormy16-opc.h \
     ../../gdb-14.2/opcodes/xtensa-dis.c \
     ../../gdb-14.2/opcodes/z80-dis.c \
     ../../gdb-14.2/opcodes/z8k-dis.c \
     ../../gdb-14.2/opcodes/z8k-opc.h

CATALOGS =  da.gmo de.gmo es.gmo fi.gmo fr.gmo ga.gmo id.gmo it.gmo nl.gmo pt_BR.gmo ro.gmo sr.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo da.gmo de.gmo es.gmo fi.gmo fr.gmo ga.gmo id.gmo it.gmo nl.gmo pt_BR.gmo ro.gmo sr.gmo sv.gmo tr.gmo uk.gmo vi.gmo zh_CN.gmo
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

$(srcdir)/$(PACKAGE).pot: $(POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/POTFILES.in
	rm -f $(srcdir)/$(PACKAGE).pot
	mv $(PACKAGE).po $(srcdir)/$(PACKAGE).pot

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
	rm -f Makefile Makefile.in POTFILES *.mo *.msg *.cat *.cat.m

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES)

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

POTFILES: POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/POTFILES.in

Makefile: Make-in ../config.status POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
