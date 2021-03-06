//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PFMulticasterDelegate-Protocol.h>
#import <PhotoAnalysis/PFWeakContainerNilNotificationDelegate-Protocol.h>

@class NSConditionLock, NSMutableSet, PFDirectMessagingMulticaster, PFSerialQueue, PFWeakContainer, PGGraphUpdateManager, PGManager, PHAManager;
@protocol PHAGraphManagerClientMessagesMulticaster;

@interface PHAGraphManager : NSObject <PFMulticasterDelegate, PFWeakContainerNilNotificationDelegate>
{
    PFDirectMessagingMulticaster<PHAGraphManagerClientMessagesMulticaster> *_clientMulticaster;
    NSMutableSet *_clientsWantingUpdates;
    long long _updateManagerSuspendCount;
    BOOL _rebuildInProgress;
    PFSerialQueue *_serializer;
    PGManager *_graphManager;
    PFWeakContainer *_graphMonitor;
    NSConditionLock *_graphLoadedCondition;
    PGGraphUpdateManager *_updateManager;
    PHAManager *_photoAnalysisManager;
}

@property (strong, nonatomic) PHAManager *photoAnalysisManager; // @synthesize photoAnalysisManager=_photoAnalysisManager;
@property (readonly, nonatomic) PGGraphUpdateManager *updateManager; // @synthesize updateManager=_updateManager;

- (void).cxx_destruct;
- (void)_configureGraphManagerWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)_graphBecameReady:(id)arg1;
- (void)_performRebuildFullRebuild:(BOOL)arg1 withProgressBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_startListeningWithClient:(id)arg1;
- (void)_startUpdateManager;
- (void)_stopListeningWithClient:(id)arg1;
- (void)_stopUpdateManager;
- (void)dealloc;
- (BOOL)graphNeedsRebuild;
- (id)initWithManager:(id)arg1;
- (id)loadGraphWithProgressBlock:(CDUnknownBlockType)arg1;
- (void)multicasterHasNoReceivers:(id)arg1 invalidateBlock:(CDUnknownBlockType)arg2;
- (void)performFullRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performLightWeightRebuildWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)registerGraphClient:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)shutdown;
- (id)statusAsDictionary;
- (void)suspendGraphUpdateAndPerformBlock:(CDUnknownBlockType)arg1;
- (void)unloadGraph;
- (void)unregisterGraphClient:(id)arg1;
- (void)weakReferenceBecameNil:(id)arg1;

@end

