//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLResource-Protocol.h>

@protocol MTLIndirectComputeCommand, MTLIndirectRenderCommand;

@protocol MTLIndirectCommandBuffer <MTLResource>

@property (readonly) unsigned long long size;

- (id<MTLIndirectComputeCommand>)indirectComputeCommandAtIndex:(unsigned long long)arg1;
- (id<MTLIndirectRenderCommand>)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (void)resetWithRange:(struct _NSRange)arg1;
@end
