greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = broadcom-manager
TRANSLATIONS += translations/broadcom-manager_ca.ts \
                translations/broadcom-manager_de.ts \
                translations/broadcom-manager_el.ts \
                translations/broadcom-manager_es.ts \
                translations/broadcom-manager_fr.ts \
                translations/broadcom-manager_it.ts \
                translations/broadcom-manager_ja.ts \
                translations/broadcom-manager_nl.ts \
                translations/broadcom-manager_pl.ts \
                translations/broadcom-manager_pt.ts \
                translations/broadcom-manager_ro.ts \
                translations/broadcom-manager_ru.ts \
                translations/broadcom-manager_sv.ts \
                translations/broadcom-manager_tr.ts
FORMS += meconfig.ui
HEADERS += mconfig.h
SOURCES += main.cpp mconfig.cpp
CONFIG += release warn_on thread qt


