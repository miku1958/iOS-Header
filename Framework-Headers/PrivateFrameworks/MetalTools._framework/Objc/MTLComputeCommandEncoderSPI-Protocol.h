//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLComputeCommandEncoder-Protocol.h>

@class NSData;
@protocol MTLBuffer;

@protocol MTLComputeCommandEncoderSPI <MTLComputeCommandEncoder>
- (NSData *)newKernelDebugInfo;

@optional
- (void)dispatchThreadsWithIndirectBuffer:(id<MTLBuffer>)arg1 indirectBufferOffset:(unsigned long long)arg2;
@end
