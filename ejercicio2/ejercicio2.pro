TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    circo.cpp \
    listazonas.cpp \
    listaventas.cpp \
    nodoventas.cpp \
    ventas.cpp \
    nodozonas.cpp \
    zonas.cpp \
    listatrabajadores.cpp \
    nodotrabajadores.cpp \
    trabajadores.cpp \
    listabutacas.cpp \
    nodobutacas.cpp \
    butacas.cpp \
    clientes.cpp \
    basicas.cpp \
    listaclientes.cpp \
    nodoclientes.cpp \
    persona.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    circo.h \
    listazonas.h \
    listaventas.h \
    nodoventas.h \
    ventas.h \
    nodozonas.h \
    zonas.h \
    listatrabajadores.h \
    nodotrabajadores.h \
    trabajadores.h \
    listabutacas.h \
    nodobutacas.h \
    butacas.h \
    clientes.h \
    basicas.h \
    listaclientes.h \
    nodoclientes.h \
    persona.h

