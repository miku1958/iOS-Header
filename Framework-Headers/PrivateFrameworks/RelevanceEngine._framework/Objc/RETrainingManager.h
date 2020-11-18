//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceEngineSubsystem.h>

#import <RelevanceEngine/RERemoteTrainingClientListenerDelegate-Protocol.h>
#import <RelevanceEngine/RETrainingManagerProperties-Protocol.h>

@class NSMutableArray, NSMutableSet, NSObject, RELiveElementCoordinator, REMLModelManager, RERemoteTrainingClientListener, RETrainingContext, RETrainingScheduler;
@protocol OS_dispatch_queue;

@interface RETrainingManager : RERelevanceEngineSubsystem <RERemoteTrainingClientListenerDelegate, RETrainingManagerProperties>
{
    RELiveElementCoordinator *_coordinator;
    REMLModelManager *_modelManager;
    RETrainingScheduler *_trainingScheduler;
    NSMutableSet *_trainingContexts;
    NSObject<OS_dispatch_queue> *_queue;
    RERemoteTrainingClientListener *_remoteTrainingListener;
    NSMutableArray *_trainingFeatureMaps;
    NSMutableArray *_trainingContents;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_interactionTypes;
    RETrainingContext *_currentTrainingContext;
}

@property (strong) RETrainingContext *currentTrainingContext; // @synthesize currentTrainingContext=_currentTrainingContext;
@property (readonly, nonatomic) NSMutableArray *trainingEvents;
@property (readonly, nonatomic) RETrainingScheduler *trainingScheduler;

- (void).cxx_destruct;
- (void)_performTraining:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performTrainingForPredictionElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)_queue_trainElementWithIdentifier:(id)arg1 relevanceProviders:(id)arg2 featureMap:(id)arg3 isPositiveEvent:(BOOL)arg4 interaction:(id)arg5 context:(id)arg6;
- (void)addTrainingContext:(id)arg1;
- (void)dealloc;
- (void)flushTraining;
- (id)initWithRelevanceEngine:(id)arg1;
- (void)makeContextCurrent:(id)arg1;
- (void)manuallyPerformTrainingWithCompletion:(CDUnknownBlockType)arg1;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3;
- (void)performTrainingForElement:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3;
- (void)performTrainingForElementWithIdentifier:(id)arg1 isPositiveEvent:(BOOL)arg2 interaction:(id)arg3 context:(id)arg4;
- (void)remoteTrainingClientListenerDidConnectContext:(id)arg1;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)arg1;
- (void)removeTrainingContext:(id)arg1;

@end
