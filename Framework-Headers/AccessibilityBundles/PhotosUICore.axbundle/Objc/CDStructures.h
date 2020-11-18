//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct NSObject {
    Class _field1;
};

struct PXSimpleIndexPath {
    unsigned long long dataSourceIdentifier;
    long long section;
    long long item;
    long long subitem;
};

struct PXTileIdentifier {
    unsigned long long _field1;
    unsigned long long _field2[10];
};

