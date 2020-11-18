//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VFX/NSObject-Protocol.h>

@class MTLTextureDescriptor, NSString;
@protocol MTLBuffer, MTLDevice, MTLTexture;

@protocol MTLHeap <NSObject>

@property (nonatomic, readonly) unsigned long long cpuCacheMode;
@property (nonatomic, readonly) long long currentAllocatedSize;
@property (nonatomic, readonly) id<MTLDevice> device;
@property (nonatomic, readonly) unsigned long long hazardTrackingMode;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) unsigned long long resourceOptions;
@property (nonatomic, readonly) long long size;
@property (nonatomic, readonly) unsigned long long storageMode;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long usedSize;

- (unsigned long long)maxAvailableSizeWithAlignment:(unsigned long long)arg1;
- (id<MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (id<MTLBuffer>)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (id<MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1;
- (id<MTLTexture>)newTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
@end
