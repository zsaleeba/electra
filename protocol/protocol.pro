#-------------------------------------------------
#
# Project created by QtCreator 2017-12-29T12:02:10
#
#-------------------------------------------------

QT       -= core gui

TARGET = protocol
TEMPLATE = lib
CONFIG += staticlib c++14

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# Generates the protocol header files.
ELECTRA_PROTOCOL_FILES = electra_protocol.json
electra_protocol.name = Generate protocol headers based on electra_protocol.json
electra_protocol.input = ELECTRA_PROTOCOL_FILES
electra_protocol.output = electraabstractserver.h electraclient.h
electra_protocol.commands = jsonrpcstub $$PWD/electra_protocol.json --cpp-server=ElectraAbstractServer --cpp-client=ElectraClient
electra_protocol.CONFIG += no_link
QMAKE_EXTRA_COMPILERS += electra_protocol
PRE_TARGETDEPS += electraabstractserver.h electraclient.h

SOURCES += \
        electraserver.cpp

HEADERS += \
        electraserver.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DISTFILES += \
    electra_protocol.json
