# Makefile.in generated by automake 1.8.3 from Makefile.am.
# jit/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001, 2002,
# 2003, 2004  Free Software Foundation, Inc.
# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.





SOURCES = $(libdynarmemu_a_SOURCES) $(decomp_server_SOURCES) $(ema_jit_SOURCES)

srcdir = .
top_srcdir = ..

pkgdatadir = $(datadir)/SimIt-ARM
pkglibdir = $(libdir)/SimIt-ARM
pkgincludedir = $(includedir)/SimIt-ARM
top_builddir = ..
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
INSTALL = /usr/bin/install -c
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
bin_PROGRAMS = ema_jit$(EXEEXT) decomp_server$(EXEEXT)
subdir = jit
DIST_COMMON = $(include_HEADERS) $(srcdir)/Makefile.am \
	$(srcdir)/Makefile.in $(srcdir)/build_dll.hpp.in
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/acinclude.m4 \
	$(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
mkinstalldirs = $(mkdir_p)
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES = build_dll.hpp
AR = ar
ARFLAGS = cru
am__installdirs = "$(DESTDIR)$(libdir)" "$(DESTDIR)$(bindir)" "$(DESTDIR)$(includedir)"
libLIBRARIES_INSTALL = $(INSTALL_DATA)
LIBRARIES = $(lib_LIBRARIES)
libdynarmemu_a_AR = $(AR) $(ARFLAGS)
libdynarmemu_a_LIBADD =
am_libdynarmemu_a_OBJECTS = dyn_arm_emul.$(OBJEXT) arm_gen.$(OBJEXT) \
	arm_iss_jit.$(OBJEXT)
libdynarmemu_a_OBJECTS = $(am_libdynarmemu_a_OBJECTS)
binPROGRAMS_INSTALL = $(INSTALL_PROGRAM)
PROGRAMS = $(bin_PROGRAMS)
am_decomp_server_OBJECTS = decomp_server_main.$(OBJEXT) \
	decomp_server.$(OBJEXT)
decomp_server_OBJECTS = $(am_decomp_server_OBJECTS)
decomp_server_DEPENDENCIES = libdynarmemu.a \
	$(top_builddir)/emulator/libarmemu.a
am_ema_jit_OBJECTS = dyn_main.$(OBJEXT) dyn_arm_emul.$(OBJEXT)
ema_jit_OBJECTS = $(am_ema_jit_OBJECTS)
ema_jit_DEPENDENCIES = libdynarmemu.a \
	$(top_builddir)/emulator/libarmemu.a
DEFAULT_INCLUDES = -I. -I$(srcdir) -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
DEP_FILES = ./$(DEPDIR)/arm_gen.Po \
	./$(DEPDIR)/arm_iss_jit.Po \
	./$(DEPDIR)/decomp_server.Po \
	./$(DEPDIR)/decomp_server_main.Po \
	./$(DEPDIR)/dyn_arm_emul.Po \
	./$(DEPDIR)/dyn_main.Po
CXXCOMPILE = $(CXX) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) \
	$(AM_CPPFLAGS) $(CPPFLAGS) $(AM_CXXFLAGS) $(CXXFLAGS)
CXXLD = $(CXX)
CXXLINK = $(CXXLD) $(AM_CXXFLAGS) $(CXXFLAGS) $(AM_LDFLAGS) $(LDFLAGS) \
	-o $@
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
SOURCES = $(libdynarmemu_a_SOURCES) $(decomp_server_SOURCES) \
	$(ema_jit_SOURCES)
DIST_SOURCES = $(libdynarmemu_a_SOURCES) $(decomp_server_SOURCES) \
	$(ema_jit_SOURCES)
includeHEADERS_INSTALL = $(INSTALL_HEADER)
HEADERS = $(include_HEADERS)
ETAGS = etags
CTAGS = ctags
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = ${SHELL} /home/barba/Personali/SimIt-ARM/missing --run aclocal-1.8
AMDEP_FALSE = #
AMDEP_TRUE = 
AMTAR = ${SHELL} /home/barba/Personali/SimIt-ARM/missing --run tar
AUTOCONF = ${SHELL} /home/barba/Personali/SimIt-ARM/missing --run autoconf
AUTOHEADER = ${SHELL} /home/barba/Personali/SimIt-ARM/missing --run autoheader
AUTOMAKE = ${SHELL} /home/barba/Personali/SimIt-ARM/missing --run automake-1.8
AWK = gawk
CC = gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2
CPP = gcc -E
CPPFLAGS = 
CXX = g++
CXXDEPMODE = depmode=gcc3
CXXFLAGS = -O3 -finline-limit=5000 -fomit-frame-pointer
CYGPATH_W = echo
DEFS = -DHAVE_CONFIG_H
DEPDIR = .deps
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
ENABLE_DEV_FALSE = 
ENABLE_DEV_TRUE = #
ENABLE_JIT_FALSE = 
ENABLE_JIT_TRUE = #
EXEEXT = 
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = ${SHELL} $(install_sh) -c -s
LDFLAGS = 
LEX = flex
LEXLIB = -lfl
LEX_OUTPUT_ROOT = lex.yy
LIBOBJS = 
LIBS = 
LTLIBOBJS = 
MAKEINFO = ${SHELL} /home/barba/Personali/SimIt-ARM/missing --run makeinfo
OBJEXT = o
PACKAGE = SimIt-ARM
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 
PACKAGE_STRING = 
PACKAGE_TARNAME = 
PACKAGE_VERSION = 
PATH_SEPARATOR = :
POW_LIB = 
RANLIB = ranlib
SET_MAKE = 
SHELL = /bin/sh
STRIP = 
VERSION = 3.0
YACC = bison -y
ac_ct_CC = gcc
ac_ct_CXX = g++
ac_ct_RANLIB = @ac_ct_RANLIB@
ac_ct_STRIP = @ac_ct_STRIP@
am__fastdepCC_FALSE = #
am__fastdepCC_TRUE = 
am__fastdepCXX_FALSE = #
am__fastdepCXX_TRUE = 
am__include = include
am__leading_dot = .
am__quote = 
bindir = ${exec_prefix}/bin
build_alias = 
datadir = ${prefix}/share
exec_prefix = ${prefix}
host_alias = 
includedir = ${prefix}/include
infodir = ${prefix}/share/info
install_sh = /home/barba/Personali/SimIt-ARM/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localstatedir = ${prefix}/var
mandir = ${prefix}/share/man
mkdir_p = mkdir -p -- .
oldincludedir = /usr/include
prefix = /home/barba/Personali/SimIt-ARM/build
program_transform_name = s,x,x,
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
sysconfdir = ${prefix}/etc
target_alias = 

#decomp builds the static compiled simulator
# decomp_SOURCES = decomp.cpp decomp.hpp decomp_main.cpp auto_emitc.h

# decomp_LDADD = libdynarmemu.a $(top_builddir)/emulator/libarmemu.a
# decomp_LDFLAGS = -ldl

#ema_jit is the dynamic compiled simulator
ema_jit_SOURCES = dyn_main.cpp dyn_arm_emul.cpp
ema_jit_LDADD = libdynarmemu.a $(top_builddir)/emulator/libarmemu.a
ema_jit_LDFLAGS = -export-dynamic -ldl -lpthread

#server to assist compiled simulation 
decomp_server_SOURCES = decomp_server_main.cpp decomp_server.cpp \
	decomp_server.hpp

decomp_server_LDADD = libdynarmemu.a $(top_builddir)/emulator/libarmemu.a
decomp_server_LDFLAGS = -ldl
INCLUDES = -I$(top_srcdir)/emulator 
include_HEADERS = arch_jit.hpp dyn_arm_emul.hpp build_dll.hpp
lib_LIBRARIES = libdynarmemu.a
libdynarmemu_a_SOURCES = dyn_arm_emul.cpp arm_gen.cpp \
		dyn_arm_emul.hpp arm_gen.hpp arm_iss_jit.cpp auto_emitc.h arch_gen.hpp

EXTRA_DIST = build_dll.hpp.in
all: all-am

.SUFFIXES:
.SUFFIXES: .cpp .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh \
		&& exit 0; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --gnu  jit/Makefile'; \
	cd $(top_srcdir) && \
	  $(AUTOMAKE) --gnu  jit/Makefile
.PRECIOUS: Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
build_dll.hpp: $(top_builddir)/config.status $(srcdir)/build_dll.hpp.in
	cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@
install-libLIBRARIES: $(lib_LIBRARIES)
	@$(NORMAL_INSTALL)
	test -z "$(libdir)" || $(mkdir_p) "$(DESTDIR)$(libdir)"
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    f="`echo $$p | sed -e 's|^.*/||'`"; \
	    echo " $(libLIBRARIES_INSTALL) '$$p' '$(DESTDIR)$(libdir)/$$f'"; \
	    $(libLIBRARIES_INSTALL) "$$p" "$(DESTDIR)$(libdir)/$$f"; \
	  else :; fi; \
	done
	@$(POST_INSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  if test -f $$p; then \
	    p="`echo $$p | sed -e 's|^.*/||'`"; \
	    echo " $(RANLIB) '$(DESTDIR)$(libdir)/$$p'"; \
	    $(RANLIB) "$(DESTDIR)$(libdir)/$$p"; \
	  else :; fi; \
	done

uninstall-libLIBRARIES:
	@$(NORMAL_UNINSTALL)
	@list='$(lib_LIBRARIES)'; for p in $$list; do \
	  p="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f '$(DESTDIR)$(libdir)/$$p'"; \
	  rm -f "$(DESTDIR)$(libdir)/$$p"; \
	done

clean-libLIBRARIES:
	-test -z "$(lib_LIBRARIES)" || rm -f $(lib_LIBRARIES)
libdynarmemu.a: $(libdynarmemu_a_OBJECTS) $(libdynarmemu_a_DEPENDENCIES) 
	-rm -f libdynarmemu.a
	$(libdynarmemu_a_AR) libdynarmemu.a $(libdynarmemu_a_OBJECTS) $(libdynarmemu_a_LIBADD)
	$(RANLIB) libdynarmemu.a
install-binPROGRAMS: $(bin_PROGRAMS)
	@$(NORMAL_INSTALL)
	test -z "$(bindir)" || $(mkdir_p) "$(DESTDIR)$(bindir)"
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  p1=`echo $$p|sed 's/$(EXEEXT)$$//'`; \
	  if test -f $$p \
	  ; then \
	    f=`echo "$$p1" | sed 's,^.*/,,;$(transform);s/$$/$(EXEEXT)/'`; \
	   echo " $(INSTALL_PROGRAM_ENV) $(binPROGRAMS_INSTALL) '$$p' '$(DESTDIR)$(bindir)/$$f'"; \
	   $(INSTALL_PROGRAM_ENV) $(binPROGRAMS_INSTALL) "$$p" "$(DESTDIR)$(bindir)/$$f" || exit 1; \
	  else :; fi; \
	done

uninstall-binPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(bin_PROGRAMS)'; for p in $$list; do \
	  f=`echo "$$p" | sed 's,^.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/'`; \
	  echo " rm -f '$(DESTDIR)$(bindir)/$$f'"; \
	  rm -f "$(DESTDIR)$(bindir)/$$f"; \
	done

clean-binPROGRAMS:
	-test -z "$(bin_PROGRAMS)" || rm -f $(bin_PROGRAMS)
decomp_server$(EXEEXT): $(decomp_server_OBJECTS) $(decomp_server_DEPENDENCIES) 
	@rm -f decomp_server$(EXEEXT)
	$(CXXLINK) $(decomp_server_LDFLAGS) $(decomp_server_OBJECTS) $(decomp_server_LDADD) $(LIBS)
ema_jit$(EXEEXT): $(ema_jit_OBJECTS) $(ema_jit_DEPENDENCIES) 
	@rm -f ema_jit$(EXEEXT)
	$(CXXLINK) $(ema_jit_LDFLAGS) $(ema_jit_OBJECTS) $(ema_jit_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/arm_gen.Po
include ./$(DEPDIR)/arm_iss_jit.Po
include ./$(DEPDIR)/decomp_server.Po
include ./$(DEPDIR)/decomp_server_main.Po
include ./$(DEPDIR)/dyn_arm_emul.Po
include ./$(DEPDIR)/dyn_main.Po

.cpp.o:
	if $(CXXCOMPILE) -MT $@ -MD -MP -MF "$(DEPDIR)/$*.Tpo" -c -o $@ $<; \
	then mv -f "$(DEPDIR)/$*.Tpo" "$(DEPDIR)/$*.Po"; else rm -f "$(DEPDIR)/$*.Tpo"; exit 1; fi
#	source='$<' object='$@' libtool=no \
#	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
#	$(CXXDEPMODE) $(depcomp) \
#	$(CXXCOMPILE) -c -o $@ $<

.cpp.obj:
	if $(CXXCOMPILE) -MT $@ -MD -MP -MF "$(DEPDIR)/$*.Tpo" -c -o $@ `$(CYGPATH_W) '$<'`; \
	then mv -f "$(DEPDIR)/$*.Tpo" "$(DEPDIR)/$*.Po"; else rm -f "$(DEPDIR)/$*.Tpo"; exit 1; fi
#	source='$<' object='$@' libtool=no \
#	depfile='$(DEPDIR)/$*.Po' tmpdepfile='$(DEPDIR)/$*.TPo' \
#	$(CXXDEPMODE) $(depcomp) \
#	$(CXXCOMPILE) -c -o $@ `$(CYGPATH_W) '$<'`
uninstall-info-am:
install-includeHEADERS: $(include_HEADERS)
	@$(NORMAL_INSTALL)
	test -z "$(includedir)" || $(mkdir_p) "$(DESTDIR)$(includedir)"
	@list='$(include_HEADERS)'; for p in $$list; do \
	  if test -f "$$p"; then d=; else d="$(srcdir)/"; fi; \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " $(includeHEADERS_INSTALL) '$$d$$p' '$(DESTDIR)$(includedir)/$$f'"; \
	  $(includeHEADERS_INSTALL) "$$d$$p" "$(DESTDIR)$(includedir)/$$f"; \
	done

uninstall-includeHEADERS:
	@$(NORMAL_UNINSTALL)
	@list='$(include_HEADERS)'; for p in $$list; do \
	  f="`echo $$p | sed -e 's|^.*/||'`"; \
	  echo " rm -f '$(DESTDIR)$(includedir)/$$f'"; \
	  rm -f "$(DESTDIR)$(includedir)/$$f"; \
	done

ID: $(HEADERS) $(SOURCES) $(LISP) $(TAGS_FILES)
	list='$(SOURCES) $(HEADERS) $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	mkid -fID $$unique
tags: TAGS

TAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(ETAGS_ARGS)$$tags$$unique" \
	  || $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	     $$tags $$unique
ctags: CTAGS
CTAGS:  $(HEADERS) $(SOURCES)  $(TAGS_DEPENDENCIES) \
		$(TAGS_FILES) $(LISP)
	tags=; \
	here=`pwd`; \
	list='$(SOURCES) $(HEADERS)  $(LISP) $(TAGS_FILES)'; \
	unique=`for i in $$list; do \
	    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
	  done | \
	  $(AWK) '    { files[$$0] = 1; } \
	       END { for (i in files) print i; }'`; \
	test -z "$(CTAGS_ARGS)$$tags$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$tags $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && cd $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) $$here

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's|.|.|g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's|.|.|g'`; \
	list='$(DISTFILES)'; for file in $$list; do \
	  case $$file in \
	    $(srcdir)/*) file=`echo "$$file" | sed "s|^$$srcdirstrip/||"`;; \
	    $(top_srcdir)/*) file=`echo "$$file" | sed "s|^$$topsrcdirstrip/|$(top_builddir)/|"`;; \
	  esac; \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  dir=`echo "$$file" | sed -e 's,/[^/]*$$,,'`; \
	  if test "$$dir" != "$$file" && test "$$dir" != "."; then \
	    dir="/$$dir"; \
	    $(mkdir_p) "$(distdir)$$dir"; \
	  else \
	    dir=''; \
	  fi; \
	  if test -d $$d/$$file; then \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -pR $(srcdir)/$$file $(distdir)$$dir || exit 1; \
	    fi; \
	    cp -pR $$d/$$file $(distdir)$$dir || exit 1; \
	  else \
	    test -f $(distdir)/$$file \
	    || cp -p $$d/$$file $(distdir)/$$file \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(LIBRARIES) $(PROGRAMS) $(HEADERS)
installdirs:
	for dir in "$(DESTDIR)$(libdir)" "$(DESTDIR)$(bindir)" "$(DESTDIR)$(includedir)"; do \
	  test -z "$$dir" || $(mkdir_p) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	$(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	  install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	  `test -z '$(STRIP)' || \
	    echo "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'"` install
mostlyclean-generic:

clean-generic:

distclean-generic:
	-rm -f $(CONFIG_CLEAN_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-binPROGRAMS clean-generic clean-libLIBRARIES \
	mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

info: info-am

info-am:

install-data-am: install-includeHEADERS
	@$(NORMAL_INSTALL)
	$(MAKE) $(AM_MAKEFLAGS) install-data-hook

install-exec-am: install-binPROGRAMS install-libLIBRARIES

install-info: install-info-am

install-man:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-binPROGRAMS uninstall-includeHEADERS \
	uninstall-info-am uninstall-libLIBRARIES

.PHONY: CTAGS GTAGS all all-am check check-am clean clean-binPROGRAMS \
	clean-generic clean-libLIBRARIES ctags distclean \
	distclean-compile distclean-generic distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-binPROGRAMS install-data install-data-am install-exec \
	install-exec-am install-includeHEADERS install-info \
	install-info-am install-libLIBRARIES install-man install-strip \
	installcheck installcheck-am installdirs maintainer-clean \
	maintainer-clean-generic mostlyclean mostlyclean-compile \
	mostlyclean-generic pdf pdf-am ps ps-am tags uninstall \
	uninstall-am uninstall-binPROGRAMS uninstall-includeHEADERS \
	uninstall-info-am uninstall-libLIBRARIES

#	decomp_src/compiled_main.cpp decomp_src/compiled_run.cpp \
#	decomp_src/compiled_run.hpp decomp_src/Makefile

install-data-hook:
	\rm -rf ~/.ema/*
# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
