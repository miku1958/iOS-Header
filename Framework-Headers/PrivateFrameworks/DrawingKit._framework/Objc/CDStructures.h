//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MISSING_TYPE;

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

struct CGVector {
    double _field1;
    double _field2;
};

struct Page;

struct Vertex;

struct VertexGroup;

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>;

struct vector<Page, std::__1::allocator<Page>> {
    struct Page *__begin_;
    struct Page *__end_;
    struct __compressed_pair<Page *, std::__1::allocator<Page>> {
        struct Page *__first_;
    } __end_cap_;
};

struct vector<Vertex, std::__1::allocator<Vertex>> {
    struct Vertex *__begin_;
    struct Vertex *__end_;
    struct __compressed_pair<Vertex *, std::__1::allocator<Vertex>> {
        struct Vertex *__first_;
    } __end_cap_;
};

struct vector<VertexGroup, std::__1::allocator<VertexGroup>> {
    struct VertexGroup *__begin_;
    struct VertexGroup *__end_;
    struct __compressed_pair<VertexGroup *, std::__1::allocator<VertexGroup>> {
        struct VertexGroup *__first_;
    } __end_cap_;
};

struct vector<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> {
    struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *__begin_;
    struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *__end_;
    struct __compressed_pair<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>*, std::__1::allocator<std::__1::pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))>>> {
        struct pair<float __attribute__((ext_vector_type(2))), float __attribute__((ext_vector_type(2)))> *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    MISSING_TYPE *_field1[4];
} CDStruct_f1db2b5e;

typedef struct {
    struct CGPoint _field1;
    double _field2;
    double _field3;
    double _field4;
} CDStruct_09aaf5d3;

// Template types
typedef struct vector<Vertex, std::__1::allocator<Vertex>> {
    struct Vertex *__begin_;
    struct Vertex *__end_;
    struct __compressed_pair<Vertex *, std::__1::allocator<Vertex>> {
        struct Vertex *__first_;
    } __end_cap_;
} vector_8a3ef5f6;

