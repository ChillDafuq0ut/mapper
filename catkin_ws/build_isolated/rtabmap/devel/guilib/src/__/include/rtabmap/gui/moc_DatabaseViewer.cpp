/****************************************************************************
** Meta object code from reading C++ file 'DatabaseViewer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../src/rtabmap/guilib/include/rtabmap/gui/DatabaseViewer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DatabaseViewer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_rtabmap__DatabaseViewer_t {
    QByteArrayData data[67];
    char stringdata0[1187];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_rtabmap__DatabaseViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_rtabmap__DatabaseViewer_t qt_meta_stringdata_rtabmap__DatabaseViewer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "rtabmap::DatabaseViewer"
QT_MOC_LITERAL(1, 24, 13), // "writeSettings"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 22), // "restoreDefaultSettings"
QT_MOC_LITERAL(4, 62, 14), // "configModified"
QT_MOC_LITERAL(5, 77, 12), // "openDatabase"
QT_MOC_LITERAL(6, 90, 13), // "closeDatabase"
QT_MOC_LITERAL(7, 104, 15), // "recoverDatabase"
QT_MOC_LITERAL(8, 120, 10), // "updateInfo"
QT_MOC_LITERAL(9, 131, 16), // "updateStatistics"
QT_MOC_LITERAL(10, 148, 19), // "selectObstacleColor"
QT_MOC_LITERAL(11, 168, 17), // "selectGroundColor"
QT_MOC_LITERAL(12, 186, 16), // "selectEmptyColor"
QT_MOC_LITERAL(13, 203, 14), // "editDepthImage"
QT_MOC_LITERAL(14, 218, 13), // "generateGraph"
QT_MOC_LITERAL(15, 232, 14), // "editSaved2DMap"
QT_MOC_LITERAL(16, 247, 16), // "exportSaved2DMap"
QT_MOC_LITERAL(17, 264, 11), // "import2DMap"
QT_MOC_LITERAL(18, 276, 18), // "regenerateSavedMap"
QT_MOC_LITERAL(19, 295, 17), // "viewOptimizedMesh"
QT_MOC_LITERAL(20, 313, 19), // "exportOptimizedMesh"
QT_MOC_LITERAL(21, 333, 19), // "updateOptimizedMesh"
QT_MOC_LITERAL(22, 353, 14), // "exportDatabase"
QT_MOC_LITERAL(23, 368, 13), // "extractImages"
QT_MOC_LITERAL(24, 382, 14), // "exportPosesRaw"
QT_MOC_LITERAL(25, 397, 32), // "exportPosesRGBDSLAMMotionCapture"
QT_MOC_LITERAL(26, 430, 19), // "exportPosesRGBDSLAM"
QT_MOC_LITERAL(27, 450, 16), // "exportPosesKITTI"
QT_MOC_LITERAL(28, 467, 15), // "exportPosesTORO"
QT_MOC_LITERAL(29, 483, 14), // "exportPosesG2O"
QT_MOC_LITERAL(30, 498, 14), // "exportPosesKML"
QT_MOC_LITERAL(31, 513, 13), // "exportGPS_TXT"
QT_MOC_LITERAL(32, 527, 13), // "exportGPS_KML"
QT_MOC_LITERAL(33, 541, 18), // "generateLocalGraph"
QT_MOC_LITERAL(34, 560, 19), // "regenerateLocalMaps"
QT_MOC_LITERAL(35, 580, 26), // "regenerateCurrentLocalMaps"
QT_MOC_LITERAL(36, 607, 9), // "view3DMap"
QT_MOC_LITERAL(37, 617, 13), // "generate3DMap"
QT_MOC_LITERAL(38, 631, 22), // "detectMoreLoopClosures"
QT_MOC_LITERAL(39, 654, 28), // "updateAllNeighborCovariances"
QT_MOC_LITERAL(40, 683, 31), // "updateAllLoopClosureCovariances"
QT_MOC_LITERAL(41, 715, 22), // "refineAllNeighborLinks"
QT_MOC_LITERAL(42, 738, 25), // "refineAllLoopClosureLinks"
QT_MOC_LITERAL(43, 764, 15), // "resetAllChanges"
QT_MOC_LITERAL(44, 780, 19), // "sliderAValueChanged"
QT_MOC_LITERAL(45, 800, 19), // "sliderBValueChanged"
QT_MOC_LITERAL(46, 820, 12), // "sliderAMoved"
QT_MOC_LITERAL(47, 833, 12), // "sliderBMoved"
QT_MOC_LITERAL(48, 846, 12), // "update3dView"
QT_MOC_LITERAL(49, 859, 26), // "sliderNeighborValueChanged"
QT_MOC_LITERAL(50, 886, 22), // "sliderLoopValueChanged"
QT_MOC_LITERAL(51, 909, 28), // "sliderIterationsValueChanged"
QT_MOC_LITERAL(52, 938, 14), // "editConstraint"
QT_MOC_LITERAL(53, 953, 10), // "updateGrid"
QT_MOC_LITERAL(54, 964, 17), // "updateOctomapView"
QT_MOC_LITERAL(55, 982, 15), // "updateGraphView"
QT_MOC_LITERAL(56, 998, 16), // "refineConstraint"
QT_MOC_LITERAL(57, 1015, 13), // "addConstraint"
QT_MOC_LITERAL(58, 1029, 15), // "resetConstraint"
QT_MOC_LITERAL(59, 1045, 16), // "rejectConstraint"
QT_MOC_LITERAL(60, 1062, 20), // "updateConstraintView"
QT_MOC_LITERAL(61, 1083, 17), // "updateLoggerLevel"
QT_MOC_LITERAL(62, 1101, 12), // "updateStereo"
QT_MOC_LITERAL(63, 1114, 23), // "notifyParametersChanged"
QT_MOC_LITERAL(64, 1138, 15), // "setupMainLayout"
QT_MOC_LITERAL(65, 1154, 8), // "vertical"
QT_MOC_LITERAL(66, 1163, 23) // "updateConstraintButtons"

    },
    "rtabmap::DatabaseViewer\0writeSettings\0"
    "\0restoreDefaultSettings\0configModified\0"
    "openDatabase\0closeDatabase\0recoverDatabase\0"
    "updateInfo\0updateStatistics\0"
    "selectObstacleColor\0selectGroundColor\0"
    "selectEmptyColor\0editDepthImage\0"
    "generateGraph\0editSaved2DMap\0"
    "exportSaved2DMap\0import2DMap\0"
    "regenerateSavedMap\0viewOptimizedMesh\0"
    "exportOptimizedMesh\0updateOptimizedMesh\0"
    "exportDatabase\0extractImages\0"
    "exportPosesRaw\0exportPosesRGBDSLAMMotionCapture\0"
    "exportPosesRGBDSLAM\0exportPosesKITTI\0"
    "exportPosesTORO\0exportPosesG2O\0"
    "exportPosesKML\0exportGPS_TXT\0exportGPS_KML\0"
    "generateLocalGraph\0regenerateLocalMaps\0"
    "regenerateCurrentLocalMaps\0view3DMap\0"
    "generate3DMap\0detectMoreLoopClosures\0"
    "updateAllNeighborCovariances\0"
    "updateAllLoopClosureCovariances\0"
    "refineAllNeighborLinks\0refineAllLoopClosureLinks\0"
    "resetAllChanges\0sliderAValueChanged\0"
    "sliderBValueChanged\0sliderAMoved\0"
    "sliderBMoved\0update3dView\0"
    "sliderNeighborValueChanged\0"
    "sliderLoopValueChanged\0"
    "sliderIterationsValueChanged\0"
    "editConstraint\0updateGrid\0updateOctomapView\0"
    "updateGraphView\0refineConstraint\0"
    "addConstraint\0resetConstraint\0"
    "rejectConstraint\0updateConstraintView\0"
    "updateLoggerLevel\0updateStereo\0"
    "notifyParametersChanged\0setupMainLayout\0"
    "vertical\0updateConstraintButtons"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_rtabmap__DatabaseViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      64,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  334,    2, 0x08 /* Private */,
       3,    0,  335,    2, 0x08 /* Private */,
       4,    0,  336,    2, 0x08 /* Private */,
       5,    0,  337,    2, 0x08 /* Private */,
       6,    0,  338,    2, 0x08 /* Private */,
       7,    0,  339,    2, 0x08 /* Private */,
       8,    0,  340,    2, 0x08 /* Private */,
       9,    0,  341,    2, 0x08 /* Private */,
      10,    0,  342,    2, 0x08 /* Private */,
      11,    0,  343,    2, 0x08 /* Private */,
      12,    0,  344,    2, 0x08 /* Private */,
      13,    0,  345,    2, 0x08 /* Private */,
      14,    0,  346,    2, 0x08 /* Private */,
      15,    0,  347,    2, 0x08 /* Private */,
      16,    0,  348,    2, 0x08 /* Private */,
      17,    0,  349,    2, 0x08 /* Private */,
      18,    0,  350,    2, 0x08 /* Private */,
      19,    0,  351,    2, 0x08 /* Private */,
      20,    0,  352,    2, 0x08 /* Private */,
      21,    0,  353,    2, 0x08 /* Private */,
      22,    0,  354,    2, 0x08 /* Private */,
      23,    0,  355,    2, 0x08 /* Private */,
      24,    0,  356,    2, 0x08 /* Private */,
      25,    0,  357,    2, 0x08 /* Private */,
      26,    0,  358,    2, 0x08 /* Private */,
      27,    0,  359,    2, 0x08 /* Private */,
      28,    0,  360,    2, 0x08 /* Private */,
      29,    0,  361,    2, 0x08 /* Private */,
      30,    0,  362,    2, 0x08 /* Private */,
      31,    0,  363,    2, 0x08 /* Private */,
      32,    0,  364,    2, 0x08 /* Private */,
      33,    0,  365,    2, 0x08 /* Private */,
      34,    0,  366,    2, 0x08 /* Private */,
      35,    0,  367,    2, 0x08 /* Private */,
      36,    0,  368,    2, 0x08 /* Private */,
      37,    0,  369,    2, 0x08 /* Private */,
      38,    0,  370,    2, 0x08 /* Private */,
      39,    0,  371,    2, 0x08 /* Private */,
      40,    0,  372,    2, 0x08 /* Private */,
      41,    0,  373,    2, 0x08 /* Private */,
      42,    0,  374,    2, 0x08 /* Private */,
      43,    0,  375,    2, 0x08 /* Private */,
      44,    1,  376,    2, 0x08 /* Private */,
      45,    1,  379,    2, 0x08 /* Private */,
      46,    1,  382,    2, 0x08 /* Private */,
      47,    1,  385,    2, 0x08 /* Private */,
      48,    0,  388,    2, 0x08 /* Private */,
      49,    1,  389,    2, 0x08 /* Private */,
      50,    1,  392,    2, 0x08 /* Private */,
      51,    1,  395,    2, 0x08 /* Private */,
      52,    0,  398,    2, 0x08 /* Private */,
      53,    0,  399,    2, 0x08 /* Private */,
      54,    0,  400,    2, 0x08 /* Private */,
      55,    0,  401,    2, 0x08 /* Private */,
      56,    0,  402,    2, 0x08 /* Private */,
      57,    0,  403,    2, 0x08 /* Private */,
      58,    0,  404,    2, 0x08 /* Private */,
      59,    0,  405,    2, 0x08 /* Private */,
      60,    0,  406,    2, 0x08 /* Private */,
      61,    0,  407,    2, 0x08 /* Private */,
      62,    0,  408,    2, 0x08 /* Private */,
      63,    1,  409,    2, 0x08 /* Private */,
      64,    1,  412,    2, 0x08 /* Private */,
      66,    0,  415,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::Bool,   65,
    QMetaType::Void,

       0        // eod
};

void rtabmap::DatabaseViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DatabaseViewer *_t = static_cast<DatabaseViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->writeSettings(); break;
        case 1: _t->restoreDefaultSettings(); break;
        case 2: _t->configModified(); break;
        case 3: _t->openDatabase(); break;
        case 4: { bool _r = _t->closeDatabase();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->recoverDatabase(); break;
        case 6: _t->updateInfo(); break;
        case 7: _t->updateStatistics(); break;
        case 8: _t->selectObstacleColor(); break;
        case 9: _t->selectGroundColor(); break;
        case 10: _t->selectEmptyColor(); break;
        case 11: _t->editDepthImage(); break;
        case 12: _t->generateGraph(); break;
        case 13: _t->editSaved2DMap(); break;
        case 14: _t->exportSaved2DMap(); break;
        case 15: _t->import2DMap(); break;
        case 16: _t->regenerateSavedMap(); break;
        case 17: _t->viewOptimizedMesh(); break;
        case 18: _t->exportOptimizedMesh(); break;
        case 19: _t->updateOptimizedMesh(); break;
        case 20: _t->exportDatabase(); break;
        case 21: _t->extractImages(); break;
        case 22: _t->exportPosesRaw(); break;
        case 23: _t->exportPosesRGBDSLAMMotionCapture(); break;
        case 24: _t->exportPosesRGBDSLAM(); break;
        case 25: _t->exportPosesKITTI(); break;
        case 26: _t->exportPosesTORO(); break;
        case 27: _t->exportPosesG2O(); break;
        case 28: _t->exportPosesKML(); break;
        case 29: _t->exportGPS_TXT(); break;
        case 30: _t->exportGPS_KML(); break;
        case 31: _t->generateLocalGraph(); break;
        case 32: _t->regenerateLocalMaps(); break;
        case 33: _t->regenerateCurrentLocalMaps(); break;
        case 34: _t->view3DMap(); break;
        case 35: _t->generate3DMap(); break;
        case 36: _t->detectMoreLoopClosures(); break;
        case 37: _t->updateAllNeighborCovariances(); break;
        case 38: _t->updateAllLoopClosureCovariances(); break;
        case 39: _t->refineAllNeighborLinks(); break;
        case 40: _t->refineAllLoopClosureLinks(); break;
        case 41: _t->resetAllChanges(); break;
        case 42: _t->sliderAValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->sliderBValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 44: _t->sliderAMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 45: _t->sliderBMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 46: _t->update3dView(); break;
        case 47: _t->sliderNeighborValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 48: _t->sliderLoopValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 49: _t->sliderIterationsValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 50: _t->editConstraint(); break;
        case 51: _t->updateGrid(); break;
        case 52: _t->updateOctomapView(); break;
        case 53: _t->updateGraphView(); break;
        case 54: _t->refineConstraint(); break;
        case 55: _t->addConstraint(); break;
        case 56: _t->resetConstraint(); break;
        case 57: _t->rejectConstraint(); break;
        case 58: _t->updateConstraintView(); break;
        case 59: _t->updateLoggerLevel(); break;
        case 60: _t->updateStereo(); break;
        case 61: _t->notifyParametersChanged((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 62: _t->setupMainLayout((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->updateConstraintButtons(); break;
        default: ;
        }
    }
}

const QMetaObject rtabmap::DatabaseViewer::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_rtabmap__DatabaseViewer.data,
      qt_meta_data_rtabmap__DatabaseViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *rtabmap::DatabaseViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *rtabmap::DatabaseViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_rtabmap__DatabaseViewer.stringdata0))
        return static_cast<void*>(const_cast< DatabaseViewer*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int rtabmap::DatabaseViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 64)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 64;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 64)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 64;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
