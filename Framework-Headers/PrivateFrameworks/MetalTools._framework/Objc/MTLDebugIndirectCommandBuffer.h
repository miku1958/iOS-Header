//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsIndirectCommandBuffer.h>

#import <MetalTools/MTLDebugResourcePurgeable-Protocol.h>

@class MTLIndirectCommandBufferDescriptor, NSMutableArray;
@protocol MTLIndirectCommandBuffer;

@interface MTLDebugIndirectCommandBuffer : MTLToolsIndirectCommandBuffer <MTLDebugResourcePurgeable>
{
    NSMutableArray *_optimizedRangeList;
    MTLIndirectCommandBufferDescriptor *_desc;
    unsigned long long _maxCommandCount;
    id<MTLIndirectCommandBuffer> _iCB;
    BOOL _isRender;
    struct atomic<int> _purgeableStateToken;
    BOOL _purgeableStateHasBeenSet;
}

@property (readonly) MTLIndirectCommandBufferDescriptor *descriptor;
@property (readonly) NSMutableArray *optimizedRangeList;

- (void)dealloc;
- (id)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (id)initWithIndirectCommandBuffer:(id)arg1 device:(id)arg2 descriptor:(id)arg3 maxCommandCount:(unsigned long long)arg4 options:(unsigned long long)arg5;
- (void)lockPurgeableState;
- (BOOL)purgeableStateValidForRendering;
- (void)resetWithRange:(struct _NSRange)arg1;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (void)unlockPurgeableState;

@end
