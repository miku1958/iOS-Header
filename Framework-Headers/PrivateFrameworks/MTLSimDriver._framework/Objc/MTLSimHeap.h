//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLHeap.h>

#import <MTLSimDriver/MTLHeap-Protocol.h>
#import <MTLSimDriver/MTLSerializerHeap-Protocol.h>

@class MTLSimDevice, NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface MTLSimHeap : _MTLHeap <MTLHeap, MTLSerializerHeap>
{
    MTLSimDevice *_device;
    unsigned int _heapRef;
    unsigned long long _purgeableState;
}

@property (readonly) unsigned long long cpuCacheMode;
@property (readonly) unsigned long long currentAllocatedSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hazardTrackingMode;
@property (readonly) unsigned int heapRef;
@property (copy) NSString *label;
@property (readonly) unsigned long long resourceOptions;
@property (readonly) unsigned int serializerResourceRef;
@property (readonly) unsigned long long size;
@property (readonly) unsigned long long storageMode;
@property (readonly) Class superclass;
@property (readonly) long long type;
@property (readonly) unsigned long long usedSize;

- (void)dealloc;
- (CDStruct_da2e99ad)getSizeInfo;
- (id)initWithDescriptor:(id)arg1 device:(id)arg2 heapRef:(unsigned int)arg3;
- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3 useOffset:(BOOL)arg4;
- (id)newTextureWithDescriptor:(id)arg1;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 useOffset:(BOOL)arg3;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;

@end
