//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrivateFederatedLearning/PFLResumable-Protocol.h>
#import <PrivateFederatedLearning/PFLTaskStateProvider-Protocol.h>

@class NSString, NSURL, PFLUpdateConfiguration;
@protocol MLBatchProvider, PFLTaskState;

@interface PFLPartialSession : NSObject <PFLResumable, PFLTaskStateProvider>
{
    NSURL *_modelURL;
    id<MLBatchProvider> _trainingData;
    PFLUpdateConfiguration *_configuration;
    CDUnknownBlockType _completionHandler;
    id<PFLTaskState> _currentState;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) PFLUpdateConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) id<PFLTaskState> currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<MLBatchProvider> trainingData; // @synthesize trainingData=_trainingData;

- (void).cxx_destruct;
- (id)compiledModelURL;
- (id)dataProvider;
- (id)initWithModelAtURL:(id)arg1 trainingData:(id)arg2 configuration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)layerNames;
- (id)modelConfiguration;
- (unsigned long long)privatizationNormBinCount;
- (double)privatizationNormMax;
- (void)resume;
- (void)resumeWithState:(id)arg1;
- (void)suspend;
- (double)validationSplit;

@end
