//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSGraph, NSArray, NSDictionary;

@interface MPSGraphExecutable : NSObject
{
    MPSGraph *_graph;
    struct MLIRContext _context;
    struct OpBuilder *_builder;
    struct ModuleOp _module;
    struct MPSSymbolTable *_symbolTable;
    unsigned long long _compilerOptions;
    map_b1b11e52 _tensorToExecutableValueMap;
    struct map<MPSGraphTensor *, mlir::Operation *, std::__1::less<MPSGraphTensor *>, std::__1::allocator<std::__1::pair<MPSGraphTensor *const, mlir::Operation *>>> _targetTensorToOutputOpMap;
    struct map<void *, MPSGraphTensor *, std::__1::less<void *>, std::__1::allocator<std::__1::pair<void *const, MPSGraphTensor *>>> _targettedOptimizedExecutableValue;
    struct unordered_map<unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime>>, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, std::__1::unique_ptr<GPURuntime, std::__1::default_delete<GPURuntime>>>>> _runtimeCache;
    struct _opaque_pthread_mutex_t _executableMutex;
    NSArray *_targetTensors;
    NSArray *_targetOperations;
    BOOL _initializedWithModule;
    NSDictionary *_feeds;
}

@property (readonly, nonatomic) NSDictionary *feeds; // @synthesize feeds=_feeds;
@property (readonly) BOOL initializedWithModule; // @synthesize initializedWithModule=_initializedWithModule;
@property (readonly, nonatomic) NSArray *targetOperations; // @synthesize targetOperations=_targetOperations;
@property (readonly, nonatomic) NSArray *targetTensors; // @synthesize targetTensors=_targetTensors;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (void)dump;
- (id)getCompiledShapesForTargetTensors;
- (id)initWithGraph:(id)arg1 feeds:(id)arg2 module:(struct ModuleOp)arg3 targetTensors:(id)arg4;
- (id)initWithGraph:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4;
- (BOOL)isExecutableForFeeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3;
- (void)optimizationPasses;
- (void)recurseFeeds:(id)arg1 targetTensors:(id)arg2 targetOperations:(id)arg3;
- (void)recurseOperation:(id)arg1 operationsRecursed:(id)arg2;
- (id)runInternalWithMPSCommandBuffer:(id)arg1 feeds:(id)arg2 targetTensors:(id)arg3 targetOperations:(id)arg4 resultsDictionary:(id)arg5 executionDescriptor:(id)arg6 finish:(BOOL)arg7;

@end
