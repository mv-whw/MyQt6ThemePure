// /qt/qml/MyQt6ThemePure/BasicComponents/MyTextArea.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qalgorithms.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qrandom.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qtimezone.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <QtQml/qqmllist.h>
#include <cmath>
#include <limits>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qt_qml_MyQt6ThemePure_BasicComponents_MyTextArea_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x3f,0x0,0x0,0x0,0x0,0x7,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xec,0x9,0x0,0x0,0x30,0x64,0x64,0x65,
0x39,0x34,0x61,0x35,0x34,0x31,0x38,0x36,
0x61,0x31,0x34,0x30,0x31,0x66,0x66,0x32,
0x31,0x39,0x65,0x36,0x34,0x32,0x32,0x37,
0x34,0x37,0x39,0x32,0x35,0x61,0x31,0x39,
0x66,0x63,0x30,0x61,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xc4,0xae,0x97,0x17,
0x64,0x91,0x62,0xc6,0x50,0x4c,0xc6,0xd3,
0x32,0x14,0x9e,0x7f,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x20,0x0,0x0,0x0,0xd0,0x2,0x0,0x0,
0x4,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x1,0x0,0x0,
0x10,0x0,0x0,0x0,0x8,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x48,0x1,0x0,0x0,
0x2,0x0,0x0,0x0,0x50,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x20,0x7,0x0,0x0,
0x60,0x1,0x0,0x0,0xb0,0x1,0x0,0x0,
0x8,0x2,0x0,0x0,0x60,0x2,0x0,0x0,
0x63,0x1,0x0,0x0,0x70,0x1,0x0,0x0,
0x53,0x0,0x0,0x0,0x80,0x1,0x0,0x0,
0x53,0x0,0x0,0x0,0x80,0x1,0x0,0x0,
0xb3,0x1,0x0,0x0,0xc0,0x1,0x0,0x0,
0xd3,0x1,0x0,0x0,0xb3,0x1,0x0,0x0,
0xf0,0x1,0x0,0x0,0x53,0x0,0x0,0x0,
0x90,0x0,0x0,0x0,0xe4,0x1,0x0,0x0,
0x53,0x0,0x0,0x0,0x90,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x40,0xc5,0x3f,
0x0,0x0,0x0,0x0,0x0,0x40,0xd1,0x3f,
0x44,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x3c,0x1,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xe,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x2,0x3c,0x3,
0x50,0x4,0x10,0x2,0x4c,0x2,0x10,0x1,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xf,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xf,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x4,0x3c,0x5,
0x50,0x4,0x12,0x19,0x4c,0x2,0x12,0x1a,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x26,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xc,0x0,0x0,0x0,
0x11,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x6,0x3c,0x7,
0x50,0x19,0x2e,0x8,0x18,0x7,0x2e,0x9,
0x3c,0xa,0x18,0xb,0x2e,0xb,0x3c,0xc,
0x9c,0xb,0x18,0xa,0xac,0xd,0x7,0x1,
0xa,0x4c,0x4,0x2e,0xe,0x3c,0xf,0x18,
0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x50,0x3,0x0,0x0,0x58,0x3,0x0,0x0,
0x70,0x3,0x0,0x0,0xa8,0x3,0x0,0x0,
0xb8,0x3,0x0,0x0,0xd0,0x3,0x0,0x0,
0xf0,0x3,0x0,0x0,0x10,0x4,0x0,0x0,
0x28,0x4,0x0,0x0,0x60,0x4,0x0,0x0,
0x78,0x4,0x0,0x0,0x98,0x4,0x0,0x0,
0xa8,0x4,0x0,0x0,0xb8,0x4,0x0,0x0,
0xd8,0x4,0x0,0x0,0x0,0x5,0x0,0x0,
0x48,0x5,0x0,0x0,0x60,0x5,0x0,0x0,
0x90,0x5,0x0,0x0,0xb0,0x5,0x0,0x0,
0xc0,0x5,0x0,0x0,0xd8,0x5,0x0,0x0,
0x10,0x6,0x0,0x0,0x30,0x6,0x0,0x0,
0x70,0x6,0x0,0x0,0x80,0x6,0x0,0x0,
0xa0,0x6,0x0,0x0,0xb0,0x6,0x0,0x0,
0xc8,0x6,0x0,0x0,0xe8,0x6,0x0,0x0,
0xf8,0x6,0x0,0x0,0x8,0x7,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x43,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x6c,0x0,0x73,0x0,0x2e,0x0,0x42,0x0,
0x61,0x0,0x73,0x0,0x69,0x0,0x63,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x2e,0x0,0x2e,0x0,
0x2f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x54,0x0,0x65,0x0,
0x78,0x0,0x74,0x0,0x41,0x0,0x72,0x0,
0x65,0x0,0x61,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x6d,0x0,0x79,0x0,
0x54,0x0,0x65,0x0,0x78,0x0,0x74,0x0,
0x41,0x0,0x72,0x0,0x65,0x0,0x61,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x73,0x0,0x65,0x0,
0x6c,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x42,0x0,0x79,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x77,0x0,0x72,0x0,
0x61,0x0,0x70,0x0,0x4d,0x0,0x6f,0x0,
0x64,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x77,0x0,0x72,0x0,0x61,0x0,
0x70,0x0,0x4d,0x0,0x6f,0x0,0x64,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x66,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x53,0x0,0x69,0x0,
0x7a,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x4d,0x0,0x79,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x61,0x0,0x6e,0x0,0x67,0x0,0x6c,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x68,0x0,
0x69,0x0,0x74,0x0,0x65,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x61,0x0,0x6c,0x0,0x52,0x0,0x61,0x0,
0x64,0x0,0x69,0x0,0x75,0x0,0x73,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x72,0x0,0x65,0x0,
0x61,0x0,0x6c,0x0,0x42,0x0,0x6f,0x0,
0x72,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x57,0x0,0x69,0x0,0x64,0x0,0x74,0x0,
0x68,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1e,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x72,0x0,0x65,0x0,0x61,0x0,
0x6c,0x0,0x42,0x0,0x6f,0x0,0x72,0x0,
0x64,0x0,0x65,0x0,0x72,0x0,0x57,0x0,
0x69,0x0,0x64,0x0,0x74,0x0,0x68,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x62,0x0,0x6f,0x0,
0x72,0x0,0x64,0x0,0x65,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x6f,0x0,0x6c,0x0,
0x6f,0x0,0x72,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x62,0x0,0x61,0x0,
0x63,0x0,0x6b,0x0,0x67,0x0,0x72,0x0,
0x6f,0x0,0x75,0x0,0x6e,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x70,0x0,0x69,0x0,
0x78,0x0,0x65,0x0,0x6c,0x0,0x53,0x0,
0x69,0x0,0x7a,0x0,0x65,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x70,0x0,0x69,0x0,0x78,0x0,
0x65,0x0,0x6c,0x0,0x53,0x0,0x69,0x0,
0x7a,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x4d,0x0,0x79,0x0,
0x54,0x0,0x65,0x0,0x78,0x0,0x74,0x0,
0x41,0x0,0x72,0x0,0x65,0x0,0x61,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1c,0x0,0x0,0x0,0x57,0x0,0x72,0x0,
0x61,0x0,0x70,0x0,0x41,0x0,0x74,0x0,
0x57,0x0,0x6f,0x0,0x72,0x0,0x64,0x0,
0x42,0x0,0x6f,0x0,0x75,0x0,0x6e,0x0,
0x64,0x0,0x61,0x0,0x72,0x0,0x79,0x0,
0x4f,0x0,0x72,0x0,0x41,0x0,0x6e,0x0,
0x79,0x0,0x77,0x0,0x68,0x0,0x65,0x0,
0x72,0x0,0x65,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x66,0x0,0x6f,0x0,
0x63,0x0,0x75,0x0,0x73,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x64,0x0,0x6f,0x0,
0x64,0x0,0x67,0x0,0x65,0x0,0x72,0x0,
0x62,0x0,0x6c,0x0,0x75,0x0,0x65,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x62,0x0,0x6c,0x0,
0x61,0x0,0x63,0x0,0x6b,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x4d,0x0,0x79,0x0,
0x54,0x0,0x68,0x0,0x65,0x0,0x6d,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x75,0x0,0x73,0x0,
0x65,0x0,0x53,0x0,0x70,0x0,0x56,0x0,
0x61,0x0,0x6c,0x0,0x75,0x0,0x65,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x4d,0x0,0x61,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x63,0x0,0x65,0x0,
0x69,0x0,0x6c,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x73,0x0,0x70,0x0,
0x49,0x0,0x6e,0x0,0x64,0x0,0x65,0x0,
0x78,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x2,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x3,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x5c,0x0,0x0,0x0,
0x34,0x1,0x0,0x0,0xec,0x1,0x0,0x0,
0x5c,0x2,0x0,0x0,0x4,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x1,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x60,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x60,0x0,0x0,0x0,0x60,0x0,0x0,0x0,
0x0,0x0,0x5,0x0,0x60,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd8,0x0,0x0,0x0,
0x4,0x0,0x10,0x0,0x5,0x0,0x50,0x0,
0xd8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd8,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x2,0x0,0x0,0x20,
0x9,0x0,0x50,0x0,0x12,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x50,0x0,
0xb,0x0,0x10,0x1,0x9,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x9,0x0,0x20,0x1,
0x9,0x0,0xc0,0x1,0x7,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x50,0x0,
0x8,0x0,0xf0,0x0,0x6,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x7,0x0,0x50,0x0,
0x7,0x0,0x40,0x1,0x13,0x0,0x0,0x0,
0x0,0x0,0xa,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x11,0x0,0x50,0x0,
0x11,0x0,0xa0,0x0,0xa,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0xb,0x0,0x10,0x1,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x90,0x0,0xe,0x0,0xa0,0x1,
0xd,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x90,0x0,0xd,0x0,0x50,0x1,
0xb,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0xc,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0xc,0x0,0x0,0x1,
0x10,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x90,0x0,0xf,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0xf,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x1,0xf,0x0,0x70,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x11,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0xa0,0x0,0x11,0x0,0x50,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr)
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           *static_cast<return_type *>(dataPtr) = binding(aotContext, argumentsPtr);
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<int>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for wrapMode at line 8, column 5
int r2_0;
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getEnumLookup(1, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetEnumLookup(1, []() { static const auto t = QMetaType::fromName("QQuickTextEdit*"); return t; }().metaObject(), "WrapMode", "WrapAtWordBoundaryOrAnywhere");
if (aotContext->engine->hasError())
    return int();
}
{
}
{
}
// generate_Ret
return r2_0;
});}
 },{ 1, QMetaType::fromType<int>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for realBorderWidth at line 14, column 9
QObject *r2_0;
int r2_2;
bool r2_1;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadContextIdLookup(2, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadContextIdLookup(2);
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(3, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(3, r2_0, QMetaType::fromType<bool>());
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_JumpFalse
if (!r2_1) {
    goto label_0;
}
{
}
// generate_LoadInt
r2_2 = 2;
{
}
// generate_Jump
{
    goto label_1;
}
label_0:;
// generate_LoadInt
r2_2 = 1;
{
}
label_1:;
{
}
// generate_Ret
return r2_2;
});}
 },{ 2, QMetaType::fromType<QVariant>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for color at line 15, column 9
QVariant r2_2;
bool r2_1;
QObject *r2_0;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadContextIdLookup(4, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadContextIdLookup(4);
if (aotContext->engine->hasError())
    return QVariant();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(5, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(5, r2_0, QMetaType::fromType<bool>());
if (aotContext->engine->hasError())
    return QVariant();
}
{
}
// generate_JumpFalse
if (!r2_1) {
    goto label_0;
}
{
}
// generate_LoadRuntimeString
r2_2 = [&](){ auto arg = QStringLiteral("dodgerblue"); return aotContext->constructValueType([]() { static const auto t = QMetaType::fromName("QColor"); return t; }(), []() { static const auto t = QMetaType::fromName("QQuickColorValueType"); return t; }().metaObject(), 0, &arg); }();
{
}
// generate_Jump
{
    goto label_1;
}
label_0:;
// generate_LoadRuntimeString
r2_2 = [&](){ auto arg = QStringLiteral("black"); return aotContext->constructValueType([]() { static const auto t = QMetaType::fromName("QColor"); return t; }(), []() { static const auto t = QMetaType::fromName("QQuickColorValueType"); return t; }().metaObject(), 0, &arg); }();
{
}
label_1:;
{
}
// generate_Ret
if (!r2_2.isValid())
    aotContext->setReturnValueUndefined();
return r2_2;
});}
 },{ 3, QMetaType::fromType<int>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *context, void *data, void **argv) {
        wrapCall(context, data, argv, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext)
Q_UNUSED(argumentsPtr)
// expression for pixelSize at line 17, column 5
QObject *r2_0;
double r11_0;
QObject *r2_3;
QObject *r2_7;
int r2_6;
int r2_8;
double r2_5;
double r2_4;
double r2_2;
double r10_0;
bool r2_1;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadSingletonLookup(6, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadSingletonLookup(6, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(7, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(7, r2_0, QMetaType::fromType<bool>());
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_JumpFalse
if (!r2_1) {
    goto label_0;
}
{
}
{
}
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(12);
#endif
while (!aotContext->loadSingletonLookup(9, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(12);
#endif
aotContext->initLoadSingletonLookup(9, QQmlPrivate::AOTCompiledContext::InvalidStringId);
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(14);
#endif
while (!aotContext->getObjectLookup(10, r2_0, &r2_2)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(14);
#endif
aotContext->initGetObjectLookup(10, r2_0, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_StoreReg
r11_0 = r2_2;
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(18);
#endif
while (!aotContext->loadContextIdLookup(11, &r2_3)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(18);
#endif
aotContext->initLoadContextIdLookup(11);
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_GetLookup
{
int retrieved;
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(20);
#endif
while (!aotContext->getObjectLookup(12, r2_3, &retrieved)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(20);
#endif
aotContext->initGetObjectLookup(12, r2_3, QMetaType::fromType<int>());
if (aotContext->engine->hasError())
    return int();
}
r2_4 = double(std::move(retrieved));
}
{
}
// generate_Mul
r2_5 = (r11_0 * r2_4);
{
}
// generate_StoreReg
r10_0 = r2_5;
{
}
// generate_CallPropertyLookup
{
double retrieved;
{
const double arg1 = r10_0;
retrieved = (arg1 < 0.0 && arg1 > -1.0) ? std::copysign(0.0, -1.0) : std::ceil(arg1);
}
r2_6 = QJSNumberCoercion::toInteger(std::move(retrieved));
}
{
}
// generate_Jump
{
    goto label_1;
}
label_0:;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(33);
#endif
while (!aotContext->loadContextIdLookup(14, &r2_7)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(33);
#endif
aotContext->initLoadContextIdLookup(14);
if (aotContext->engine->hasError())
    return int();
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(35);
#endif
while (!aotContext->getObjectLookup(15, r2_7, &r2_8)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(35);
#endif
aotContext->initGetObjectLookup(15, r2_7, QMetaType::fromType<int>());
if (aotContext->engine->hasError())
    return int();
}
{
r2_6 = std::move(r2_8);
}
label_1:;
{
}
// generate_Ret
return r2_6;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
