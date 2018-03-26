TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    vector.cpp \
    named.cpp \
    v3d.cpp \
    list.cpp \
    abstractvector.cpp \
    node.cpp

HEADERS += \
    vector.h \
    named.h \
    v3d.h \
    list.h \
    abstractvector.h \
    node.h
