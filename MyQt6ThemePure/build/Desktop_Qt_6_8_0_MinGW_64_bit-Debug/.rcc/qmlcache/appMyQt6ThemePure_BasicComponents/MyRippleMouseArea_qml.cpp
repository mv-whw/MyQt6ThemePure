// /qt/qml/MyQt6ThemePure/BasicComponents/MyRippleMouseArea.qml
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
namespace _qt_qml_MyQt6ThemePure_BasicComponents_MyRippleMouseArea_qml {
extern const unsigned char qmlData alignas(16) [];
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x42,0x0,0x0,0x0,0x0,0x8,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x64,0xe,0x0,0x0,0x30,0x62,0x34,0x32,
0x37,0x39,0x38,0x39,0x35,0x65,0x30,0x35,
0x32,0x37,0x66,0x61,0x37,0x61,0x63,0x61,
0x34,0x64,0x31,0x61,0x35,0x33,0x31,0x34,
0x37,0x66,0x35,0x65,0x30,0x31,0x63,0x61,
0x31,0x39,0x61,0x63,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xd2,0x95,0xb7,0xa5,
0x13,0x85,0x4d,0x2a,0xe1,0xfa,0xd9,0x69,
0x44,0x82,0x74,0xe1,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x28,0x0,0x0,0x0,0x18,0x6,0x0,0x0,
0x8,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x4,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x30,0x0,0x0,0x0,0x28,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0xe8,0x1,0x0,0x0,
0x5,0x0,0x0,0x0,0xf0,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x2,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0xc,0x0,0x0,
0x18,0x2,0x0,0x0,0x70,0x2,0x0,0x0,
0xc8,0x2,0x0,0x0,0x68,0x3,0x0,0x0,
0xd8,0x3,0x0,0x0,0x28,0x4,0x0,0x0,
0x98,0x4,0x0,0x0,0x60,0x5,0x0,0x0,
0xd8,0x5,0x0,0x0,0xe8,0x5,0x0,0x0,
0xf8,0x5,0x0,0x0,0x8,0x6,0x0,0x0,
0x53,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x0,0x2,0x0,0x0,0x33,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0xb0,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x33,0x0,0x0,0x0,0x50,0x0,0x0,0x0,
0x0,0x2,0x0,0x0,0x80,0x0,0x0,0x0,
0x91,0x0,0x0,0x0,0x23,0x1,0x0,0x0,
0x24,0x2,0x0,0x0,0x33,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x33,0x2,0x0,0x0,
0x33,0x0,0x0,0x0,0x50,0x0,0x0,0x0,
0x0,0x2,0x0,0x0,0x70,0x1,0x0,0x0,
0x33,0x0,0x0,0x0,0x50,0x0,0x0,0x0,
0x0,0x2,0x0,0x0,0x50,0x2,0x0,0x0,
0x44,0x2,0x0,0x0,0x33,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x0,0x2,0x0,0x0,
0x80,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x90,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x63,0x2,0x0,0x0,
0x33,0x0,0x0,0x0,0x90,0x0,0x0,0x0,
0x74,0x2,0x0,0x0,0x81,0x0,0x0,0x0,
0x33,0x0,0x0,0x0,0x50,0x0,0x0,0x0,
0x33,0x0,0x0,0x0,0x90,0x0,0x0,0x0,
0x81,0x0,0x0,0x0,0x33,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x71,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x9a,0x3f,
0x0,0x0,0x0,0x0,0x0,0x40,0xf5,0x7f,
0x0,0x0,0x0,0x0,0x0,0x40,0x5,0x40,
0x33,0x33,0x33,0x33,0x33,0x73,0xe,0x40,
0x33,0x33,0x33,0x33,0x33,0x73,0x6,0x40,
0x44,0x0,0x0,0x0,0xa,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x0,0x18,0x7,
0xc,0x6e,0x7,0x18,0x6,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x8,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x1,0x3c,0x2,
0xe4,0x18,0x7,0xe2,0x21,0x6c,0x7,0x18,
0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x68,0x0,0x0,0x0,0x2a,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x4,0x0,
0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,
0xb,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x26,0x0,0x0,0x0,
0xe,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0xca,0x2e,0x3,0x3c,0x4,0x18,0x7,0xc,
0x6e,0x7,0x50,0x1a,0x2e,0x5,0x3c,0x6,
0x50,0x14,0x2e,0x7,0x18,0x8,0x2e,0x8,
0x3c,0x9,0x3c,0xa,0x3c,0xb,0x18,0x9,
0x42,0xc,0x8,0x1a,0x9,0x6,0xd4,0x16,
0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5c,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,
0x10,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0xca,0x2e,0xd,0x18,
0x7,0xac,0xe,0x7,0x0,0x0,0x18,0x6,
0xd4,0x16,0x6,0x2,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x17,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x17,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0xf,0x3c,0x10,
0x18,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x44,0x0,0x0,0x0,0x26,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0xc,0x0,0x0,0x0,
0x1b,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1b,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x2e,0x11,0x18,0x7,
0x2e,0x12,0x3c,0x13,0x3c,0x14,0x3c,0x15,
0x18,0xa,0x2e,0x16,0x3c,0x17,0x3c,0x18,
0x3c,0x19,0x18,0xb,0xac,0x1a,0x7,0x2,
0xa,0x18,0x7,0x4,0x3,0x9c,0x7,0x18,
0x6,0x2,0x0,0x0,0x0,0x0,0x0,0x0,
0x74,0x0,0x0,0x0,0x4b,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x5,0x0,
0xff,0xff,0xff,0xff,0xe,0x0,0x0,0x0,
0x1d,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x1e,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x35,0x0,0x0,0x0,
0x21,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0x47,0x0,0x0,0x0,0x22,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0xca,0x2e,0x1b,0x3c,
0x1c,0x3c,0x1d,0x3c,0x1e,0x18,0x7,0x2e,
0x1f,0x3c,0x20,0x6c,0x7,0x50,0x22,0x2e,
0x21,0x3c,0x22,0x18,0x8,0x2e,0x23,0x18,
0x9,0x2e,0x24,0x3c,0x25,0x18,0xc,0x14,
0x4,0xd,0xac,0x26,0x9,0x2,0xc,0x18,
0x9,0x42,0x27,0x8,0x1a,0x9,0x6,0x4c,
0x12,0x2e,0x28,0x3c,0x29,0x18,0x8,0x2e,
0x2a,0x3c,0x2b,0x18,0x9,0x42,0x2c,0x8,
0x1a,0x9,0x6,0xd4,0x16,0x6,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5c,0x0,0x0,0x0,0x14,0x0,0x0,0x0,
0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0x9,0x0,0x0,0x0,
0x24,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x25,0x0,0x0,0x0,0x2,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x26,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0xca,0x2e,0x2d,0x3c,
0x2e,0x18,0x7,0x6,0x18,0x8,0x42,0x2f,
0x7,0x1a,0x8,0x6,0xd4,0x16,0x6,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb8,0x6,0x0,0x0,0xc0,0x6,0x0,0x0,
0xd8,0x6,0x0,0x0,0xf8,0x6,0x0,0x0,
0x20,0x7,0x0,0x0,0x40,0x7,0x0,0x0,
0x68,0x7,0x0,0x0,0x98,0x7,0x0,0x0,
0xe0,0x7,0x0,0x0,0xf0,0x7,0x0,0x0,
0x18,0x8,0x0,0x0,0x38,0x8,0x0,0x0,
0x68,0x8,0x0,0x0,0xb0,0x8,0x0,0x0,
0xe8,0x8,0x0,0x0,0x40,0x9,0x0,0x0,
0x58,0x9,0x0,0x0,0x90,0x9,0x0,0x0,
0xb8,0x9,0x0,0x0,0xd8,0x9,0x0,0x0,
0xf0,0x9,0x0,0x0,0x20,0xa,0x0,0x0,
0x38,0xa,0x0,0x0,0x50,0xa,0x0,0x0,
0x60,0xa,0x0,0x0,0x70,0xa,0x0,0x0,
0x80,0xa,0x0,0x0,0xa8,0xa,0x0,0x0,
0xb8,0xa,0x0,0x0,0xd0,0xa,0x0,0x0,
0x8,0xb,0x0,0x0,0x20,0xb,0x0,0x0,
0x58,0xb,0x0,0x0,0x70,0xb,0x0,0x0,
0x98,0xb,0x0,0x0,0xa8,0xb,0x0,0x0,
0xb8,0xb,0x0,0x0,0xc8,0xb,0x0,0x0,
0xe0,0xb,0x0,0x0,0xf0,0xb,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x4d,0x0,0x79,0x0,
0x4d,0x0,0x6f,0x0,0x75,0x0,0x73,0x0,
0x65,0x0,0x41,0x0,0x72,0x0,0x65,0x0,
0x61,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x6d,0x0,0x79,0x0,
0x52,0x0,0x69,0x0,0x70,0x0,0x70,0x0,
0x6c,0x0,0x65,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x41,0x0,
0x72,0x0,0x65,0x0,0x61,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x4d,0x0,0x79,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x61,0x0,0x6e,0x0,0x67,0x0,0x6c,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x72,0x0,0x69,0x0,
0x70,0x0,0x70,0x0,0x6c,0x0,0x65,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x61,0x0,0x6e,0x0,0x67,0x0,0x6c,0x0,
0x65,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x65,0x0,0x6e,0x0,
0x61,0x0,0x62,0x0,0x6c,0x0,0x65,0x0,
0x52,0x0,0x69,0x0,0x70,0x0,0x70,0x0,
0x6c,0x0,0x65,0x0,0x45,0x0,0x66,0x0,
0x66,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x21,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x65,0x0,0x6e,0x0,0x61,0x0,
0x62,0x0,0x6c,0x0,0x65,0x0,0x52,0x0,
0x69,0x0,0x70,0x0,0x70,0x0,0x6c,0x0,
0x65,0x0,0x45,0x0,0x66,0x0,0x66,0x0,
0x65,0x0,0x63,0x0,0x74,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x42,0x0,0x61,0x0,0x73,0x0,0x65,0x0,
0x43,0x0,0x6f,0x0,0x6c,0x0,0x6f,0x0,
0x72,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x0,0x0,0x74,0x0,0x72,0x0,
0x61,0x0,0x6e,0x0,0x73,0x0,0x70,0x0,
0x61,0x0,0x72,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x69,0x0,0x73,0x0,
0x50,0x0,0x61,0x0,0x72,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x52,0x0,0x69,0x0,
0x70,0x0,0x70,0x0,0x6c,0x0,0x65,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x21,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x69,0x0,0x73,0x0,0x50,0x0,
0x61,0x0,0x72,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x52,0x0,0x69,0x0,0x70,0x0,
0x70,0x0,0x6c,0x0,0x65,0x0,0x52,0x0,
0x65,0x0,0x63,0x0,0x74,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x52,0x0,0x69,0x0,0x70,0x0,0x70,0x0,
0x6c,0x0,0x65,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x6c,0x0,0x65,0x0,0x43,0x0,
0x68,0x0,0x61,0x0,0x6e,0x0,0x67,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x27,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x52,0x0,
0x69,0x0,0x70,0x0,0x70,0x0,0x6c,0x0,
0x65,0x0,0x52,0x0,0x65,0x0,0x63,0x0,
0x74,0x0,0x61,0x0,0x6e,0x0,0x67,0x0,
0x6c,0x0,0x65,0x0,0x43,0x0,0x68,0x0,
0x61,0x0,0x6e,0x0,0x67,0x0,0x65,0x0,
0x64,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x43,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x6b,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x50,0x0,0x72,0x0,
0x6f,0x0,0x70,0x0,0x65,0x0,0x72,0x0,
0x74,0x0,0x79,0x0,0x41,0x0,0x6e,0x0,
0x69,0x0,0x6d,0x0,0x61,0x0,0x74,0x0,
0x69,0x0,0x6f,0x0,0x6e,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x72,0x0,0x69,0x0,
0x70,0x0,0x70,0x0,0x6c,0x0,0x65,0x0,
0x64,0x0,0x45,0x0,0x66,0x0,0x66,0x0,
0x65,0x0,0x63,0x0,0x74,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x74,0x0,0x61,0x0,
0x72,0x0,0x67,0x0,0x65,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x74,0x0,0x61,0x0,0x72,0x0,
0x67,0x0,0x65,0x0,0x74,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x64,0x0,0x75,0x0,
0x72,0x0,0x61,0x0,0x74,0x0,0x69,0x0,
0x6f,0x0,0x6e,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x70,0x0,0x72,0x0,
0x6f,0x0,0x70,0x0,0x65,0x0,0x72,0x0,
0x74,0x0,0x79,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x72,0x0,
0x6f,0x0,0x6d,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x74,0x0,0x6f,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x74,0x0,0x6f,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x6c,0x0,0x6f,0x0,
0x6f,0x0,0x70,0x0,0x73,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x53,0x0,0x74,0x0,0x61,0x0,0x72,0x0,
0x74,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x53,0x0,
0x74,0x0,0x61,0x0,0x72,0x0,0x74,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x53,0x0,0x74,0x0,0x6f,0x0,0x70,0x0,
0x70,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x53,0x0,
0x74,0x0,0x6f,0x0,0x70,0x0,0x70,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x4d,0x0,0x79,0x0,
0x52,0x0,0x65,0x0,0x63,0x0,0x74,0x0,
0x61,0x0,0x6e,0x0,0x67,0x0,0x6c,0x0,
0x65,0x0,0x52,0x0,0x69,0x0,0x70,0x0,
0x70,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x73,0x0,0x74,0x0,
0x61,0x0,0x72,0x0,0x74,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x4d,0x0,0x61,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x6d,0x0,0x61,0x0,
0x78,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x64,0x0,0x61,0x0,
0x72,0x0,0x6b,0x0,0x65,0x0,0x72,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x24,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x2c,0x0,0x0,0x0,
0x44,0x1,0x0,0x0,0x2,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x4,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x6,0x0,0x84,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x14,0x1,0x0,0x0,
0x3,0x0,0x10,0x0,0x4,0x0,0x50,0x0,
0x14,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0x5,0x0,0x50,0x0,0x6,0x0,0x0,0x0,
0x3,0x0,0x0,0xa0,0x6,0x0,0x50,0x0,
0x9,0x0,0x0,0x0,0x8,0x0,0x0,0x0,
0x7,0x0,0x50,0x0,0xb,0x0,0x0,0x0,
0x3,0x0,0x0,0xa0,0x8,0x0,0x50,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x50,0x0,0x10,0x0,0x0,0x1,
0xd,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb,0x0,0x50,0x0,0xb,0x0,0xf0,0x1,
0xb,0x0,0x0,0x0,0x8,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0xc0,0x1,0x8,0x0,0x0,0x3,
0x9,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0xa,0x0,0x0,0x0,
0x7,0x0,0x40,0x1,0x7,0x0,0x50,0x2,
0x6,0x0,0x0,0x0,0x8,0x0,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0xc0,0x1,0x6,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x50,0x0,0x14,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x11,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x8,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x14,0x1,0x0,0x0,
0x14,0x0,0x50,0x0,0x16,0x0,0x90,0x0,
0x14,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x1,0x0,0x0,0x0,0x0,0x0,0x0,
0x1e,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x24,0x0,0x90,0x0,0x24,0x0,0x40,0x1,
0x1c,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x90,0x0,0x1d,0x0,0x40,0x1,
0x1b,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1c,0x0,0x90,0x0,0x1c,0x0,0x0,0x1,
0x19,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1b,0x0,0x90,0x0,0x1b,0x0,0xd0,0x0,
0x18,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x90,0x0,0x1a,0x0,0xe0,0x0,
0x16,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x17,0x0,0x0,0x0,
0x19,0x0,0x90,0x0,0x19,0x0,0x30,0x1,
0x15,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x0,0x90,0x0,0x18,0x0,0x30,0x1,
0x13,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x17,0x0,0x90,0x0,0x17,0x0,0x10,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[];
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType::fromType<bool>();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for enableRippleEffect at line 6, column 5
QObject *r2_0;
QObject *r7_0;
bool r2_1;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadScopeObjectPropertyLookup(0, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadScopeObjectPropertyLookup(0, [](auto *aotContext) { static const auto t = QQmlPrivate::compositeMetaType(aotContext->compilationUnit, QStringLiteral("MyRectangle")); return t; }(aotContext));
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = bool();
}
return;
}
}
{
}
// generate_StoreReg
r7_0 = r2_0;
{
}
{
}
// generate_CmpStrictNotEqual
r2_1 = r7_0 != nullptr;
{
}
{
}
// generate_Ret
if (argv[0]) {
    *static_cast<bool *>(argv[0]) = r2_1;
}
return;
}
 },{ 3, 1, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType();
    argTypes[1] = []() { static const auto t = QMetaType::fromName("QQuickMouseEvent*"); return t; }();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for onClicked at line 16, column 5
QObject *r7_0;
QObject *r2_0;
// generate_CreateCallContext
{
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(3);
#endif
while (!aotContext->loadContextIdLookup(13, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(3);
#endif
aotContext->initLoadContextIdLookup(13);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
return;
}
}
{
}
// generate_StoreReg
r7_0 = r2_0;
{
}
// generate_CallPropertyLookup
{
void *args[] = { nullptr };
const QMetaType types[] = { QMetaType() };
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(10);
#endif
while (!aotContext->callObjectPropertyLookup(14, r7_0, args, types, 0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(10);
#endif
aotContext->initCallObjectPropertyLookup(14);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
return;
}
}
}
{
}
{
}
// generate_PopContext
{}
}
{
}
{
}
// generate_Ret
return;
}
 },{ 4, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType::fromType<QObject *>();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for target at line 23, column 9
QObject *r2_0;
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
while (!aotContext->loadContextIdLookup(15, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(2);
#endif
aotContext->initLoadContextIdLookup(15);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QObject * *>(argv[0]) = nullptr;
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
while (!aotContext->getObjectLookup(16, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(4);
#endif
aotContext->initGetObjectLookup(16, r2_0, QMetaType::fromType<QObject *>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QObject * *>(argv[0]) = nullptr;
}
return;
}
}
{
}
{
}
// generate_Ret
if (argv[0]) {
    *static_cast<QObject * *>(argv[0]) = r2_1;
}
return;
}
 },{ 5, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType::fromType<QVariant>();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for to at line 27, column 9
QObject *r2_2;
double r10_0;
QVariant r2_9;
double r2_3;
double r2_7;
QObject *r2_1;
double r7_0;
double r2_8;
QObject *r2_6;
QObject *r2_5;
QObject *r2_0;
QObject *r2_4;
double r11_0;
{
}
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(6);
#endif
while (!aotContext->loadContextIdLookup(18, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(6);
#endif
aotContext->initLoadContextIdLookup(18);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(8);
#endif
while (!aotContext->getObjectLookup(19, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(8);
#endif
aotContext->initGetObjectLookup(19, r2_0, [](auto *aotContext) { static const auto t = QQmlPrivate::compositeMetaType(aotContext->compilationUnit, QStringLiteral("MyRectangle")); return t; }(aotContext));
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(10);
#endif
while (!aotContext->getObjectLookup(20, r2_1, &r2_2)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(10);
#endif
aotContext->initGetObjectLookup(20, r2_1, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(12);
#endif
while (!aotContext->getObjectLookup(21, r2_2, &r2_3)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(12);
#endif
aotContext->initGetObjectLookup(21, r2_2, QMetaType::fromType<double>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_StoreReg
r10_0 = r2_3;
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(16);
#endif
while (!aotContext->loadContextIdLookup(22, &r2_4)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(16);
#endif
aotContext->initLoadContextIdLookup(22);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(18);
#endif
while (!aotContext->getObjectLookup(23, r2_4, &r2_5)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(18);
#endif
aotContext->initGetObjectLookup(23, r2_4, [](auto *aotContext) { static const auto t = QQmlPrivate::compositeMetaType(aotContext->compilationUnit, QStringLiteral("MyRectangle")); return t; }(aotContext));
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(20);
#endif
while (!aotContext->getObjectLookup(24, r2_5, &r2_6)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(20);
#endif
aotContext->initGetObjectLookup(24, r2_5, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(22);
#endif
while (!aotContext->getObjectLookup(25, r2_6, &r2_7)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(22);
#endif
aotContext->initGetObjectLookup(25, r2_6, QMetaType::fromType<double>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
if (argv[0]) {
    *static_cast<QVariant *>(argv[0]) = QVariant();
}
return;
}
}
{
}
// generate_StoreReg
r11_0 = r2_7;
{
}
// generate_CallPropertyLookup
{
const double arg1 = r10_0;
const double arg2 = r11_0;
r2_8 = [&]() { 
auto  tmpMax = (qIsNull(arg2) && qIsNull(arg1) && std::copysign(1.0, arg2) == 1) ? arg2 : ((arg2 > arg1 || std::isnan(arg2)) ? arg2 : arg1);
return tmpMax;
}();
}
{
}
// generate_StoreReg
r7_0 = r2_8;
{
}
// generate_LoadConst
r2_8 = 1.69999999999999996;
{
}
// generate_Mul
r2_9 = QVariant::fromValue((r7_0 * r2_8));
{
}
{
}
// generate_Ret
if (argv[0]) {
    if (!r2_9.isValid())
        aotContext->setReturnValueUndefined();
    *static_cast<QVariant *>(argv[0]) = std::move(r2_9);
}
return;
}
 },{ 7, 0, [](QV4::ExecutableCompilationUnit *unit, QMetaType *argTypes) {
    struct { QV4::ExecutableCompilationUnit *compilationUnit; } c { unit };
    const auto *aotContext = &c;
    Q_UNUSED(aotContext);
    argTypes[0] = QMetaType();
}, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argv) {
Q_UNUSED(aotContext)
Q_UNUSED(argv)
// expression for onStopped at line 36, column 9
QObject *r2_1;
QObject *r7_0;
QObject *r2_0;
double r2_2;
// generate_CreateCallContext
{
{
}
// generate_LoadQmlContextPropertyLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(3);
#endif
while (!aotContext->loadContextIdLookup(45, &r2_0)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(3);
#endif
aotContext->initLoadContextIdLookup(45);
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
return;
}
}
{
}
// generate_GetLookup
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(5);
#endif
while (!aotContext->getObjectLookup(46, r2_0, &r2_1)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(5);
#endif
aotContext->initGetObjectLookup(46, r2_0, [](auto *aotContext) { static const auto t = QQmlPrivate::compositeMetaType(aotContext->compilationUnit, QStringLiteral("MyRectangle")); return t; }(aotContext));
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
return;
}
}
{
}
// generate_StoreReg
r7_0 = r2_1;
{
}
// generate_LoadZero
r2_2 = double(0);
{
}
{
}
// generate_SetLookup
{
#ifndef QT_NO_DEBUG
aotContext->setInstructionPointer(13);
#endif
while (!aotContext->setObjectLookup(47, r7_0, &r2_2)) {
#ifdef QT_NO_DEBUG
aotContext->setInstructionPointer(13);
#endif
aotContext->initSetObjectLookup(47, r7_0, QMetaType::fromType<double>());
if (aotContext->engine->hasError()) {
aotContext->setReturnValueUndefined();
return;
}
}
}
{
}
{
}
// generate_PopContext
{}
}
{
}
{
}
// generate_Ret
return;
}
 },{ 0, 0, nullptr, nullptr }};
QT_WARNING_POP
}
}
