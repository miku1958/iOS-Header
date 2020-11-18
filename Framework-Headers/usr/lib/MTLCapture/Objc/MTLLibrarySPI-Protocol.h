//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MTLCapture/MTLLibrary-Protocol.h>

@class MTLFunctionConstantValues, NSArray, NSString;
@protocol MTLFunction, MTLPipelineLibrary;

@protocol MTLLibrarySPI <MTLLibrary>

@property (readonly) NSArray *externFunctionNames;
@property (copy) NSString *overrideTriple;

- (id<MTLFunction>)newExternFunctionWithName:(NSString *)arg1;
- (void)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id<MTLPipelineLibrary>)arg3 completionHandler:(void (^)(id<MTLFunction>, NSError *))arg4;
- (id<MTLFunction>)newFunctionWithName:(NSString *)arg1 constantValues:(MTLFunctionConstantValues *)arg2 pipelineLibrary:(id<MTLPipelineLibrary>)arg3 error:(id *)arg4;
@end
