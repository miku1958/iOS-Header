//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@protocol TSCH3DRenderBufferAllocator <NSObject>

@property (readonly, nonatomic) BOOL isTexturable;

- (id)colorbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;
- (id)depthbufferWithAllocatorInfo:(const struct RenderbufferAllocatorInfo *)arg1;
@end
