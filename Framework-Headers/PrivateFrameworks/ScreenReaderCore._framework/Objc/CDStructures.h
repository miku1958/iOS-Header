//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

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

struct SCRCFingerState {
    unsigned long long identifier;
    int xDirection;
    int yDirection;
    struct SCRCMathAverageValue velocity;
    struct SCRCMathAverageValue slopeRise;
    struct SCRCMathAverageValue slopeRun;
    struct SCRCMathAverageValue distance;
    double velocityDistance;
    BOOL dragStalled;
    struct CGPoint startPoint;
    struct CGPoint lastPoint;
    struct CGPoint lastDownPoint;
    double orbValue;
};

struct SCRCMathAverageValue {
    unsigned int samples;
    double fifo[50];
    int fifoIndex;
    double sum;
    double average;
    double current;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _SCRCStackNode {
    id _field1;
    void *_field2;
    void *_field3;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

