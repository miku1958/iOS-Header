//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct MPSBVH {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct MPSBVHGroup *_field3;
    struct MPSBufferRange *_field4;
    struct MPSBufferRange *_field5;
    struct MPSBufferRange *_field6;
    struct MPSBufferRange *_field7;
    struct MPSBufferRange *_field8;
    unsigned long long _field9;
    unsigned long long _field10;
    int _field11;
    unsigned int _field12;
    int _field13;
    id _field14;
    id _field15;
    struct MPSLibrary *_field16;
};

struct MPSBVHGroup {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    id _field3;
    id _field4;
    struct MPSBufferAllocator *_field5;
    struct MPSBufferAllocator *_field6;
    struct MPSBufferAllocator *_field7;
    struct MPSBufferAllocator *_field8;
    struct MPSBufferAllocator *_field9;
    struct MPSBufferAllocator *_field10;
    struct MPSBufferAllocator *_field11;
};

struct MPSBVHOptions {
    BOOL _field1;
    int _field2;
    float _field3;
    float _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    int _field11;
    unsigned int _field12;
    int _field13;
    int _field14;
};

struct MPSBufferAllocator;

struct MPSBufferRange {
    struct MPSBufferRange *_field1;
    struct MPSBufferRange *_field2;
    struct MPSBufferRange *_field3;
    struct MPSBufferRange *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    struct atomic<unsigned int> _field7;
    struct MPSBufferAllocator *_field8;
};

struct MPSDevice {
    CDUnknownFunctionPointerType *_field1;
    struct MPSDevice *_field2;
    id _field3;
    struct MPSDeviceFreeList *_field4;
    struct atomic<MTLLibraryNode *> _field5;
    struct atomic<void *> _field6[2][2][2];
    struct MPSPixelCapabilities _field7[590];
    struct atomic<void *> _field8;
    unsigned int _field9;
    int _field10;
    unsigned int _field11;
    struct MPSGPUInfo _field12;
    struct MPSGPUInfoPerfStats _field13;
    struct atomic<MPSLibrary *> _field14[123];
};

struct MPSDeviceFreeList;

struct MPSDeviceSpecificInfo {
    struct MPSKernelInfo *_field1;
    CDUnknownFunctionPointerType _field2;
    unsigned long long _field3;
};

struct MPSGPUInfo {
    unsigned int :8;
    unsigned int :8;
    unsigned int :8;
    unsigned int :16;
    unsigned int :4;
    unsigned int :10;
    unsigned int :10;
};

struct MPSGPUInfoPerfStats {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
    unsigned short _field4;
    unsigned short _field5;
    unsigned short _field6;
};

struct MPSInstanceBVH {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct MPSBVHGroup *_field3;
    struct MPSBufferRange *_field4;
    struct MPSBufferRange *_field5;
    struct MPSBufferRange *_field6;
    struct MPSBufferRange *_field7;
    struct MPSBufferRange *_field8;
    unsigned long long _field9;
    unsigned long long _field10;
    int _field11;
    unsigned int _field12;
    int _field13;
    id _field14;
    id _field15;
    struct MPSLibrary *_field16;
    id _field17;
};

struct MPSKernelInfo;

struct MPSLibrary;

struct MPSLibraryInfo {
    int _field1;
    unsigned int _field2;
    char *_field3;
    CDUnknownFunctionPointerType _field4;
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
    struct MPSDeviceSpecificInfo _field22;
    struct MPSDeviceSpecificInfo _field23;
    struct MPSDeviceSpecificInfo _field24;
    struct MPSDeviceSpecificInfo _field25;
    struct MPSDeviceSpecificInfo _field26;
    struct MPSDeviceSpecificInfo _field27;
    struct MPSDeviceSpecificInfo _field28;
    struct MPSDeviceSpecificInfo _field29;
    struct MPSDeviceSpecificInfo _field30;
    struct MPSDeviceSpecificInfo _field31;
    struct MPSDeviceSpecificInfo _field32;
};

struct MPSPixelCapabilities {
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :8;
};

struct MPSPrimitiveBVH {
    CDUnknownFunctionPointerType *_field1;
    struct atomic<unsigned int> _field2;
    struct MPSBVHGroup *_field3;
    struct MPSBufferRange *_field4;
    struct MPSBufferRange *_field5;
    struct MPSBufferRange *_field6;
    struct MPSBufferRange *_field7;
    struct MPSBufferRange *_field8;
    unsigned long long _field9;
    unsigned long long _field10;
    int _field11;
    unsigned int _field12;
    int _field13;
    id _field14;
    id _field15;
    struct MPSLibrary *_field16;
    struct MPSBufferRange *_field17;
    unsigned int _field18;
};

struct MPSRayIntersectorFunctionHash {
    union {
        struct {
            unsigned int :2;
            unsigned int :2;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :2;
            unsigned int :1;
            unsigned int :2;
            unsigned int :1;
            unsigned int :2;
            unsigned int :3;
            unsigned int :2;
            unsigned int :8;
            unsigned int :1;
            unsigned int :6;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :2;
            unsigned int :1;
            unsigned int :1;
            unsigned int :4;
            unsigned int :17;
        } _field1;
        unsigned long long _field2;
    } _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
};

struct MPSSVGFFunctionHash {
    union {
        struct {
            unsigned int :2;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :2;
            unsigned int :2;
            unsigned int :55;
        } _field1;
        unsigned long long _field2;
    } _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
};

struct MPSSVGFParams {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    unsigned int _field6;
    float _field7;
    float _field8;
    float _field9;
};

struct MPSTemporalAAFunctionHash {
    union {
        struct {
            unsigned int :1;
            unsigned int :1;
            unsigned int :1;
            unsigned int :61;
        } _field1;
        unsigned long long _field2;
    } _field1;
};

struct MPSTemporalAAParams {
    float _field1;
};

struct MTLLibraryNode;

struct atomic<MPSLibrary *> {
    struct __cxx_atomic_impl<MPSLibrary *, std::__1::__cxx_atomic_base_impl<MPSLibrary *>> {
        _Atomic struct MPSLibrary *_field1;
    } _field1;
};

struct atomic<MTLLibraryNode *> {
    struct __cxx_atomic_impl<MTLLibraryNode *, std::__1::__cxx_atomic_base_impl<MTLLibraryNode *>> {
        _Atomic struct MTLLibraryNode *_field1;
    } _field1;
};

struct atomic<unsigned int> {
    struct __cxx_atomic_impl<unsigned int, std::__1::__cxx_atomic_base_impl<unsigned int>> {
        _Atomic unsigned int _field1;
    } _field1;
};

struct atomic<void *> {
    struct __cxx_atomic_impl<void *, std::__1::__cxx_atomic_base_impl<void *>> {
        _Atomic void *_field1;
    } _field1;
};

