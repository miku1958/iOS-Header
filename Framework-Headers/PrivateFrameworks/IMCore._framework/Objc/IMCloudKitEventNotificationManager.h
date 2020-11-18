//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMCloudKitSyncProgress, IMCloudKitSyncState, IMEventNotificationManager, IMWeakReferenceCollection, NSTimer;
@protocol IMCloudKitEventHandlerAccountInfoProvider;

@interface IMCloudKitEventNotificationManager : NSObject
{
    id<IMCloudKitEventHandlerAccountInfoProvider> _accountInfoProvider;
    double _progressPollingInterval;
    IMWeakReferenceCollection *_eventHandlers;
    IMEventNotificationManager *_notificationManager;
    NSTimer *_fetchStatsTimer;
    IMCloudKitSyncState *_previousState;
    IMCloudKitSyncProgress *_progressToSend;
}

@property (weak) id<IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property BOOL didPromptForCloudKitSync;
@property (readonly) IMWeakReferenceCollection *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property (weak) NSTimer *fetchStatsTimer; // @synthesize fetchStatsTimer=_fetchStatsTimer;
@property (strong) IMEventNotificationManager *notificationManager; // @synthesize notificationManager=_notificationManager;
@property (strong) IMCloudKitSyncState *previousState; // @synthesize previousState=_previousState;
@property double progressPollingInterval; // @synthesize progressPollingInterval=_progressPollingInterval;
@property (strong) IMCloudKitSyncProgress *progressToSend; // @synthesize progressToSend=_progressToSend;
@property (readonly) IMCloudKitSyncState *syncState;

+ (void)__setSingleton__im:(id)arg1;
+ (id)__singleton__im;
+ (id)logHandle;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_cancelStatsFetchingTimer;
- (void)_fetchSyncStateStatistics:(CDUnknownBlockType)arg1;
- (BOOL)_hasProgressEventListeners;
- (void)_rescheduleFetchSyncProgress;
- (void)_sendHiddenProgressToEventListeners;
- (void)_sendProgressToEventListeners:(id)arg1;
- (void)_sendProgressToEventListenersDeferred;
- (void)_sendSyncStateChangedEventToEventListeners:(id)arg1;
- (void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2;
- (void)_syncStateDidChange:(id)arg1;
- (void)_timerExpiredForSyncStatsFetching:(id)arg1;
- (void)_updateProgressWithState:(id)arg1;
- (BOOL)accountHasiMessageEnabled;
- (void)addEventHandler:(id)arg1;
- (id)cloudKitHooks;
- (void)disableAllSyncEnabledCloudKitDevices;
- (void)fetchSyncDebuggingInfo:(id)arg1;
- (void)fetchSyncState;
- (void)fetchSyncStateAfterClearingErrors;
- (void)fetchSyncStateAfterClearingErrorsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncStateStatistics;
- (void)fetchSyncStateStatisticsWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchSyncStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (id)logHandle;
- (void)performAdditionalStorageRequiredCheck;
- (double)progressBroadcastDelay;
- (void)removeEventHandler:(id)arg1;
- (void)setCloudKitSyncEnabled:(BOOL)arg1;
- (void)setCloudKitSyncEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)startFetchingSyncProgress;
- (void)startInitialSync;
- (void)startPeriodicSync;
- (id)syncStateWithDictionary:(id)arg1;
- (void)visitEventHandlers:(CDUnknownBlockType)arg1;

@end
