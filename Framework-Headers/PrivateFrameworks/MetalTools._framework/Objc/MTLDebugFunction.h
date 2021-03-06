//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLToolsFunction.h>

@class MTLFunctionConstantValues;

@interface MTLDebugFunction : MTLToolsFunction
{
    MTLFunctionConstantValues *_constantValues;
}

@property (strong, nonatomic) MTLFunctionConstantValues *constantValues; // @synthesize constantValues=_constantValues;

+ (id)newFunctionWithBaseObject:(id)arg1 parent:(id)arg2;
- (id)bitcodeData;
- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id *)arg2 pipelineLibrary:(id)arg3;
- (id)precompiledOutput;

@end

