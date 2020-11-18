//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstallCoordination/IXCoordinatorWithPlaceholderPromise-Protocol.h>

@class IXAppInstallCoordinatorSeed, NSArray, NSError, NSString, NSUUID;
@protocol IXAppInstallCoordinatorObserver, OS_dispatch_queue;

@interface IXAppInstallCoordinator : NSObject <IXCoordinatorWithPlaceholderPromise>
{
    BOOL _complete;
    id<IXAppInstallCoordinatorObserver> _observer;
    IXAppInstallCoordinatorSeed *_seed;
    NSObject<OS_dispatch_queue> *_observerCalloutQueue;
    unsigned long long _observersCalled;
    NSError *_error;
    unsigned long long _errorSourceIdentifier;
}

@property (readonly, copy, nonatomic) NSString *bundleID; // @dynamic bundleID;
@property (nonatomic, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (readonly, nonatomic) unsigned long long coordinationState;
@property (readonly, nonatomic) unsigned long long creatorIdentifier; // @dynamic creatorIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) unsigned long long errorSourceIdentifier; // @synthesize errorSourceIdentifier=_errorSourceIdentifier;
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasAutoEnabledExtensionTypes;
@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasPlaceholderPromise;
@property (readonly, nonatomic) BOOL hasUserDataPromise;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *localDescription;
@property (weak, nonatomic) id<IXAppInstallCoordinatorObserver> observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerCalloutQueue; // @synthesize observerCalloutQueue=_observerCalloutQueue;
@property (nonatomic) unsigned long long observersCalled; // @synthesize observersCalled=_observersCalled;
@property (readonly, nonatomic) IXAppInstallCoordinatorSeed *seed; // @synthesize seed=_seed;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @dynamic uniqueIdentifier;
@property (nonatomic, getter=isUserInitiated) BOOL userInitiated;
@property (readonly, copy, nonatomic) NSArray *validInstallTypes; // @dynamic validInstallTypes;

+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_beginInstallForURL:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)_coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 intent:(unsigned long long)arg3 createIfNotExisting:(BOOL)arg4 created:(BOOL *)arg5 error:(id *)arg6;
+ (BOOL)_synchronouslyEnumerateCoordinatorsForIntent:(unsigned long long)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (void)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)cancelCoordinatorForAppWithBundleID:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;
+ (void)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (BOOL)cancelCoordinatorsForAppsWithBundleIDs:(id)arg1 withReason:(id)arg2 client:(unsigned long long)arg3 error:(id *)arg4;
+ (Class)classForIntent:(unsigned long long)arg1;
+ (BOOL)coordinationIsEnabled;
+ (id)coordinatorForAppWithBundleID:(id)arg1 withClientID:(unsigned long long)arg2 createIfNotExisting:(BOOL)arg3 created:(BOOL *)arg4 error:(id *)arg5;
+ (BOOL)demoteAppToPlaceholderWithBundleID:(id)arg1 forReason:(unsigned long long)arg2 error:(id *)arg3;
+ (void)enumerateCoordinatorsUsingBlock:(CDUnknownBlockType)arg1;
+ (BOOL)enumerateCoordinatorsWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
+ (BOOL)enumerateCoordinatorsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)installApplication:(id)arg1 consumeSource:(BOOL)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)installApplication:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)killDaemonForTesting;
+ (void)pauseCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)pauseCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)prioritizeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)prioritizeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (BOOL)purgeAllCoordinatorsAndPromisesForCreator:(unsigned long long)arg1;
+ (void)removabilityForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)resumeCoordinatorForAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (BOOL)resumeCoordinatorForAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)setRemovability:(unsigned long long)arg1 forAppWithBundleID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (BOOL)setTestModeForBundleWithPrefix:(id)arg1 testMode:(unsigned long long)arg2;
+ (BOOL)setTestingEnabled:(BOOL)arg1;
+ (BOOL)uninstallAppWithBundleID:(id)arg1 error:(id *)arg2;
+ (void)uninstallAppWithBundleID:(id)arg1 requestUserConfirmation:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (oneway void)_clientDelegate_didCancelWithError:(id)arg1 client:(unsigned long long)arg2;
- (oneway void)_clientDelegate_didComplete;
- (oneway void)_clientDelegate_placeholderDidInstall;
- (oneway void)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:(unsigned long long)arg1;
- (oneway void)_clientDelegate_shouldBeginRestoringUserData;
- (oneway void)_clientDelegate_shouldPause;
- (oneway void)_clientDelegate_shouldPrioritize;
- (oneway void)_clientDelegate_shouldResume;
- (void)_updateInitWithSeed:(id)arg1 notifyDaemon:(BOOL)arg2;
- (BOOL)appAssetPromiseHasBegunFulfillment:(BOOL *)arg1 error:(id *)arg2;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:(id *)arg1;
- (id)appAssetPromiseWithError:(id *)arg1;
- (void)cancelForReason:(id)arg1;
- (BOOL)cancelForReason:(id)arg1 client:(unsigned long long)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithBundleID:(id)arg1 creator:(unsigned long long)arg2 intent:(unsigned long long)arg3;
- (id)initWithSeed:(id)arg1;
- (id)initialODRAssetPromisesWithError:(id *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPaused:(BOOL *)arg1 withError:(id *)arg2;
- (BOOL)pauseWithError:(id *)arg1;
- (id)placeholderPromiseWithError:(id *)arg1;
- (id)preparationPromiseWithError:(id *)arg1;
- (BOOL)prioritizeWithError:(id *)arg1;
- (BOOL)resumeWithError:(id *)arg1;
- (BOOL)setAppAssetPromise:(id)arg1 error:(id *)arg2;
- (BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)setAutoEnabledExtensionTypes:(id)arg1 error:(id *)arg2;
- (BOOL)setInitialODRAssetPromises:(id)arg1 error:(id *)arg2;
- (BOOL)setInstallOptions:(id)arg1 error:(id *)arg2;
- (BOOL)setPlaceholderPromise:(id)arg1 error:(id *)arg2;
- (BOOL)setPreparationPromise:(id)arg1 withError:(id *)arg2;
- (BOOL)setUserDataPromise:(id)arg1 error:(id *)arg2;
- (id)userDataPromiseWithError:(id *)arg1;
- (id)userDataRestoreShouldBegin:(BOOL *)arg1;

@end

