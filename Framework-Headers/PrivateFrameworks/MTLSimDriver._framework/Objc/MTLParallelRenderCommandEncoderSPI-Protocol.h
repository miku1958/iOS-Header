//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLSimDriver/MTLParallelRenderCommandEncoder-Protocol.h>

@protocol MTLRenderCommandEncoder;

@protocol MTLParallelRenderCommandEncoderSPI <MTLParallelRenderCommandEncoder>

@property BOOL separateCommits;


@optional
- (id<MTLRenderCommandEncoder>)sampledRenderCommandEncoderWithProgramInfoBuffer:(CDUnion_c6e49ed4 *)arg1 capacity:(unsigned long long)arg2;
@end

