//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreML/MLPipeline.h>

#import <CoreML/MLUpdatable-Protocol.h>

@class MLUpdateProgressHandlers, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MLPipelineUpdateEngine : MLPipeline <MLUpdatable>
{
    MLUpdateProgressHandlers *_progressHandlers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    vector_7984f87c _updatableModelIndicies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (strong) MLUpdateProgressHandlers *progressHandlers; // @synthesize progressHandlers=_progressHandlers;
@property (readonly) Class superclass;
@property (readonly) vector_7984f87c updatableModelIndicies; // @synthesize updatableModelIndicies=_updatableModelIndicies;

+ (id)loadModelFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancelUpdate;
- (id)initFromCompiledArchive:(struct _MLModelInputArchiver *)arg1 modelVersionInfo:(id)arg2 compilerVersionInfo:(id)arg3 configuration:(id)arg4 error:(id *)arg5;
- (id)parameterValueForKey:(id)arg1 error:(id *)arg2;
- (void)resumeUpdate;
- (void)resumeUpdateWithParameters:(id)arg1;
- (void)setUpdateProgressHandlers:(id)arg1 dispatchQueue:(id)arg2;
- (void)updateModelWithData:(id)arg1;
- (BOOL)writeToURL:(id)arg1 error:(id *)arg2;

@end
