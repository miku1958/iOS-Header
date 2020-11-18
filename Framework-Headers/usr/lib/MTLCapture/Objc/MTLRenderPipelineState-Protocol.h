//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/NSObject-Protocol.h>

@class NSString;
@protocol MTLDevice;

@protocol MTLRenderPipelineState <NSObject>

@property (readonly) id<MTLDevice> device;
@property (readonly) unsigned long long imageblockSampleLength;
@property (readonly) NSString *label;
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property (readonly) BOOL supportIndirectCommandBuffers;
@property (readonly) BOOL threadgroupSizeMatchesTileSize;

- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_14f26992)arg1;
@end
