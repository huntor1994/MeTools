TEMPLATE = subdirs

SUBDIRS += \
    metools-lib \
    #metools-tests \
    metools-ui

!build_pass:message(metools project dir: $${PWD})
