/****************************************************************************
** Meta object code from reading C++ file 'QZXing.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qzxing/src/QZXing.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QZXing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSQZXingENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSQZXingENDCLASS = QtMocHelpers::stringData(
    "QZXing",
    "decodingStarted",
    "",
    "decodingFinished",
    "succeeded",
    "enabledFormatsChanged",
    "tagFound",
    "tag",
    "tagFoundAdvanced",
    "format",
    "charSet",
    "rect",
    "metadata",
    "error",
    "msg",
    "decodeImage",
    "image",
    "maxWidth",
    "maxHeight",
    "smoothTransformation",
    "decodeImageFromFile",
    "imageFilePath",
    "decodeImageQML",
    "item",
    "decodeSubImageQML",
    "offsetX",
    "offsetY",
    "width",
    "height",
    "imageUrl",
    "encodeData",
    "data",
    "QZXingEncoderConfig",
    "encoderConfig",
    "EncoderFormat",
    "encoderFormat",
    "encoderImageSize",
    "EncodeErrorCorrectionLevel",
    "errorCorrectionLevel",
    "border",
    "transparent",
    "getProcessTimeOfLastDecoding",
    "getEnabledFormats",
    "setDecoder",
    "hint",
    "foundedFormat",
    "processingTime",
    "enabledDecoders",
    "tryHarderType",
    "imageSourceFilter",
    "tryHarder",
    "allowedExtensions",
    "DecoderFormat",
    "DecoderFormat_None",
    "DecoderFormat_Aztec",
    "DecoderFormat_CODABAR",
    "DecoderFormat_CODE_39",
    "DecoderFormat_CODE_93",
    "DecoderFormat_CODE_128",
    "DecoderFormat_DATA_MATRIX",
    "DecoderFormat_EAN_8",
    "DecoderFormat_EAN_13",
    "DecoderFormat_ITF",
    "DecoderFormat_MAXICODE",
    "DecoderFormat_PDF_417",
    "DecoderFormat_QR_CODE",
    "DecoderFormat_RSS_14",
    "DecoderFormat_RSS_EXPANDED",
    "DecoderFormat_UPC_A",
    "DecoderFormat_UPC_E",
    "DecoderFormat_UPC_EAN_EXTENSION",
    "DecoderFormat_CODE_128_GS1",
    "TryHarderBehaviour",
    "TryHarderBehaviour_ThoroughScanning",
    "TryHarderBehaviour_Rotate",
    "SourceFilter",
    "SourceFilter_ImageNormal",
    "SourceFilter_ImageInverted"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSQZXingENDCLASS_t {
    uint offsetsAndSizes[156];
    char stringdata0[7];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[10];
    char stringdata5[22];
    char stringdata6[9];
    char stringdata7[4];
    char stringdata8[17];
    char stringdata9[7];
    char stringdata10[8];
    char stringdata11[5];
    char stringdata12[9];
    char stringdata13[6];
    char stringdata14[4];
    char stringdata15[12];
    char stringdata16[6];
    char stringdata17[9];
    char stringdata18[10];
    char stringdata19[21];
    char stringdata20[20];
    char stringdata21[14];
    char stringdata22[15];
    char stringdata23[5];
    char stringdata24[18];
    char stringdata25[8];
    char stringdata26[8];
    char stringdata27[6];
    char stringdata28[7];
    char stringdata29[9];
    char stringdata30[11];
    char stringdata31[5];
    char stringdata32[20];
    char stringdata33[14];
    char stringdata34[14];
    char stringdata35[14];
    char stringdata36[17];
    char stringdata37[27];
    char stringdata38[21];
    char stringdata39[7];
    char stringdata40[12];
    char stringdata41[29];
    char stringdata42[18];
    char stringdata43[11];
    char stringdata44[5];
    char stringdata45[14];
    char stringdata46[15];
    char stringdata47[16];
    char stringdata48[14];
    char stringdata49[18];
    char stringdata50[10];
    char stringdata51[18];
    char stringdata52[14];
    char stringdata53[19];
    char stringdata54[20];
    char stringdata55[22];
    char stringdata56[22];
    char stringdata57[22];
    char stringdata58[23];
    char stringdata59[26];
    char stringdata60[20];
    char stringdata61[21];
    char stringdata62[18];
    char stringdata63[23];
    char stringdata64[22];
    char stringdata65[22];
    char stringdata66[21];
    char stringdata67[27];
    char stringdata68[20];
    char stringdata69[20];
    char stringdata70[32];
    char stringdata71[27];
    char stringdata72[19];
    char stringdata73[36];
    char stringdata74[26];
    char stringdata75[13];
    char stringdata76[25];
    char stringdata77[27];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSQZXingENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSQZXingENDCLASS_t qt_meta_stringdata_CLASSQZXingENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "QZXing"
        QT_MOC_LITERAL(7, 15),  // "decodingStarted"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 16),  // "decodingFinished"
        QT_MOC_LITERAL(41, 9),  // "succeeded"
        QT_MOC_LITERAL(51, 21),  // "enabledFormatsChanged"
        QT_MOC_LITERAL(73, 8),  // "tagFound"
        QT_MOC_LITERAL(82, 3),  // "tag"
        QT_MOC_LITERAL(86, 16),  // "tagFoundAdvanced"
        QT_MOC_LITERAL(103, 6),  // "format"
        QT_MOC_LITERAL(110, 7),  // "charSet"
        QT_MOC_LITERAL(118, 4),  // "rect"
        QT_MOC_LITERAL(123, 8),  // "metadata"
        QT_MOC_LITERAL(132, 5),  // "error"
        QT_MOC_LITERAL(138, 3),  // "msg"
        QT_MOC_LITERAL(142, 11),  // "decodeImage"
        QT_MOC_LITERAL(154, 5),  // "image"
        QT_MOC_LITERAL(160, 8),  // "maxWidth"
        QT_MOC_LITERAL(169, 9),  // "maxHeight"
        QT_MOC_LITERAL(179, 20),  // "smoothTransformation"
        QT_MOC_LITERAL(200, 19),  // "decodeImageFromFile"
        QT_MOC_LITERAL(220, 13),  // "imageFilePath"
        QT_MOC_LITERAL(234, 14),  // "decodeImageQML"
        QT_MOC_LITERAL(249, 4),  // "item"
        QT_MOC_LITERAL(254, 17),  // "decodeSubImageQML"
        QT_MOC_LITERAL(272, 7),  // "offsetX"
        QT_MOC_LITERAL(280, 7),  // "offsetY"
        QT_MOC_LITERAL(288, 5),  // "width"
        QT_MOC_LITERAL(294, 6),  // "height"
        QT_MOC_LITERAL(301, 8),  // "imageUrl"
        QT_MOC_LITERAL(310, 10),  // "encodeData"
        QT_MOC_LITERAL(321, 4),  // "data"
        QT_MOC_LITERAL(326, 19),  // "QZXingEncoderConfig"
        QT_MOC_LITERAL(346, 13),  // "encoderConfig"
        QT_MOC_LITERAL(360, 13),  // "EncoderFormat"
        QT_MOC_LITERAL(374, 13),  // "encoderFormat"
        QT_MOC_LITERAL(388, 16),  // "encoderImageSize"
        QT_MOC_LITERAL(405, 26),  // "EncodeErrorCorrectionLevel"
        QT_MOC_LITERAL(432, 20),  // "errorCorrectionLevel"
        QT_MOC_LITERAL(453, 6),  // "border"
        QT_MOC_LITERAL(460, 11),  // "transparent"
        QT_MOC_LITERAL(472, 28),  // "getProcessTimeOfLastDecoding"
        QT_MOC_LITERAL(501, 17),  // "getEnabledFormats"
        QT_MOC_LITERAL(519, 10),  // "setDecoder"
        QT_MOC_LITERAL(530, 4),  // "hint"
        QT_MOC_LITERAL(535, 13),  // "foundedFormat"
        QT_MOC_LITERAL(549, 14),  // "processingTime"
        QT_MOC_LITERAL(564, 15),  // "enabledDecoders"
        QT_MOC_LITERAL(580, 13),  // "tryHarderType"
        QT_MOC_LITERAL(594, 17),  // "imageSourceFilter"
        QT_MOC_LITERAL(612, 9),  // "tryHarder"
        QT_MOC_LITERAL(622, 17),  // "allowedExtensions"
        QT_MOC_LITERAL(640, 13),  // "DecoderFormat"
        QT_MOC_LITERAL(654, 18),  // "DecoderFormat_None"
        QT_MOC_LITERAL(673, 19),  // "DecoderFormat_Aztec"
        QT_MOC_LITERAL(693, 21),  // "DecoderFormat_CODABAR"
        QT_MOC_LITERAL(715, 21),  // "DecoderFormat_CODE_39"
        QT_MOC_LITERAL(737, 21),  // "DecoderFormat_CODE_93"
        QT_MOC_LITERAL(759, 22),  // "DecoderFormat_CODE_128"
        QT_MOC_LITERAL(782, 25),  // "DecoderFormat_DATA_MATRIX"
        QT_MOC_LITERAL(808, 19),  // "DecoderFormat_EAN_8"
        QT_MOC_LITERAL(828, 20),  // "DecoderFormat_EAN_13"
        QT_MOC_LITERAL(849, 17),  // "DecoderFormat_ITF"
        QT_MOC_LITERAL(867, 22),  // "DecoderFormat_MAXICODE"
        QT_MOC_LITERAL(890, 21),  // "DecoderFormat_PDF_417"
        QT_MOC_LITERAL(912, 21),  // "DecoderFormat_QR_CODE"
        QT_MOC_LITERAL(934, 20),  // "DecoderFormat_RSS_14"
        QT_MOC_LITERAL(955, 26),  // "DecoderFormat_RSS_EXPANDED"
        QT_MOC_LITERAL(982, 19),  // "DecoderFormat_UPC_A"
        QT_MOC_LITERAL(1002, 19),  // "DecoderFormat_UPC_E"
        QT_MOC_LITERAL(1022, 31),  // "DecoderFormat_UPC_EAN_EXTENSION"
        QT_MOC_LITERAL(1054, 26),  // "DecoderFormat_CODE_128_GS1"
        QT_MOC_LITERAL(1081, 18),  // "TryHarderBehaviour"
        QT_MOC_LITERAL(1100, 35),  // "TryHarderBehaviour_ThoroughSc..."
        QT_MOC_LITERAL(1136, 25),  // "TryHarderBehaviour_Rotate"
        QT_MOC_LITERAL(1162, 12),  // "SourceFilter"
        QT_MOC_LITERAL(1175, 24),  // "SourceFilter_ImageNormal"
        QT_MOC_LITERAL(1200, 26)   // "SourceFilter_ImageInverted"
    },
    "QZXing",
    "decodingStarted",
    "",
    "decodingFinished",
    "succeeded",
    "enabledFormatsChanged",
    "tagFound",
    "tag",
    "tagFoundAdvanced",
    "format",
    "charSet",
    "rect",
    "metadata",
    "error",
    "msg",
    "decodeImage",
    "image",
    "maxWidth",
    "maxHeight",
    "smoothTransformation",
    "decodeImageFromFile",
    "imageFilePath",
    "decodeImageQML",
    "item",
    "decodeSubImageQML",
    "offsetX",
    "offsetY",
    "width",
    "height",
    "imageUrl",
    "encodeData",
    "data",
    "QZXingEncoderConfig",
    "encoderConfig",
    "EncoderFormat",
    "encoderFormat",
    "encoderImageSize",
    "EncodeErrorCorrectionLevel",
    "errorCorrectionLevel",
    "border",
    "transparent",
    "getProcessTimeOfLastDecoding",
    "getEnabledFormats",
    "setDecoder",
    "hint",
    "foundedFormat",
    "processingTime",
    "enabledDecoders",
    "tryHarderType",
    "imageSourceFilter",
    "tryHarder",
    "allowedExtensions",
    "DecoderFormat",
    "DecoderFormat_None",
    "DecoderFormat_Aztec",
    "DecoderFormat_CODABAR",
    "DecoderFormat_CODE_39",
    "DecoderFormat_CODE_93",
    "DecoderFormat_CODE_128",
    "DecoderFormat_DATA_MATRIX",
    "DecoderFormat_EAN_8",
    "DecoderFormat_EAN_13",
    "DecoderFormat_ITF",
    "DecoderFormat_MAXICODE",
    "DecoderFormat_PDF_417",
    "DecoderFormat_QR_CODE",
    "DecoderFormat_RSS_14",
    "DecoderFormat_RSS_EXPANDED",
    "DecoderFormat_UPC_A",
    "DecoderFormat_UPC_E",
    "DecoderFormat_UPC_EAN_EXTENSION",
    "DecoderFormat_CODE_128_GS1",
    "TryHarderBehaviour",
    "TryHarderBehaviour_ThoroughScanning",
    "TryHarderBehaviour_Rotate",
    "SourceFilter",
    "SourceFilter_ImageNormal",
    "SourceFilter_ImageInverted"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQZXingENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       6,  474, // properties
       3,  504, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  254,    2, 0x06,   10 /* Public */,
       3,    1,  255,    2, 0x06,   11 /* Public */,
       5,    0,  258,    2, 0x06,   13 /* Public */,
       6,    1,  259,    2, 0x06,   14 /* Public */,
       8,    3,  262,    2, 0x106,   16 /* Public | MethodIsConst  */,
       8,    4,  269,    2, 0x106,   20 /* Public | MethodIsConst  */,
       8,    4,  278,    2, 0x106,   25 /* Public | MethodIsConst  */,
      13,    1,  287,    2, 0x06,   30 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    4,  290,    2, 0x0a,   32 /* Public */,
      15,    3,  299,    2, 0x2a,   37 /* Public | MethodCloned */,
      15,    2,  306,    2, 0x2a,   41 /* Public | MethodCloned */,
      15,    1,  311,    2, 0x2a,   44 /* Public | MethodCloned */,
      20,    4,  314,    2, 0x0a,   46 /* Public */,
      20,    3,  323,    2, 0x2a,   51 /* Public | MethodCloned */,
      20,    2,  330,    2, 0x2a,   55 /* Public | MethodCloned */,
      20,    1,  335,    2, 0x2a,   58 /* Public | MethodCloned */,
      22,    1,  338,    2, 0x0a,   60 /* Public */,
      24,    5,  341,    2, 0x0a,   62 /* Public */,
      24,    4,  352,    2, 0x2a,   68 /* Public | MethodCloned */,
      24,    3,  361,    2, 0x2a,   73 /* Public | MethodCloned */,
      24,    2,  368,    2, 0x2a,   77 /* Public | MethodCloned */,
      24,    1,  373,    2, 0x2a,   80 /* Public | MethodCloned */,
      22,    1,  376,    2, 0x0a,   82 /* Public */,
      24,    5,  379,    2, 0x0a,   84 /* Public */,
      24,    4,  390,    2, 0x2a,   90 /* Public | MethodCloned */,
      24,    3,  399,    2, 0x2a,   95 /* Public | MethodCloned */,
      24,    2,  406,    2, 0x2a,   99 /* Public | MethodCloned */,
      24,    1,  411,    2, 0x2a,  102 /* Public | MethodCloned */,
      30,    2,  414,    2, 0x0a,  104 /* Public */,
      30,    6,  419,    2, 0x0a,  107 /* Public */,
      30,    5,  432,    2, 0x2a,  114 /* Public | MethodCloned */,
      30,    4,  443,    2, 0x2a,  120 /* Public | MethodCloned */,
      30,    3,  452,    2, 0x2a,  125 /* Public | MethodCloned */,
      30,    2,  459,    2, 0x2a,  129 /* Public | MethodCloned */,
      30,    1,  464,    2, 0x2a,  132 /* Public | MethodCloned */,
      41,    0,  467,    2, 0x0a,  134 /* Public */,
      42,    0,  468,    2, 0x10a,  135 /* Public | MethodIsConst  */,
      43,    1,  469,    2, 0x0a,  136 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      45,    0,  472,    2, 0x102,  138 /* Public | MethodIsConst  */,
      10,    0,  473,    2, 0x102,  139 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QRectF,    7,    9,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QVariantMap,    7,    9,   10,   12,
    QMetaType::Void, QMetaType::QString,   14,

 // slots: parameters
    QMetaType::QString, QMetaType::QImage, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   16,   17,   18,   19,
    QMetaType::QString, QMetaType::QImage, QMetaType::Int, QMetaType::Int,   16,   17,   18,
    QMetaType::QString, QMetaType::QImage, QMetaType::Int,   16,   17,
    QMetaType::QString, QMetaType::QImage,   16,
    QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int, QMetaType::Bool,   21,   17,   18,   19,
    QMetaType::QString, QMetaType::QString, QMetaType::Int, QMetaType::Int,   21,   17,   18,
    QMetaType::QString, QMetaType::QString, QMetaType::Int,   21,   17,
    QMetaType::QString, QMetaType::QString,   21,
    QMetaType::QString, QMetaType::QObjectStar,   23,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   25,   26,   27,   28,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int, QMetaType::Int,   23,   25,   26,   27,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int, QMetaType::Int,   23,   25,   26,
    QMetaType::QString, QMetaType::QObjectStar, QMetaType::Int,   23,   25,
    QMetaType::QString, QMetaType::QObjectStar,   23,
    QMetaType::QString, QMetaType::QUrl,   29,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,   25,   26,   27,   28,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int, QMetaType::Int, QMetaType::Int,   29,   25,   26,   27,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int, QMetaType::Int,   29,   25,   26,
    QMetaType::QString, QMetaType::QUrl, QMetaType::Int,   29,   25,
    QMetaType::QString, QMetaType::QUrl,   29,
    QMetaType::QImage, QMetaType::QString, 0x80000000 | 32,   31,   33,
    QMetaType::QImage, QMetaType::QString, 0x80000000 | 34, QMetaType::QSize, 0x80000000 | 37, QMetaType::Bool, QMetaType::Bool,   31,   35,   36,   38,   39,   40,
    QMetaType::QImage, QMetaType::QString, 0x80000000 | 34, QMetaType::QSize, 0x80000000 | 37, QMetaType::Bool,   31,   35,   36,   38,   39,
    QMetaType::QImage, QMetaType::QString, 0x80000000 | 34, QMetaType::QSize, 0x80000000 | 37,   31,   35,   36,   38,
    QMetaType::QImage, QMetaType::QString, 0x80000000 | 34, QMetaType::QSize,   31,   35,   36,
    QMetaType::QImage, QMetaType::QString, 0x80000000 | 34,   31,   35,
    QMetaType::QImage, QMetaType::QString,   31,
    QMetaType::Int,
    QMetaType::UInt,
    QMetaType::Void, QMetaType::UInt,   44,

 // methods: parameters
    QMetaType::QString,
    QMetaType::QString,

 // properties: name, type, flags
      46, QMetaType::Int, 0x00015001, uint(-1), 0,
      47, QMetaType::UInt, 0x00015003, uint(2), 0,
      48, QMetaType::UInt, 0x00015003, uint(-1), 0,
      49, QMetaType::UInt, 0x00015003, uint(-1), 0,
      50, QMetaType::Bool, 0x00015103, uint(-1), 0,
      51, QMetaType::QVariantList, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      52,   52, 0x0,   19,  519,
      72,   72, 0x0,    2,  557,
      75,   75, 0x0,    2,  561,

 // enum data: key, value
      53, uint(QZXing::DecoderFormat_None),
      54, uint(QZXing::DecoderFormat_Aztec),
      55, uint(QZXing::DecoderFormat_CODABAR),
      56, uint(QZXing::DecoderFormat_CODE_39),
      57, uint(QZXing::DecoderFormat_CODE_93),
      58, uint(QZXing::DecoderFormat_CODE_128),
      59, uint(QZXing::DecoderFormat_DATA_MATRIX),
      60, uint(QZXing::DecoderFormat_EAN_8),
      61, uint(QZXing::DecoderFormat_EAN_13),
      62, uint(QZXing::DecoderFormat_ITF),
      63, uint(QZXing::DecoderFormat_MAXICODE),
      64, uint(QZXing::DecoderFormat_PDF_417),
      65, uint(QZXing::DecoderFormat_QR_CODE),
      66, uint(QZXing::DecoderFormat_RSS_14),
      67, uint(QZXing::DecoderFormat_RSS_EXPANDED),
      68, uint(QZXing::DecoderFormat_UPC_A),
      69, uint(QZXing::DecoderFormat_UPC_E),
      70, uint(QZXing::DecoderFormat_UPC_EAN_EXTENSION),
      71, uint(QZXing::DecoderFormat_CODE_128_GS1),
      73, uint(QZXing::TryHarderBehaviour_ThoroughScanning),
      74, uint(QZXing::TryHarderBehaviour_Rotate),
      76, uint(QZXing::SourceFilter_ImageNormal),
      77, uint(QZXing::SourceFilter_ImageInverted),

       0        // eod
};

Q_CONSTINIT const QMetaObject QZXing::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSQZXingENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQZXingENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQZXingENDCLASS_t,
        // property 'processingTime'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'enabledDecoders'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'tryHarderType'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'imageSourceFilter'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'tryHarder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'allowedExtensions'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // enum 'DecoderFormat'
        QtPrivate::TypeAndForceComplete<QZXing::DecoderFormat, std::true_type>,
        // enum 'TryHarderBehaviour'
        QtPrivate::TypeAndForceComplete<QZXing::TryHarderBehaviour, std::true_type>,
        // enum 'SourceFilter'
        QtPrivate::TypeAndForceComplete<QZXing::SourceFilter, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QZXing, std::true_type>,
        // method 'decodingStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'decodingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'enabledFormatsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tagFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'tagFoundAdvanced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'tagFoundAdvanced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QRectF &, std::false_type>,
        // method 'tagFoundAdvanced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'decodeImage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'decodeImage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'decodeImage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'decodeImage'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>,
        // method 'decodeImageFromFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'decodeImageFromFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'decodeImageFromFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'decodeImageFromFile'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'decodeImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'decodeImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'decodeSubImageQML'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QZXingEncoderConfig &, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncoderFormat, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncodeErrorCorrectionLevel, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncoderFormat, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncodeErrorCorrectionLevel, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncoderFormat, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncodeErrorCorrectionLevel, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncoderFormat, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSize, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncoderFormat, std::false_type>,
        // method 'encodeData'
        QtPrivate::TypeAndForceComplete<QImage, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'getProcessTimeOfLastDecoding'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getEnabledFormats'
        QtPrivate::TypeAndForceComplete<uint, std::false_type>,
        // method 'setDecoder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const uint &, std::false_type>,
        // method 'foundedFormat'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'charSet'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void QZXing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QZXing *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->decodingStarted(); break;
        case 1: _t->decodingFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->enabledFormatsChanged(); break;
        case 3: _t->tagFound((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->tagFoundAdvanced((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 5: _t->tagFoundAdvanced((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QRectF>>(_a[4]))); break;
        case 6: _t->tagFoundAdvanced((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[4]))); break;
        case 7: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: { QString _r = _t->decodeImage((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 9: { QString _r = _t->decodeImage((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 10: { QString _r = _t->decodeImage((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 11: { QString _r = _t->decodeImage((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 14: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 15: { QString _r = _t->decodeImageFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 16: { QString _r = _t->decodeImageQML((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 17: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 18: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 19: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 20: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 21: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 22: { QString _r = _t->decodeImageQML((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 24: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 25: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 26: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->decodeSubImageQML((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QZXingEncoderConfig>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 29: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EncoderFormat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<EncodeErrorCorrectionLevel>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[6])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 30: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EncoderFormat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<EncodeErrorCorrectionLevel>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[5])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 31: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EncoderFormat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<EncodeErrorCorrectionLevel>>(_a[4])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 32: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EncoderFormat>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSize>>(_a[3])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 33: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EncoderFormat>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 34: { QImage _r = _t->encodeData((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QImage*>(_a[0]) = std::move(_r); }  break;
        case 35: { int _r = _t->getProcessTimeOfLastDecoding();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 36: { uint _r = _t->getEnabledFormats();
            if (_a[0]) *reinterpret_cast< uint*>(_a[0]) = std::move(_r); }  break;
        case 37: _t->setDecoder((*reinterpret_cast< std::add_pointer_t<uint>>(_a[1]))); break;
        case 38: { QString _r = _t->foundedFormat();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 39: { QString _r = _t->charSet();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (QZXing::*)();
            if (_t _q_method = &QZXing::decodingStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (QZXing::*)(bool );
            if (_t _q_method = &QZXing::decodingFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (QZXing::*)();
            if (_t _q_method = &QZXing::enabledFormatsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (QZXing::*)(QString );
            if (_t _q_method = &QZXing::tagFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (QZXing::*)(const QString & , const QString & , const QString & ) const;
            if (_t _q_method = &QZXing::tagFoundAdvanced; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (QZXing::*)(const QString & , const QString & , const QString & , const QRectF & ) const;
            if (_t _q_method = &QZXing::tagFoundAdvanced; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (QZXing::*)(const QString & , const QString & , const QString & , const QVariantMap & ) const;
            if (_t _q_method = &QZXing::tagFoundAdvanced; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (QZXing::*)(QString );
            if (_t _q_method = &QZXing::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QZXing *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getProcessTimeOfLastDecoding(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->getEnabledFormats(); break;
        case 2: *reinterpret_cast< uint*>(_v) = _t->getTryHarderBehaviour(); break;
        case 3: *reinterpret_cast< uint*>(_v) = _t->getSourceFilterType(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getTryHarder(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->getAllowedExtensions(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QZXing *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setDecoder(*reinterpret_cast< uint*>(_v)); break;
        case 2: _t->setTryHarderBehaviour(*reinterpret_cast< uint*>(_v)); break;
        case 3: _t->setSourceFilterType(*reinterpret_cast< uint*>(_v)); break;
        case 4: _t->setTryHarder(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setAllowedExtensions(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QZXing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QZXing::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQZXingENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int QZXing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 40;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void QZXing::decodingStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void QZXing::decodingFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QZXing::enabledFormatsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void QZXing::tagFound(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(const_cast< QZXing *>(this), &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3, const QRectF & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< QZXing *>(this), &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QZXing::tagFoundAdvanced(const QString & _t1, const QString & _t2, const QString & _t3, const QVariantMap & _t4)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(const_cast< QZXing *>(this), &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QZXing::error(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
