//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct OKEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct OKLocationCoordinate2D {
    double _field1;
    double _field2;
};

struct SCNVector3 {
    float x;
    float y;
    float z;
};

struct SCNVector4 {
    float x;
    float y;
    float z;
    float w;
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

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NavigatorScrollProgressContext {
    id _field1;
    id _field2;
    double _field3;
    double _field4;
    double _field5;
    struct SCNVector3 _field6;
    struct SCNVector4 _field7;
    double _field8;
    double _field9;
    BOOL _field10;
    BOOL _field11;
};

struct _OKEventElement {
    struct CGPoint _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    long long _field4;
    id _field5;
    struct _OKEventElement *_field6;
    struct _OKEventElement *_field7;
};

struct _OKEventList {
    unsigned long long _field1;
    struct _OKEventElement *_field2;
    struct _OKEventElement *_field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    double _field3;
    struct CGPoint _field4;
    struct CGSize _field5;
    float _field6;
    struct CGAffineTransform _field7;
    struct CGPoint _field8;
    struct CGSize _field9;
    double _field10;
    struct CGSize _field11;
    struct CGPoint _field12;
    BOOL _field13;
    double _field14;
} CDStruct_6c2cf6ec;

typedef struct {
    struct {
        double latitude;
        double longitude;
    } center;
    struct {
        double latitudeDelta;
        double longitudeDelta;
    } span;
} CDStruct_feeb6407;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;
