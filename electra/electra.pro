TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../protocol/release/ -lprotocol
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../protocol/debug/ -lprotocol
else:unix: LIBS += -L$$OUT_PWD/../protocol/ -lprotocol

INCLUDEPATH += $$PWD/../protocol
DEPENDPATH += $$PWD/../protocol

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../protocol/release/libprotocol.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../protocol/debug/libprotocol.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../protocol/release/protocol.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../protocol/debug/protocol.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../protocol/libprotocol.a
