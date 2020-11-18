//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLLibrarySPI-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol MTLDevice;

@interface _MTLLibrary : NSObject <MTLLibrarySPI>
{
    NSString *_label;
    id<MTLDevice> _device;
    NSArray *_functionNames;
    NSArray *_externFunctionNames;
    struct MTLLibraryData *_libraryData;
    NSMutableDictionary *_functionDictionary;
    struct MTLLibraryContainer *_cacheEntry;
    struct MTLPipelineCollection *_pipelineCollection;
}

@property (readonly) struct MTLLibraryContainer *cacheEntry; // @synthesize cacheEntry=_cacheEntry;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) id<MTLDevice> device; // @synthesize device=_device;
@property (readonly, strong) NSArray *externFunctionNames; // @synthesize externFunctionNames=_externFunctionNames;
@property (readonly, strong, nonatomic) NSMutableDictionary *functionDictionary; // @synthesize functionDictionary=_functionDictionary;
@property (readonly, strong) NSArray *functionNames; // @synthesize functionNames=_functionNames;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label; // @synthesize label=_label;
@property (readonly) struct MTLLibraryData *libraryData; // @synthesize libraryData=_libraryData;
@property (copy) NSString *overrideTriple; // @dynamic overrideTriple;
@property struct MTLPipelineCollection *pipelineCollection; // @synthesize pipelineCollection=_pipelineCollection;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithLibraryContainer:(struct MTLLibraryContainer *)arg1 device:(id)arg2;
- (id)newExternFunctionWithName:(id)arg1;
- (id)newFunctionWithName:(id)arg1;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 error:(id *)arg3;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 functionCache:(id)arg3 error:(id *)arg4;
- (void)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)newFunctionWithName:(id)arg1 constantValues:(id)arg2 pipelineLibrary:(id)arg3 error:(id *)arg4;
- (id)newFunctionWithNameInternal:(id)arg1;

@end

