//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
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

struct NULayoutOptions {
    unsigned long long flow;
    unsigned long long direction;
    struct UIEdgeInsets edgeInsets;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

