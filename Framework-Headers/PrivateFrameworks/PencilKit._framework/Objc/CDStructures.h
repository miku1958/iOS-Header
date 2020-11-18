//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AnimatingStroke {
    id _field1;
    struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter>> _field2;
    struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter>> _field3;
    struct unique_ptr<PKInputInputProvider, std::__1::default_delete<PKInputInputProvider>> _field4;
    long long _field5;
    BOOL _field6;
    struct CGRect _field7;
    struct CGRect _field8;
    double _field9;
    unsigned int _field10;
    CDUnknownBlockType _field11;
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

struct Color;

struct Command {
    CDUnknownFunctionPointerType *_field1;
    struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> _field2;
    struct unique_ptr<legacy_drawing::Rectangle, std::__1::default_delete<legacy_drawing::Rectangle>> _field3;
    struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> _field4;
    struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> _field5;
    struct unique_ptr<legacy_drawing::Color, std::__1::default_delete<legacy_drawing::Color>> _field6;
    struct unique_ptr<legacy_drawing::CommandID, std::__1::default_delete<legacy_drawing::CommandID>> _field7;
    struct unique_ptr<legacy_drawing::Parameters, std::__1::default_delete<legacy_drawing::Parameters>> _field8;
    struct PtrVector<legacy_drawing::Point> _field9;
    struct unique_ptr<legacy_drawing::CommandID, std::__1::default_delete<legacy_drawing::CommandID>> _field10;
    unsigned int _field11;
    CDStruct_65389fcd _field12;
};

struct CommandID;

struct Data;

struct Document {
    CDUnknownFunctionPointerType *_field1;
    struct PtrVector<versioned_document::Version> _field2;
    unsigned int _field3;
    CDStruct_65389fcd _field4;
};

struct Ink {
    CDUnknownFunctionPointerType *_field1;
    struct unique_ptr<drawing::Color, std::__1::default_delete<drawing::Color>> _field2;
    struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char>>> _field3;
    unsigned long long _field4;
    CDStruct_65389fcd _field5;
};

struct PKAzimuthFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    vector_0f1b893d _field7;
    long long _field8;
    BOOL _field9;
    double _field10;
    long long _field11;
    id _field12;
};

struct PKBSplineFilter;

struct PKCompressedStrokePoint {
    float _field1;
    struct _PKPoint _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
    unsigned short _field7;
    unsigned char _field8;
    unsigned char _field9;
};

struct PKCompressionFilter {
    CDUnknownFunctionPointerType *_field1;
    PKInputProvider_28cf270a *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    vector_5de2d2d9 _field7;
    long long _field8;
    struct vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint>> _field9;
};

struct PKDecompressionFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKCompressedStrokePoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    struct vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint>> _field7;
    long long _field8;
    vector_5de2d2d9 _field9;
    double _field10;
};

struct PKEndCapsFilter {
    CDUnknownFunctionPointerType *_field1;
    PKInputProvider_28cf270a *_field2;
    BOOL _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
};

struct PKEndHookFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    BOOL _field6;
};

struct PKEstimatedAltitudeAndAzimuthFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
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
    BOOL _field13;
    long long _field14;
    double _field15;
    double _field16;
    id _field17;
};

struct PKFunction;

struct PKFunctionPiecewiseBezier {
    CDUnknownFunctionPointerType *_field1;
    struct vector<double, std::__1::allocator<double>> _field2;
    struct vector<double, std::__1::allocator<double>> _field3;
    struct vector<double, std::__1::allocator<double>> _field4;
    struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> _field5;
};

struct PKInputInputProvider;

struct PKInputProvider<PKCompressedStrokePoint>;

struct PKInputProvider<PKInputPoint>;

struct PKInputProvider<_PKStrokePoint> {
    CDUnknownFunctionPointerType *_field1;
};

struct PKInputProviderInitial {
    CDUnknownFunctionPointerType *_field1;
    id _field2;
};

struct PKInputSmoother {
    CDUnknownFunctionPointerType *_field1;
    PKInputProvider_28cf270a *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    vector_5de2d2d9 _field7;
    long long _field8;
    vector_5de2d2d9 _field9;
    double _field10;
    struct vector<PKSmoothingPoint, std::__1::allocator<PKSmoothingPoint>> _field11;
    id _field12;
};

struct PKInputToOutputFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    vector_0f1b893d _field7;
    long long _field8;
    vector_5de2d2d9 _field9;
    id _field10;
};

struct PKOutputFunction;

struct PKOutputTimeFilter;

struct PKPixelSmoothingFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    double _field5;
    long long _field6;
    id _field7;
};

struct PKPointReductionFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    vector_0f1b893d _field7;
    long long _field8;
    vector_0f1b893d _field9;
    long long _field10;
    long long _field11;
    long long _field12;
    double _field13;
    double _field14;
    struct vector<std::__1::pair<long, double>, std::__1::allocator<std::__1::pair<long, double>>> _field15;
    struct vector<long, std::__1::allocator<long>> _field16;
    BOOL _field17;
};

struct PKRulerExtremaFilter {
    CDUnknownFunctionPointerType *_field1;
    PKInputProvider_28cf270a *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    long long _field6;
    vector_5de2d2d9 _field7;
    long long _field8;
    vector_5de2d2d9 _field9;
    id _field10;
};

struct PKSmoothingPoint;

struct PKStartCapsFilter {
    CDUnknownFunctionPointerType *_field1;
    PKInputProvider_28cf270a *_field2;
    BOOL _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
};

struct PKStartHookFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    long long _field5;
    BOOL _field6;
};

struct PKVelocityCalculationFilter {
    CDUnknownFunctionPointerType *_field1;
    struct PKInputProvider<PKInputPoint> *_field2;
    BOOL _field3;
    double _field4;
    double _field5;
    BOOL _field6;
};

struct Parameters;

struct PtrVector<drawing::Ink> {
    struct vector<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>>> _field1;
};

struct PtrVector<drawing::Stroke> {
    struct vector<std::__1::unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>, std::__1::allocator<std::__1::unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>>> _field1;
};

struct PtrVector<drawing::StrokeID> {
    struct vector<std::__1::unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>>, std::__1::allocator<std::__1::unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>>>> _field1;
};

struct PtrVector<legacy_drawing::Command> {
    struct vector<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>>> _field1;
};

struct PtrVector<legacy_drawing::Point> {
    struct vector<std::__1::unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>>, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>>>> _field1;
};

struct PtrVector<legacy_drawing::VectorTimestampClock> {
    struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>>> _field1;
};

struct PtrVector<versioned_document::Version> {
    struct vector<std::__1::unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>, std::__1::allocator<std::__1::unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>>> _field1;
};

struct Rectangle;

struct Stroke {
    CDUnknownFunctionPointerType *_field1;
    struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle>> _field2;
    struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point>> _field3;
    struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point>> _field4;
    unsigned long long _field5;
    struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data>> _field6;
    unsigned long long _field7;
    struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> _field8;
    double _field9;
    struct unique_ptr<drawing::Transform, std::__1::default_delete<drawing::Transform>> _field10;
    struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> _field11;
    BOOL _field12;
    BOOL _field13;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field14;
};

struct StrokeID {
    CDUnknownFunctionPointerType *_field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    CDStruct_8a1bf2a3 _field5;
};

struct StrokeVertex {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
};

struct Transform;

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct VectorTimestamp {
    CDUnknownFunctionPointerType *_field1;
    struct PtrVector<legacy_drawing::VectorTimestampClock> _field2;
};

struct Version {
    CDUnknownFunctionPointerType *_field1;
    struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data>> _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDStruct_d7010776 _field5;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _PKInflightStrokePoint {
    double _field1;
    struct CGPoint _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    BOOL _field7;
    BOOL _field8;
    BOOL _field9;
    BOOL _field10;
    long long _field11;
    double _field12;
};

struct _PKPoint {
    float _field1;
    float _field2;
};

struct _PKStrokeID {
    unsigned int clock;
    unsigned char replicaUUID[16];
    unsigned int subclock;
};

struct _PKStrokePoint {
    double timestamp;
    struct CGPoint location;
    double radius;
    double aspectRatio;
    double edgeWidth;
    double force;
    double azimuth;
    double altitude;
    double opacity;
};

struct _PKStrokePointSlice {
    struct __wrap_iter<_PKStrokePoint *> _field1;
    struct __wrap_iter<_PKStrokePoint *> _field2;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*> *__next_;
};

struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*> {
    struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*> *__next_;
};

struct __wrap_iter<_PKStrokePoint *> {
    struct _PKStrokePoint *_field1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>;

struct pair<long, double>;

struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data>> {
    struct __compressed_pair<PB::Data *, std::__1::default_delete<PB::Data>> {
        struct Data *_field1;
    } _field1;
};

struct unique_ptr<PKBSplineFilter, std::__1::default_delete<PKBSplineFilter>> {
    struct __compressed_pair<PKBSplineFilter *, std::__1::default_delete<PKBSplineFilter>> {
        struct PKBSplineFilter *_field1;
    } _field1;
};

struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction>> {
    struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction>> {
        struct PKFunction *_field1;
    } _field1;
};

struct unique_ptr<PKInputInputProvider, std::__1::default_delete<PKInputInputProvider>> {
    struct __compressed_pair<PKInputInputProvider *, std::__1::default_delete<PKInputInputProvider>> {
        struct PKInputInputProvider *_field1;
    } _field1;
};

struct unique_ptr<PKOutputTimeFilter, std::__1::default_delete<PKOutputTimeFilter>> {
    struct __compressed_pair<PKOutputTimeFilter *, std::__1::default_delete<PKOutputTimeFilter>> {
        struct PKOutputTimeFilter *_field1;
    } _field1;
};

struct unique_ptr<drawing::Color, std::__1::default_delete<drawing::Color>> {
    struct __compressed_pair<drawing::Color *, std::__1::default_delete<drawing::Color>> {
        struct Color *_field1;
    } _field1;
};

struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>;

struct unique_ptr<drawing::Point, std::__1::default_delete<drawing::Point>> {
    struct __compressed_pair<drawing::Point *, std::__1::default_delete<drawing::Point>> {
        struct Point *_field1;
    } _field1;
};

struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle>> {
    struct __compressed_pair<drawing::Rectangle *, std::__1::default_delete<drawing::Rectangle>> {
        struct Rectangle *_field1;
    } _field1;
};

struct unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>;

struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> {
    struct __compressed_pair<drawing::StrokeID *, std::__1::default_delete<drawing::StrokeID>> {
        struct StrokeID *_field1;
    } _field1;
};

struct unique_ptr<drawing::Transform, std::__1::default_delete<drawing::Transform>> {
    struct __compressed_pair<drawing::Transform *, std::__1::default_delete<drawing::Transform>> {
        struct Transform *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::Color, std::__1::default_delete<legacy_drawing::Color>> {
    struct __compressed_pair<legacy_drawing::Color *, std::__1::default_delete<legacy_drawing::Color>> {
        struct Color *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>;

struct unique_ptr<legacy_drawing::CommandID, std::__1::default_delete<legacy_drawing::CommandID>> {
    struct __compressed_pair<legacy_drawing::CommandID *, std::__1::default_delete<legacy_drawing::CommandID>> {
        struct CommandID *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::Parameters, std::__1::default_delete<legacy_drawing::Parameters>> {
    struct __compressed_pair<legacy_drawing::Parameters *, std::__1::default_delete<legacy_drawing::Parameters>> {
        struct Parameters *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> {
    struct __compressed_pair<legacy_drawing::Point *, std::__1::default_delete<legacy_drawing::Point>> {
        struct Point *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::Rectangle, std::__1::default_delete<legacy_drawing::Rectangle>> {
    struct __compressed_pair<legacy_drawing::Rectangle *, std::__1::default_delete<legacy_drawing::Rectangle>> {
        struct Rectangle *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::VectorTimestamp, std::__1::default_delete<legacy_drawing::VectorTimestamp>> {
    struct __compressed_pair<legacy_drawing::VectorTimestamp *, std::__1::default_delete<legacy_drawing::VectorTimestamp>> {
        struct VectorTimestamp *_field1;
    } _field1;
};

struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>;

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*>>> {
    struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*>>> {
        struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::basic_string<char>, std::__1::default_delete<std::__1::basic_string<char>>> {
    struct __compressed_pair<std::__1::basic_string<char>*, std::__1::default_delete<std::__1::basic_string<char>>> {
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field1;
    } _field1;
};

struct unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>;

struct unordered_map<unsigned long long, DKDGLFrameBufferTextureConfig *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DKDGLFrameBufferTextureConfig *>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLFrameBufferTextureConfig *>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<unsigned long long, DKDGLShader *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, DKDGLShader *>>> {
    struct __hash_table<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::hash<unsigned long long>, true>, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::equal_to<unsigned long long>, true>, std::__1::allocator<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>>> {
        struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, void *>*> __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::hash<unsigned long long>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned long long, std::__1::__hash_value_type<unsigned long long, DKDGLShader *>, std::__1::equal_to<unsigned long long>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<AnimatingStroke, std::__1::allocator<AnimatingStroke>> {
    struct AnimatingStroke *__begin_;
    struct AnimatingStroke *__end_;
    struct __compressed_pair<AnimatingStroke *, std::__1::allocator<AnimatingStroke>> {
        struct AnimatingStroke *__first_;
    } __end_cap_;
};

struct vector<PB::Data, std::__1::allocator<PB::Data>> {
    struct Data *_field1;
    struct Data *_field2;
    struct __compressed_pair<PB::Data *, std::__1::allocator<PB::Data>> {
        struct Data *_field1;
    } _field3;
};

struct vector<PKCompressedStrokePoint, std::__1::allocator<PKCompressedStrokePoint>> {
    struct PKCompressedStrokePoint *_field1;
    struct PKCompressedStrokePoint *_field2;
    struct __compressed_pair<PKCompressedStrokePoint *, std::__1::allocator<PKCompressedStrokePoint>> {
        struct PKCompressedStrokePoint *_field1;
    } _field3;
};

struct vector<PKInputPoint, std::__1::allocator<PKInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<PKInputPoint *, std::__1::allocator<PKInputPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
};

struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction>> {
    struct PKOutputFunction *__begin_;
    struct PKOutputFunction *__end_;
    struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction>> {
        struct PKOutputFunction *__first_;
    } __end_cap_;
};

struct vector<PKSmoothingPoint, std::__1::allocator<PKSmoothingPoint>> {
    struct PKSmoothingPoint *_field1;
    struct PKSmoothingPoint *_field2;
    struct __compressed_pair<PKSmoothingPoint *, std::__1::allocator<PKSmoothingPoint>> {
        struct PKSmoothingPoint *_field1;
    } _field3;
};

struct vector<_PKStrokePoint, std::__1::allocator<_PKStrokePoint>> {
    struct _PKStrokePoint *__begin_;
    struct _PKStrokePoint *__end_;
    struct __compressed_pair<_PKStrokePoint *, std::__1::allocator<_PKStrokePoint>> {
        struct _PKStrokePoint *__first_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *_field1;
    double *_field2;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *_field1;
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

struct vector<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>>> {
    struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>> *_field1;
    struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>*, std::__1::allocator<std::__1::unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>>>> {
        struct unique_ptr<drawing::Ink, std::__1::default_delete<drawing::Ink>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>, std::__1::allocator<std::__1::unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>>> {
    struct unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>> *_field1;
    struct unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>*, std::__1::allocator<std::__1::unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>>>> {
        struct unique_ptr<drawing::Stroke, std::__1::default_delete<drawing::Stroke>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>>, std::__1::allocator<std::__1::unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>>>> {
    struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> *_field1;
    struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>>*, std::__1::allocator<std::__1::unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>>>> {
        struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>>> {
    struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>> *_field1;
    struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>*, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>>>> {
        struct unique_ptr<legacy_drawing::Command, std::__1::default_delete<legacy_drawing::Command>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>>, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>>>> {
    struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> *_field1;
    struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>>*, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>>>> {
        struct unique_ptr<legacy_drawing::Point, std::__1::default_delete<legacy_drawing::Point>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>>> {
    struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>> *_field1;
    struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>*, std::__1::allocator<std::__1::unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>>>> {
        struct unique_ptr<legacy_drawing::VectorTimestampClock, std::__1::default_delete<legacy_drawing::VectorTimestampClock>> *_field1;
    } _field3;
};

struct vector<std::__1::unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>, std::__1::allocator<std::__1::unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>>> {
    struct unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>> *_field1;
    struct unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>> *_field2;
    struct __compressed_pair<std::__1::unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>*, std::__1::allocator<std::__1::unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>>>> {
        struct unique_ptr<versioned_document::Version, std::__1::default_delete<versioned_document::Version>> *_field1;
    } _field3;
};

struct vector<std::__1::vector<double, std::__1::allocator<double>>, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
    struct vector<double, std::__1::allocator<double>> *_field1;
    struct vector<double, std::__1::allocator<double>> *_field2;
    struct __compressed_pair<std::__1::vector<double, std::__1::allocator<double>>*, std::__1::allocator<std::__1::vector<double, std::__1::allocator<double>>>> {
        struct vector<double, std::__1::allocator<double>> *_field1;
    } _field3;
};

#if 0
// Names with conflicting types:
typedef struct {
    CDUnknownFunctionPointerType *_field1;
    struct unique_ptr<drawing::Rectangle, std::__1::default_delete<drawing::Rectangle>> _field2;
    struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> _field3;
    struct PtrVector<drawing::Ink> _field4;
    unsigned long long _field5;
    struct unique_ptr<drawing::StrokeID, std::__1::default_delete<drawing::StrokeID>> _field6;
    struct vector<PB::Data, std::__1::allocator<PB::Data>> _field7;
    unsigned long long _field8;
    struct PtrVector<drawing::Stroke> _field9;
    struct unique_ptr<PB::Data, std::__1::default_delete<PB::Data>> _field10;
    struct PtrVector<drawing::StrokeID> _field11;
    CDStruct_d7010776 _field12;
} Drawing_9931f320;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
} CDStruct_8a1bf2a3;

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
} CDStruct_c3b9c2ee;

typedef struct {
    float x;
    float y;
    float z;
    float w;
} CDStruct_f2e236b6;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    int arcType;
    BOOL before;
    double snapAngle;
} CDStruct_cfd08fee;

typedef struct CDStruct_183601bc;

typedef struct {
    int _field1;
    unsigned long long _field2;
    BOOL _field3;
    char *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    BOOL _field8;
    struct _NSRange _field9;
    unsigned long long _field10;
} CDStruct_c6ef71e4;

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
    union {
        struct {
            unsigned int :3;
            unsigned int :1;
            unsigned int :4;
        } _field1;
        unsigned long long _field2;
    } _field1;
} CDStruct_02b698cc;

typedef struct {
    struct _PKStrokePoint _field1;
    BOOL _field2;
    long long _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    id _field8;
} CDStruct_5237edf5;

// Template types
typedef struct PKInputProvider<_PKStrokePoint> {
    CDUnknownFunctionPointerType *_field1;
} PKInputProvider_28cf270a;

typedef struct unique_ptr<PKFunction, std::__1::default_delete<PKFunction>> {
    struct __compressed_pair<PKFunction *, std::__1::default_delete<PKFunction>> {
        struct PKFunction *_field1;
    } _field1;
} unique_ptr_61416811;

typedef struct vector<PKInputPoint, std::__1::allocator<PKInputPoint>> {
    CDStruct_183601bc *__begin_;
    CDStruct_183601bc *__end_;
    struct __compressed_pair<PKInputPoint *, std::__1::allocator<PKInputPoint>> {
        CDStruct_183601bc *__first_;
    } __end_cap_;
} vector_0f1b893d;

typedef struct vector<PKOutputFunction, std::__1::allocator<PKOutputFunction>> {
    struct PKOutputFunction *__begin_;
    struct PKOutputFunction *__end_;
    struct __compressed_pair<PKOutputFunction *, std::__1::allocator<PKOutputFunction>> {
        struct PKOutputFunction *__first_;
    } __end_cap_;
} vector_3aeccfac;

typedef struct vector<_PKStrokePoint, std::__1::allocator<_PKStrokePoint>> {
    struct _PKStrokePoint *__begin_;
    struct _PKStrokePoint *__end_;
    struct __compressed_pair<_PKStrokePoint *, std::__1::allocator<_PKStrokePoint>> {
        struct _PKStrokePoint *__first_;
    } __end_cap_;
} vector_5de2d2d9;

