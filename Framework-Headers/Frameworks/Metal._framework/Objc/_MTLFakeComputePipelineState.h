//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/_MTLComputePipelineState.h>

#import <Metal/MTLComputePipelineState-Protocol.h>

@class NSString;
@protocol MTLDevice;

__attribute__((visibility("hidden")))
@interface _MTLFakeComputePipelineState : _MTLComputePipelineState <MTLComputePipelineState>
{
    unsigned long long _maxTotalThreadsPerThreadgroup;
    unsigned long long _threadExecutionWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; // @synthesize maxTotalThreadsPerThreadgroup=_maxTotalThreadsPerThreadgroup;
@property (readonly) Class superclass;
@property (readonly) unsigned long long threadExecutionWidth; // @synthesize threadExecutionWidth=_threadExecutionWidth;


@end

