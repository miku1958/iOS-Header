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
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _ShortRect {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
};

struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>;

struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> {
    struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>> *__begin_;
    struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>> *__end_;
    struct __compressed_pair<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>*, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> {
        struct vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>> *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    BOOL _field3;
    BOOL _field4;
    unsigned long long _field5;
    int _field6;
} CDStruct_5072e809;

typedef struct {
    id _field1;
    id _field2;
    int _field3;
    id _field4;
    id _field5;
    int _field6;
} CDStruct_982099be;

