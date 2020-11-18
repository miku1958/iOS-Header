//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

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

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
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

struct UIImageView {
    Class _field1;
};

struct UIView {
    Class _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *columns[4];
} CDStruct_14d5dc5e;

typedef struct {
    float position__velocity__radius;
    float scale;
    float scaleTarget;
    float created;
    CDStruct_14d5dc5e color__matrix;
} CDStruct_5cb32230;

typedef struct {
    double startTime;
    unsigned long long bucketCount;
    double *magnitudeForBucket;
    void *colorForBucket;
    struct {
        CDStruct_14d5dc5e projectionMatrix;
        CDStruct_14d5dc5e motionMatrix;
        MISSING_TYPE *data;
    } uniforms;
    CDStruct_5cb32230 singleCircle;
    unsigned long long circleCount;
    CDStruct_5cb32230 circles[88];
    unsigned long long categoryCount;
    unsigned int gravity__framesToRender;
    BOOL isAnimating;
} CDStruct_f50b3c6f;

typedef struct {
    double _field1;
    unsigned long long _field2;
    double *_field3;
    struct {
        CDStruct_14d5dc5e _field1;
        CDStruct_14d5dc5e _field2;
    } *_field4;
    CDStruct_5cb32230 _field5;
    unsigned long long _field6;
    CDStruct_5cb32230 _field7[88];
    unsigned long long _field8;
    unsigned int _field9;
    BOOL _field10;
} CDStruct_2418b6b9;

