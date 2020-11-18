//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Metal/MTLPipelineLibrarySPI-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice, MTLPipelineCache;

__attribute__((visibility("hidden")))
@interface _MTLPipelineLibrary : NSObject <MTLPipelineLibrarySPI>
{
    struct PipelineLibraryData *_pipelineLibraryData;
    NSString *_label;
    id<MTLDevice> _device;
    NSArray *_pipelineNames;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly, nonatomic) id<MTLPipelineCache> functionCache; // @dynamic functionCache;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) id<MTLPipelineCache> pipelineCache; // @dynamic pipelineCache;
@property (readonly) NSArray *pipelineNames; // @synthesize pipelineNames=_pipelineNames;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithDevice:(id)arg1 pipelineLibraryData:(struct PipelineLibraryData *)arg2;
- (id)newComputePipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;
- (id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id *)arg2;
- (id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;

@end

