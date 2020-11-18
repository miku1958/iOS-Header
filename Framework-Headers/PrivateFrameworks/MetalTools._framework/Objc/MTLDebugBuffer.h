//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsBuffer.h>

#import <MetalTools/MTLDebugResourcePurgeable-Protocol.h>

@class MTLDebugDevice, MTLDebugResource, NSMutableArray;

@interface MTLDebugBuffer : MTLToolsBuffer <MTLDebugResourcePurgeable>
{
    MTLDebugResource *_common;
    unsigned long long _length;
    MTLDebugDevice *_debugDevice;
    NSMutableArray *_debugMarkers;
    struct atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
    BOOL _isContentExposedToCPU;
    const void *_pointer;
}

@property (readonly, nonatomic) MTLDebugResource *common; // @synthesize common=_common;
@property (nonatomic) BOOL isContentExposedToCPU; // @synthesize isContentExposedToCPU=_isContentExposedToCPU;
@property (readonly, nonatomic) const void *pointer; // @synthesize pointer=_pointer;

- (void)addDebugMarker:(id)arg1 range:(struct _NSRange)arg2;
- (void *)contents;
- (id)copyDebugMarkers;
- (void)dealloc;
- (id)description;
- (void)didModifyRange:(struct _NSRange)arg1;
- (BOOL)doesAliasAllResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasAnyResources:(const id *)arg1 count:(unsigned long long)arg2;
- (BOOL)doesAliasResource:(id)arg1;
- (unsigned long long)gpuAddress;
- (id)heap;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 bytes:(const void *)arg3 options:(unsigned long long)arg4;
- (id)initWithBuffer:(id)arg1 device:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithBuffer:(id)arg1 heap:(id)arg2 device:(id)arg3 options:(unsigned long long)arg4;
- (unsigned long long)length;
- (void)lockPurgeableState;
- (void)makeAliasable;
- (id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (BOOL)purgeableStateValidForRendering;
- (void)removeAllDebugMarkers;
- (unsigned long long)resourceIndex;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;

@end
