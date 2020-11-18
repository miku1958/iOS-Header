//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLRenderPipelineState-Protocol.h>

@class MTLDebugInstrumentationData, NSData;

@protocol MTLRenderPipelineStateSPI <MTLRenderPipelineState>

@property (readonly, strong, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData;
@property (nonatomic) unsigned long long resourceIndex;
@property (readonly) unsigned long long uniqueIdentifier;
@property (readonly, strong, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData;

- (NSData *)newFragmentShaderDebugInfo;
- (NSData *)newVertexShaderDebugInfo;

@optional
@end
