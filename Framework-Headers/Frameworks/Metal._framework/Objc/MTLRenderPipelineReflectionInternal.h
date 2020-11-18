//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Metal/MTLRenderPipelineReflection.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MTLRenderPipelineReflectionInternal : MTLRenderPipelineReflection
{
    CDStruct_672a0776 _flags;
    NSArray *_vertexBuiltInArguments;
    NSArray *_vertexArguments;
    NSArray *_fragmentArguments;
    NSDictionary *_performanceStatistics;
}

- (void)dealloc;
- (id)description;
- (id)fragmentArguments;
- (id)initWithVertexData:(id)arg1 fragmentData:(id)arg2 serializedVertexDescriptor:(id)arg3 device:(id)arg4 options:(unsigned long long)arg5 flags:(CDStruct_672a0776)arg6;
- (id)performanceStatistics;
- (void)setPerformanceStatistics:(id)arg1;
- (id)vertexArguments;
- (id)vertexBuiltInArguments;

@end
