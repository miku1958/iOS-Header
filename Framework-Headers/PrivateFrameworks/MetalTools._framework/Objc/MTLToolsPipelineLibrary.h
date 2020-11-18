//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import <MetalTools/MTLPipelineLibrarySPI-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache;

@interface MTLToolsPipelineLibrary : MTLToolsObject <MTLPipelineLibrarySPI>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device;
@property BOOL disableRunTimeCompilation;
@property (readonly, nonatomic) id<MTLPipelineCache> functionCache;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property (readonly, nonatomic) id<MTLPipelineCache> pipelineCache;
@property (readonly) NSArray *pipelineNames;
@property (readonly) Class superclass;

- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;

@end
