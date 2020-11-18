//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSMutableDictionary, NSMutableSet, NSTimer, UIWebPDFView, _UICommandIdentifierDictionary;

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CAColorMatrix {
    float m11;
    float m12;
    float m13;
    float m14;
    float m15;
    float m21;
    float m22;
    float m23;
    float m24;
    float m25;
    float m31;
    float m32;
    float m33;
    float m34;
    float m35;
    float m41;
    float m42;
    float m43;
    float m44;
    float m45;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPathElement {
    int _field1;
    struct CGPoint *_field2;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct InteractionContext {
    id _field1;
};

struct InteractionEndingContext {
    struct InteractionContext _field1;
    BOOL _field2;
    unsigned long long _field3;
    id _field4;
    CDUnknownBlockType _field5;
    CDUnknownBlockType _field6;
};

struct NSDirectionalEdgeInsets {
    double top;
    double leading;
    double bottom;
    double trailing;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double horizontal;
    double vertical;
};

struct UIPeripheralAnimationGeometry {
    struct CGPoint outPosition;
    struct CGPoint inPosition;
    struct CGRect bounds;
    struct CGAffineTransform transform;
    double targetFrameHeightDelta;
};

struct UIRectCornerRadii {
    double topLeft;
    double bottomLeft;
    double bottomRight;
    double topRight;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PDFHistoryItem {
    BOOL restorePending;
    BOOL isInitialScale;
    double zoomScale;
    struct CGPoint contentOffset;
};

struct _UIAuxillarySolveResult;

struct _UIBoundingPathBitmapData {
    unsigned long long width;
    unsigned long long height;
    struct _UIBoundingPathBitmapDataSkipRegion skipRegion;
    unsigned long long nodeCount;
    unsigned long long maximumNodesPerRow;
    unsigned short *rows;
};

struct _UIBoundingPathBitmapDataCorner {
    unsigned long long location;
    unsigned long long radius;
    unsigned long long size;
    BOOL edgePositionsUseLargeValues;
    void *referenceEdgePositionsByRow;
    void *referenceEdgePositionsByCol;
};

struct _UIBoundingPathBitmapDataSkipRegion {
    unsigned long long y;
    unsigned long long height;
};

struct _UIDragInteractionDriverStateMachine {
    unsigned long long state;
    unsigned long long *eventsQueueEnd;
};

struct _UIIntegralCornerRadii {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct _UIIntegralPoint {
    long long _field1;
    long long _field2;
};

struct _UIIntegralRect {
    struct _UIIntegralPoint _field1;
    struct _UIIntegralSize _field2;
};

struct _UIIntegralSize {
    long long _field1;
    long long _field2;
};

struct _UIItemSolveResult {
    struct CGRect _field1;
    struct CGRect _field2;
    struct vector<_UIAuxillarySolveResult, std::__1::allocator<_UIAuxillarySolveResult>> _field3;
    struct vector<_UIAuxillarySolveResult, std::__1::allocator<_UIAuxillarySolveResult>> _field4;
    id _field5;
};

struct _UIOrderedRangeIndexerImpl;

struct _UIOutlineNode {
    struct _NSRange _field1;
    long long _field2;
};

struct _UIRTreeContainerNode;

struct _UIRegionSolveResult {
    struct _NSRange _field1;
    double _field2;
    double _field3;
    struct _UIItemSolveResult _field4;
};

struct _UIRenderingSurface {
    struct CGRect _field1;
    double _field2;
};

struct _UISEGestureFeatureSample {
    unsigned long long _field1;
    unsigned long long _field2;
    BOOL _field3;
    long long _field4;
    unsigned long long _field5;
    struct CGPoint _field6;
    double _field7;
};

struct _UIStateMachineDebugging;

struct _UIStateMachineMeta {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct _UIStateTransition {
    CDUnknownBlockType _field1;
    CDUnknownBlockType _field2;
    unsigned int :16;
    unsigned int :8;
    unsigned int :8;
};

struct _UITableConstantsBackgroundProperties {
    BOOL _field1;
    id _field2;
    id _field3;
    BOOL _field4;
    long long _field5;
    double _field6;
    double _field7;
    BOOL _field8;
    id _field9;
};

struct _UITraitCollectionChangeDescription {
    id _field1;
    id _field2;
    BOOL _field3;
    BOOL _field4;
    BOOL _field5;
    BOOL _field6;
    BOOL _field7;
    BOOL _field8;
    BOOL _field9;
    BOOL _field10;
};

struct _UIWebTouchEvent {
    int type;
    double timestamp;
    struct CGPoint locationInScreenCoordinates;
    struct CGPoint locationInDocumentCoordinates;
    double scale;
    double rotation;
    BOOL inJavaScriptGesture;
    struct _UIWebTouchPoint *touchPoints;
    unsigned int touchPointCount;
    BOOL isPotentialTap;
};

struct _UIWebTouchPoint;

struct _UIWebViewportConfiguration {
    struct CGSize size;
    float initialScale;
    float minimumScale;
    float maximumScale;
    BOOL allowsUserScaling;
    BOOL allowsShrinkToFit;
    BOOL avoidsUnsafeArea;
};

struct __UISignedRange {
    long long _field1;
    unsigned long long _field2;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*> *__next_;
};

struct __shared_weak_count;

struct atomic_flag {
    _Atomic BOOL _Value;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct shared_ptr<_UIOrderedRangeIndexerImpl> {
    struct _UIOrderedRangeIndexerImpl *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct shared_ptr<_UIRTreeContainerNode> {
    struct _UIRTreeContainerNode *__ptr_;
    struct __shared_weak_count *__cntrl_;
};

struct ui_size_cache {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ui_size_cache_value *, std::__1::allocator<ui_size_cache_value>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct unique_ptr<_UIItemSolveResult, std::__1::default_delete<_UIItemSolveResult>> {
    struct __compressed_pair<_UIItemSolveResult *, std::__1::default_delete<_UIItemSolveResult>> {
        struct _UIItemSolveResult *__value_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*> **__value_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*>> {
                unsigned long long __value_;
            } __data_;
        } __value_;
    } __ptr_;
};

struct unordered_map<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization, std::__1::hash<std::__1::basic_string<char>>, std::__1::equal_to<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>>> {
    struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, std::__1::hash<std::__1::basic_string<char>>, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, std::__1::equal_to<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, void *>*> __value_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, std::__1::hash<std::__1::basic_string<char>>, true>> {
            unsigned long long __value_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, _UICollectionAuxillaryCustomization>, std::__1::equal_to<std::__1::basic_string<char>>, true>> {
            float __value_;
        } __p3_;
    } __table_;
};

struct vector<UICollectionViewLayoutAttributes *, std::__1::allocator<UICollectionViewLayoutAttributes *>> {
    id *__begin_;
    id *__end_;
    struct __compressed_pair<UICollectionViewLayoutAttributes *__strong *, std::__1::allocator<UICollectionViewLayoutAttributes *>> {
        id *__value_;
    } __end_cap_;
};

struct vector<_NSRange, std::__1::allocator<_NSRange>> {
    struct _NSRange *__begin_;
    struct _NSRange *__end_;
    struct __compressed_pair<_NSRange *, std::__1::allocator<_NSRange>> {
        struct _NSRange *__value_;
    } __end_cap_;
};

struct vector<_UIAuxillarySolveResult, std::__1::allocator<_UIAuxillarySolveResult>> {
    struct _UIAuxillarySolveResult *_field1;
    struct _UIAuxillarySolveResult *_field2;
    struct __compressed_pair<_UIAuxillarySolveResult *, std::__1::allocator<_UIAuxillarySolveResult>> {
        struct _UIAuxillarySolveResult *_field1;
    } _field3;
};

struct vector<_UIOutlineNode, std::__1::allocator<_UIOutlineNode>> {
    struct _UIOutlineNode *__begin_;
    struct _UIOutlineNode *__end_;
    struct __compressed_pair<_UIOutlineNode *, std::__1::allocator<_UIOutlineNode>> {
        struct _UIOutlineNode *__value_;
    } __end_cap_;
};

struct vector<_UIRegionSolveResult, std::__1::allocator<_UIRegionSolveResult>> {
    struct _UIRegionSolveResult *__begin_;
    struct _UIRegionSolveResult *__end_;
    struct __compressed_pair<_UIRegionSolveResult *, std::__1::allocator<_UIRegionSolveResult>> {
        struct _UIRegionSolveResult *__value_;
    } __end_cap_;
};

struct vector<long, std::__1::allocator<long>> {
    long long *__begin_;
    long long *__end_;
    struct __compressed_pair<long *, std::__1::allocator<long>> {
        long long *__value_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    NSMutableSet *keyCommands;
    NSMutableDictionary *menus;
    NSMutableDictionary *actions;
    _UICommandIdentifierDictionary *commands;
    NSMutableDictionary *parentMenuIdentifiers;
    _UICommandIdentifierDictionary *commandParentMenuIdentifiers;
} CDStruct_de35aa0b;

typedef struct {
    UIWebPDFView *view;
    NSTimer *timer;
} CDStruct_d58a15aa;

typedef struct {
    id _field1;
    BOOL _field2;
    BOOL _field3;
    BOOL _field4;
    BOOL _field5;
    BOOL _field6;
    BOOL _field7;
    BOOL _field8;
    BOOL _field9;
    BOOL _field10;
    BOOL _field11;
    BOOL _field12;
} CDStruct_a002d41c;

typedef struct {
    id _field1;
    unsigned long long _field2;
} CDStruct_856ef1b3;

typedef struct {
    BOOL animateContentRotation;
    BOOL preserveHeight;
    BOOL avoidFadingBottomOfContent;
    BOOL skipSnapshotOfEndState;
    BOOL preventAdditveAnimations;
    double contentStretchRightEdgeInset;
    int edgeClip;
} CDStruct_8bdd0ba6;

typedef struct {
    unsigned long long direction;
    BOOL primaryActionIsDestructive;
    BOOL primaryActionCanBeTriggeredBySwipe;
    double openThreshold;
    double confirmationThreshold;
} CDStruct_324b76a9;

typedef struct {
    unsigned long long direction;
    unsigned long long targetSwipeState;
    BOOL animated;
    double xOffset;
    double initialSpringVelocity;
    double springStiffness;
} CDStruct_9b6dff2a;

typedef struct {
    unsigned long long attachment;
    unsigned long long alignment;
    double attachmentOffset;
    double alignmentOffset;
} CDStruct_a36705e8;

typedef struct {
    unsigned long long senderID;
    double controllerState[16];
    double normalizedLeftStickState[4];
    double normalizedRightStickState[4];
    double normalizedShoulderButtonState[4];
} CDStruct_a7a14e3b;

typedef struct {
    BOOL itemIsEnabled[43];
    char timeString[64];
    char shortTimeString[64];
    char dateString[256];
    int gsmSignalStrengthRaw;
    int secondaryGsmSignalStrengthRaw;
    int gsmSignalStrengthBars;
    int secondaryGsmSignalStrengthBars;
    char serviceString[100];
    char secondaryServiceString[100];
    char serviceCrossfadeString[100];
    char secondaryServiceCrossfadeString[100];
    char serviceImages[2][100];
    char operatorDirectory[1024];
    unsigned int serviceContentType;
    unsigned int secondaryServiceContentType;
    unsigned int cellLowDataModeActive:1;
    unsigned int secondaryCellLowDataModeActive:1;
    int wifiSignalStrengthRaw;
    int wifiSignalStrengthBars;
    unsigned int wifiLowDataModeActive:1;
    unsigned int dataNetworkType;
    unsigned int secondaryDataNetworkType;
    int batteryCapacity;
    unsigned int batteryState;
    char batteryDetailString[150];
    int bluetoothBatteryCapacity;
    int thermalColor;
    unsigned int thermalSunlightMode:1;
    unsigned int slowActivity:1;
    unsigned int syncActivity:1;
    char activityDisplayId[256];
    unsigned int bluetoothConnected:1;
    unsigned int displayRawGSMSignal:1;
    unsigned int displayRawWifiSignal:1;
    unsigned int locationIconType:1;
    unsigned int voiceControlIconType:2;
    unsigned int quietModeInactive:1;
    unsigned int tetheringConnectionCount;
    unsigned int batterySaverModeActive:1;
    unsigned int deviceIsRTL:1;
    unsigned int lock:1;
    char breadcrumbTitle[256];
    char breadcrumbSecondaryTitle[256];
    char personName[100];
    unsigned int electronicTollCollectionAvailable:1;
    unsigned int radarAvailable:1;
    unsigned int wifiLinkWarning:1;
    unsigned int wifiSearching:1;
    double backgroundActivityDisplayStartDate;
    unsigned int shouldShowEmergencyOnlyStatus:1;
    unsigned int secondaryCellularConfigured:1;
    char primaryServiceBadgeString[100];
    char secondaryServiceBadgeString[100];
} CDStruct_3fd7985f;

typedef struct {
    unsigned int val[8];
} CDStruct_4c969caf;

typedef struct {
    unsigned int idiom:6;
    unsigned int landscape:1;
    unsigned int split:1;
    unsigned int appearance:8;
    unsigned int rendering:8;
    unsigned int padding:8;
} CDStruct_227bb23d;

typedef struct {
    double dampingRatio;
    double response;
    BOOL initialDampingRatioSpecified;
    BOOL initialResponseSpecified;
    double initialDampingRatio;
    double initialResponse;
    double dampingRatioSmoothing;
    double responseSmoothing;
    double targetSmoothing;
    double projectionDeceleration;
    double impulse;
} CDStruct_6c8af1d9;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    BOOL _field5;
    BOOL _field6;
    BOOL _field7;
    BOOL _field8;
} CDStruct_1c6ce877;

typedef struct {
    double rotationX;
    double rotationY;
    double rotationZ;
    double scaleX;
    double scaleY;
    double scaleZ;
    double translationX;
    double translationY;
    double translationZ;
} CDStruct_e79446ac;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
} CDStruct_d83abbfb;

typedef struct {
    double amount;
    int unit;
} CDStruct_73524d89;

typedef struct {
    int commonRowHorizontalAlignment;
    int lastRowHorizontalAlignment;
    int rowVerticalAlignment;
} CDStruct_2f5e8405;

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    struct CGSize _field6;
} CDStruct_0ba2c6ed;

typedef struct {
    unsigned long long _field1;
    CDStruct_a36705e8 _field2;
    struct CGPoint _field3;
    unsigned long long _field4;
} CDStruct_d394d979;

typedef struct {
    BOOL overrideItemIsEnabled[43];
    unsigned int overrideTimeString:1;
    unsigned int overrideDateString:1;
    unsigned int overrideGsmSignalStrengthRaw:1;
    unsigned int overrideSecondaryGsmSignalStrengthRaw:1;
    unsigned int overrideGsmSignalStrengthBars:1;
    unsigned int overrideSecondaryGsmSignalStrengthBars:1;
    unsigned int overrideServiceString:1;
    unsigned int overrideSecondaryServiceString:1;
    unsigned int overrideServiceImages:2;
    unsigned int overrideOperatorDirectory:1;
    unsigned int overrideServiceContentType:1;
    unsigned int overrideSecondaryServiceContentType:1;
    unsigned int overrideWifiSignalStrengthRaw:1;
    unsigned int overrideWifiSignalStrengthBars:1;
    unsigned int overrideDataNetworkType:1;
    unsigned int overrideSecondaryDataNetworkType:1;
    unsigned int disallowsCellularDataNetworkTypes:1;
    unsigned int overrideBatteryCapacity:1;
    unsigned int overrideBatteryState:1;
    unsigned int overrideBatteryDetailString:1;
    unsigned int overrideBluetoothBatteryCapacity:1;
    unsigned int overrideThermalColor:1;
    unsigned int overrideSlowActivity:1;
    unsigned int overrideActivityDisplayId:1;
    unsigned int overrideBluetoothConnected:1;
    unsigned int overrideBreadcrumb:1;
    unsigned int overrideLock;
    unsigned int overrideDisplayRawGSMSignal:1;
    unsigned int overrideDisplayRawWifiSignal:1;
    unsigned int overridePersonName:1;
    unsigned int overrideWifiLinkWarning:1;
    unsigned int overrideSecondaryCellularConfigured:1;
    unsigned int overridePrimaryServiceBadgeString:1;
    unsigned int overrideSecondaryServiceBadgeString:1;
    CDStruct_3fd7985f values;
} CDStruct_e922dd9d;

typedef struct {
    CDStruct_73524d89 _field1[4];
} CDStruct_bd7e7c01;

typedef struct {
    int _field1;
    struct CGPoint _field2;
    struct CGPoint _field3;
    struct CGSize _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
} CDStruct_ac6e8047;

typedef struct {
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field1;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field2;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field3;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field4;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
    } _field5;
} CDStruct_10115da1;

typedef struct {
    CDStruct_57d825b2 dampingRatioParameters;
    CDStruct_57d825b2 responseParameters;
    CDStruct_57d825b2 targetParameters;
    BOOL dampingRatioSmoothingDisabled;
    BOOL responseSmoothingDisabled;
    BOOL targetSmoothingDisabled;
} CDStruct_9e265dec;

typedef struct {
    CDStruct_f2a5f274 dampingRatioState;
    CDStruct_f2a5f274 responseState;
    double tension;
    double friction;
} CDStruct_289c5ec3;

typedef struct {
    CDStruct_21fd8efb beginTime;
    CDStruct_21fd8efb endTime;
} CDStruct_cfb9664d;

typedef struct {
    struct CGPoint _field1;
    unsigned long long _field2;
} CDStruct_912d1c89;

typedef struct {
    struct UIEdgeInsets _field1;
    struct UIEdgeInsets _field2;
} CDStruct_77fbeba1;

typedef struct {
    id _field1;
    double _field2;
    double _field3;
    CDStruct_0ba2c6ed _field4;
    CDStruct_0ba2c6ed _field5;
    CDStruct_0ba2c6ed _field6;
    CDStruct_0ba2c6ed _field7;
    BOOL _field8;
} CDStruct_41b0f204;

typedef struct {
    BOOL _field1;
    double _field2;
    struct CGRect _field3;
    struct CGSize _field4;
    struct UIEdgeInsets _field5;
    double _field6;
    BOOL _field7;
    BOOL _field8;
    struct CGSize _field9;
} CDStruct_758ece87;

typedef struct {
    double firstBaseline;
    double lastBaseline;
    struct CGRect referenceBounds;
    long long measuredNumberOfLines;
} CDStruct_25ed71ea;

typedef struct {
    struct {
        double _field1;
        double _field2;
    } _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
    CDStruct_289c5ec3 _field3;
} CDStruct_484bde22;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
    struct CGRect _field3;
} CDStruct_6b60c6e5;

typedef struct {
    struct CGRect _field1;
    struct CGRect _field2;
} CDStruct_b7523c42;

typedef struct {
    CDStruct_6b60c6e5 _field1;
    CDStruct_6b60c6e5 _field2;
    CDStruct_6b60c6e5 _field3;
} CDStruct_c7d8fe75;

// Ambiguous groups
typedef struct {
    BOOL _field1;
    BOOL _field2;
} CDStruct_3d581f42;

typedef struct {
    unsigned int visible:1;
    unsigned int isCleaningUp:1;
    unsigned int didRevertStatusBar:1;
} CDStruct_d1897728;

typedef struct {
    unsigned int :1;
    unsigned int :1;
} CDStruct_d7010776;

typedef struct {
    unsigned int :1;
} CDStruct_65389fcd;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_d2b197d1;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
} CDStruct_39925896;

typedef struct {
    double targetValue;
    double tension;
    double friction;
} CDStruct_57d825b2;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    double _x;
    double _y;
} CDStruct_5e2aa800;

typedef struct {
    double minimum;
    double maximum;
} CDStruct_ef18196a;

typedef struct {
    double value;
    double velocity;
} CDStruct_f2a5f274;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    long long hour;
    long long minute;
} CDStruct_21fd8efb;

typedef struct {
    struct CGPoint _field1;
    double _field2;
} CDStruct_19cde01f;

typedef struct {
    struct CGPoint point;
    double force;
} CDStruct_23d8ee2f;

typedef struct vector<_UIOutlineNode, std::__1::allocator<_UIOutlineNode>> {
    struct _UIOutlineNode *__begin_;
    struct _UIOutlineNode *__end_;
    struct __compressed_pair<_UIOutlineNode *, std::__1::allocator<_UIOutlineNode>> {
        struct _UIOutlineNode *__value_;
    } __end_cap_;
} vector_8b07facb;

#pragma mark Named Unions

union _GLKQuaternion {
    struct {
        float x;
        float y;
        float z;
        float w;
    } ;
    struct {
        union _GLKVector3 v;
        float s;
    } ;
    float q[4];
};

union _GLKVector3 {
    struct {
        float x;
        float y;
        float z;
    } ;
    struct {
        float r;
        float g;
        float b;
    } ;
    struct {
        float s;
        float t;
        float p;
    } ;
    float v[3];
};

union _UIStateContext {
    id _field1;
    void *_field2;
    void *_field3;
};

#pragma mark Typedef'd Unions

typedef union {
    unsigned char _field1;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field2;
} CDUnion_e8341a59;

typedef union {
    CDStruct_227bb23d styling;
    int intValue;
} CDUnion_bf7716c0;

