TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    lista_marcas.cpp \
    nodo_marcas.cpp \
    marcas.cpp \
    licoreria.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    lista_marcas.h \
    nodo_marcas.h \
    marcas.h \
    licoreria.h

