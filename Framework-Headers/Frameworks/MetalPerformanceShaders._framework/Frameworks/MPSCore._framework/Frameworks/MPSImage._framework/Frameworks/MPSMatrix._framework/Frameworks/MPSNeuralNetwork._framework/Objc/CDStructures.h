//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MPSNNGraph, NSData, NSNull, NSObject;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct FilterGraphNode {
    CDUnknownFunctionPointerType *_field1;
    struct ResourceGraphNode *_field2;
    struct ResourceGraphNode *_field3;
    struct FilterGraphNode *_field4;
    struct NodeList<ResourceGraphNode *> _field5;
    struct NodeList<ResourceGraphNode *> _field6;
    struct NodeList<ResourceGraphNode *> _field7;
    union {
        id _field1;
        id _field2;
        id _field3;
        id _field4;
    } _field8;
    id _field9;
    unsigned long long _field10;
    BOOL _field11;
    BOOL _field12;
    unsigned int _field13;
    unsigned long long _field14;
};

struct Graph {
    struct NodeList<ResourceGraphNode *> _graphSourceImages;
    struct NodeList<ResourceGraphNode *> _graphSourceStates;
    struct ResourceGraphNode *_graphResultImage;
    struct NodeList<ResourceGraphNode *> _graphIntermediateImages;
    struct NodeList<ResourceGraphNode *> _graphResultStates;
    MPSNNGraph *_graph;
    struct NodeList<FilterGraphNode *> _filters;
    struct NodeList<ResourceGraphNode *> _images;
    struct NodeList<ResourceGraphNode *> _states;
    NSObject *_cpuUpdateSem;
    NSNull *_graphNull;
};

struct MPSAutoBuffer {
    struct atomic<void *> _field1;
    unsigned long long _field2;
    id _field3;
    id _field4;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
    } _field5;
};

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSImageInfo {
    id _field1;
    struct MPSPixelInfo *_field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    id _field6;
    unsigned long long _field7;
};

struct MPSKernelInfo;

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    struct MPSDeviceSpecificInfo _field4;
    struct MPSDeviceSpecificInfo _field5;
    struct MPSDeviceSpecificInfo _field6;
    struct MPSDeviceSpecificInfo _field7;
    struct MPSDeviceSpecificInfo _field8;
    struct MPSDeviceSpecificInfo _field9;
    struct MPSDeviceSpecificInfo _field10;
    struct MPSDeviceSpecificInfo _field11;
    struct MPSDeviceSpecificInfo _field12;
    struct MPSDeviceSpecificInfo _field13;
    struct MPSDeviceSpecificInfo _field14;
    struct MPSDeviceSpecificInfo _field15;
    struct MPSDeviceSpecificInfo _field16;
    struct MPSDeviceSpecificInfo _field17;
    struct MPSDeviceSpecificInfo _field18;
    struct MPSDeviceSpecificInfo _field19;
    struct MPSDeviceSpecificInfo _field20;
    struct MPSDeviceSpecificInfo _field21;
};

struct MPSOrigin {
    double _field1;
    double _field2;
    double _field3;
};

struct MPSPixelInfo;

struct MPSRegion {
    struct MPSOrigin _field1;
    struct MPSSize _field2;
};

struct MPSSize {
    double _field1;
    double _field2;
    double _field3;
};

struct MPSSliceInfo {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct MPSStateInfo {
    id _field1;
};

struct NSArray {
    Class _field1;
};

struct NeuronInfo {
    int type;
    float a;
    float b;
    float c;
    NSData *aData;
};

struct NodeList<FilterGraphNode *> {
    struct FilterGraphNode **_items;
    unsigned long long _count;
    unsigned long long _storageSize;
};

struct NodeList<ResourceGraphNode *> {
    struct ResourceGraphNode **_items;
    unsigned long long _count;
    unsigned long long _storageSize;
};

struct ResourceGraphNode {
    id _field1;
    struct NodeList<FilterGraphNode *> _field2;
    struct FilterGraphNode *_field3;
    struct ResourceGraphNode *_field4;
    id _field5;
    id _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    BOOL _field9;
    BOOL _field10;
    BOOL _field11;
    BOOL _field12;
    unsigned long long _field13;
    unsigned long long _field14;
};

struct _opaque_pthread_mutex_t {
    long long __sig;
    char __opaque[56];
};

struct atomic<long> {
    _Atomic long long __a_;
};

struct atomic<void *> {
    _Atomic void *_field1;
};

struct mersenne_twister_engine<unsigned int, 32, 624, 397, 31, 2567483615, 11, 4294967295, 7, 2636928640, 15, 4022730752, 18, 1812433253> {
    unsigned int __x_[624];
    unsigned long long __i_;
};

struct mutex {
    struct _opaque_pthread_mutex_t __m_;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long x;
    long long y;
    long long z;
} CDStruct_d6af7fc0;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    CDStruct_d6af7fc0 _field3;
    unsigned long long _field4;
} CDStruct_15cf940b;

typedef struct {
    struct {
        unsigned long long x;
        unsigned long long y;
        unsigned long long z;
    } origin;
    CDStruct_da2e99ad size;
} CDStruct_1e3be3a8;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDStruct_1e3be3a8 _field4;
} CDStruct_3d604284;

typedef struct {
    struct MPSImageInfo _field1;
    struct MPSImageInfo _field2;
    struct MPSStateInfo _field3;
    struct MPSImageInfo _field4;
    CDStruct_1e3be3a8 _field5;
    CDStruct_d6af7fc0 _field6;
    CDStruct_d6af7fc0 _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    unsigned long long _field10;
} CDStruct_12447b95;

typedef struct {
    struct MPSImageInfo _field1;
    struct MPSStateInfo _field2;
    struct MPSImageInfo _field3;
    CDStruct_1e3be3a8 _field4;
    CDStruct_d6af7fc0 _field5;
    unsigned long long _field6;
    unsigned long long _field7;
} CDStruct_53a8ffcf;

// Ambiguous groups
typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long width;
    unsigned long long height;
    unsigned long long depth;
} CDStruct_da2e99ad;

