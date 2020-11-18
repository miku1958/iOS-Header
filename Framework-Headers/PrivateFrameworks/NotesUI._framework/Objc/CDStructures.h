//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct ICDrawingAzimuthFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_930301b0 _field8;
    BOOL _field9;
    id _field10;
    long long _field11;
};

struct ICDrawingEndCapsFilter {
    CDUnknownFunctionPointerType *_field1;
    ICDrawingInputProvider_d48c6870 *_field2;
    BOOL _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
};

struct ICDrawingEndHookFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    BOOL _field6;
};

struct ICDrawingEstimatedAltitudeAndAzimuthFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    long long _field12;
    unsigned int _field13;
    long long _field14;
    double _field15;
    double _field16;
    id _field17;
};

struct ICDrawingInputProvider<ICDrawingInputPoint>;

struct ICDrawingInputProvider<ICDrawingOutputPoint> {
    CDUnknownFunctionPointerType *_field1;
};

struct ICDrawingInputProviderInitial {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct ICDrawingInputSmoother {
    CDUnknownFunctionPointerType *_field1;
    ICDrawingInputProvider_d48c6870 *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_d46ea067 _field8;
    vector_d46ea067 _field9;
    double _field10;
    struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint>> _field11;
    id _field12;
};

struct ICDrawingInputToOutputFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_930301b0 _field8;
    vector_d46ea067 _field9;
    id _field10;
};

struct ICDrawingPixelSmoothingFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    double _field5;
    long long _field6;
    id _field7;
};

struct ICDrawingPointReductionFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_930301b0 _field8;
    vector_930301b0 _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    double _field13;
    double _field14;
    struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double>>> _field15;
    struct vector<long, std::__1::allocator<long>> _field16;
};

struct ICDrawingRulerExtremaFilter {
    CDUnknownFunctionPointerType *_field1;
    ICDrawingInputProvider_d48c6870 *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    long long _field7;
    vector_d46ea067 _field8;
    vector_d46ea067 _field9;
    id _field10;
};

struct ICDrawingStartHookFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    BOOL _field6;
};

struct ICDrawingVelocityCalculationFilter {
    CDUnknownFunctionPointerType *_field1;
    struct ICDrawingInputProvider<ICDrawingInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    BOOL _field5;
};

struct ICSmoothingPoint;

struct NSDirectionalEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct NoteContext {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    unsigned long long _field10;
    BOOL _field11;
    BOOL _field12;
    BOOL _field13;
    BOOL _field14;
    id _field15;
};

struct UIColor {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIFont {
    Class _field1;
};

struct UIImage {
    Class _field1;
};

struct UIImageView {
    Class _field1;
};

struct UITextView {
    Class _field1;
};

struct UIView {
    Class _field1;
};

struct UIViewController {
    Class _field1;
};

struct UIWindow {
    Class _field1;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct pair<long, double>;

struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
};

struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *_field1;
    } _field3;
};

struct vector<ICSmoothingPoint, std::__1::allocator<ICSmoothingPoint>> {
    struct ICSmoothingPoint *_field1;
    struct ICSmoothingPoint *_field2;
    struct __compressed_pair<ICSmoothingPoint *, std::__1::allocator<ICSmoothingPoint>> {
        struct ICSmoothingPoint *_field1;
    } _field3;
};

struct vector<long, std::__1::allocator<long>> {
    long long *_field1;
    long long *_field2;
    struct __compressed_pair<long *, std::__1::allocator<long>> {
        long long *_field1;
    } _field3;
};

struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double>>> {
    struct pair<long, double> *_field1;
    struct pair<long, double> *_field2;
    struct __compressed_pair<std::__1::pair<long, double>*, std::__1::allocator<std::__1::pair<long, double>>> {
        struct pair<long, double> *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

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
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct CDStruct_183601bc;

typedef struct {
    struct CGPoint _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    BOOL _field7;
    long long _field8;
    double _field9;
    BOOL _field10;
} CDStruct_f17e9403;

typedef struct {
    struct CGPoint _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
} CDStruct_47a7c924;

// Template types
typedef struct ICDrawingInputProvider<ICDrawingOutputPoint> {
    CDUnknownFunctionPointerType *_field1;
} ICDrawingInputProvider_d48c6870;

typedef struct vector<ICDrawingInputPoint, std::__1::allocator<ICDrawingInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<ICDrawingInputPoint *, std::__1::allocator<ICDrawingInputPoint>> {
        CDStruct_183601bc *__value_;
    } __end_cap_;
} vector_930301b0;

typedef struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *_field1;
    } _field3;
} vector_d46ea067;

