MAINTAINERCLEANFILES = Makefile.in

include ../../../Makefile_Elm_Helpers.am

EXTRA_DIST = \
elm_prefs_swallow.edc

filesdir = $(pkglibdir)/modules/prefs/$(MODULE_ARCH)
files_DATA = elm_prefs_swallow.edj

elm_prefs_swallow.edj: Makefile elm_prefs_swallow.edc
	$(AM_V_EDJ)$(EDJE_CC) $(EDJE_CC_FLAGS) \
        $(top_srcdir)/src/modules/prefs/elm_prefs_swallow.edc \
	$(top_builddir)/src/modules/prefs/elm_prefs_swallow.edj

AM_CPPFLAGS = \
-DELM_INTERNAL_API_ARGESFSDFEFC=1 \
-I. \
-I$(top_builddir) \
-I$(top_srcdir) \
-I$(top_srcdir)/src/lib \
-I$(top_builddir)/src/lib \
-DPACKAGE_DATA_DIR=\"$(pkgdatadir)\" \
-DLOCALE_DIR=\"$(localedir)\" \
-DPACKAGE_LIB_DIR=\"$(libdir)\" \
-DELEMENTARY_BUILD \
@ELEMENTARY_CFLAGS@

pkgdir = $(pkglibdir)/modules/prefs/$(MODULE_ARCH)
pkg_LTLIBRARIES = module.la

module_la_SOURCES = \
private.h \
item_widgets.inc \
page_widgets.inc \
prefs_iface.c \
elm_button.c \
elm_check.c \
elm_datetime.c \
elm_entry.c \
elm_label.c \
elm_separator.c \
elm_slider.c \
elm_spinner.c \
elm_swallow.c \
elm_vertical_box.c \
elm_horizontal_box.c \
elm_vertical_frame.c \
elm_horizontal_frame.c

module_la_LIBADD = @ELEMENTARY_LIBS@ $(top_builddir)/src/lib/libelementary.la
module_la_LDFLAGS = -no-undefined -module -avoid-version
module_la_LIBTOOLFLAGS = --tag=disable-static

clean-local:
	rm -f *.edj
