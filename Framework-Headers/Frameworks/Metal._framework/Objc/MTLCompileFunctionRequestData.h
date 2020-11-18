//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MTLFunction, NSArray, NSDictionary;
@protocol MTLBinaryArchive, MTLPipelineCache, OS_dispatch_data;

@interface MTLCompileFunctionRequestData : NSObject
{
    BOOL _sync;
    MTLFunction *_function;
    unsigned long long _pipelineOptions;
    NSObject<OS_dispatch_data> *_frameworkData;
    NSObject<OS_dispatch_data> *_driverKeyData;
    id<MTLPipelineCache> _pipelineCache;
    id<MTLBinaryArchive> _destinationBinaryArchive;
    NSArray *_binaryArchives;
    NSArray *_visibleFunctions;
    NSArray *_privateVisibleFunctions;
    NSDictionary *_visibleFunctionGroups;
}

@property (copy, nonatomic) NSArray *binaryArchives; // @synthesize binaryArchives=_binaryArchives;
@property (strong, nonatomic) id<MTLBinaryArchive> destinationBinaryArchive; // @synthesize destinationBinaryArchive=_destinationBinaryArchive;
@property (nonatomic) NSObject<OS_dispatch_data> *driverKeyData;
@property (nonatomic) NSObject<OS_dispatch_data> *frameworkData;
@property (strong, nonatomic) MTLFunction *function; // @synthesize function=_function;
@property (strong, nonatomic) id<MTLPipelineCache> pipelineCache; // @synthesize pipelineCache=_pipelineCache;
@property (nonatomic) unsigned long long pipelineOptions; // @synthesize pipelineOptions=_pipelineOptions;
@property (copy, nonatomic) NSArray *privateVisibleFunctions; // @synthesize privateVisibleFunctions=_privateVisibleFunctions;
@property (nonatomic) BOOL sync; // @synthesize sync=_sync;
@property (copy, nonatomic) NSDictionary *visibleFunctionGroups; // @synthesize visibleFunctionGroups=_visibleFunctionGroups;
@property (copy, nonatomic) NSArray *visibleFunctions; // @synthesize visibleFunctions=_visibleFunctions;

- (void)dealloc;

@end
