//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

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

struct NSObject {
    Class _field1;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct entryList {
    struct lruEntry *tqh_first;
    struct lruEntry **tqh_last;
};

struct lruEntry {
    id _field1;
    long long _field2;
    struct {
        struct lruEntry *_field1;
        struct lruEntry **_field2;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    BOOL _field1;
    BOOL _field2;
    BOOL _field3;
    BOOL _field4;
    BOOL _field5;
    double _field6;
    int _field7;
} CDStruct_e950349b;

typedef struct {
    long long version;
    void *info;
    CDUnknownFunctionPointerType retain;
    CDUnknownFunctionPointerType release;
    CDUnknownFunctionPointerType copyDescription;
} CDStruct_4210025a;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

// Ambiguous groups
typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

