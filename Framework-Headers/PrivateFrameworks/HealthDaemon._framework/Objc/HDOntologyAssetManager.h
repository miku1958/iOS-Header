//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDDaemon, HDPeriodicActivity, MAAsset, NSMutableDictionary, NSString, NSURL, _HKMobileAssetDownloadManager;
@protocol OS_dispatch_queue;

@interface HDOntologyAssetManager : NSObject <HDPeriodicActivityDelegate>
{
    _HKMobileAssetDownloadManager *_assetDownloadManager;
    NSObject<OS_dispatch_queue> *_downloadManagerCallbackQueue;
    NSObject<OS_dispatch_queue> *_handlerInvocationQueue;
    struct os_unfair_lock_s _ivarLock;
    int _notificationRegistrationToken;
    NSMutableDictionary *_registeredHandlers;
    BOOL _assetDownloadEnabled;
    CDUnknownBlockType _AWDMetricPosterBlock;
    MAAsset *_latestOntologyAsset;
    NSMutableDictionary *_completionsByActivityName;
    HDDaemon *_daemon;
    MAAsset *_currentOntologyAsset;
    long long _simulatedCompatibilityVersion;
    HDPeriodicActivity *_catalogUpdatePeriodicActivity;
}

@property (copy, nonatomic) CDUnknownBlockType AWDMetricPosterBlock; // @synthesize AWDMetricPosterBlock=_AWDMetricPosterBlock;
@property (nonatomic) BOOL assetDownloadEnabled; // @synthesize assetDownloadEnabled=_assetDownloadEnabled;
@property (readonly, nonatomic) _HKMobileAssetDownloadManager *assetDownloadManager;
@property (readonly, copy, nonatomic) NSURL *assetFileURL;
@property (readonly, nonatomic) long long assetFileVersion;
@property (strong, nonatomic) HDPeriodicActivity *catalogUpdatePeriodicActivity; // @synthesize catalogUpdatePeriodicActivity=_catalogUpdatePeriodicActivity;
@property (readonly, copy, nonatomic) NSMutableDictionary *completionsByActivityName; // @synthesize completionsByActivityName=_completionsByActivityName;
@property (strong, nonatomic) MAAsset *currentOntologyAsset; // @synthesize currentOntologyAsset=_currentOntologyAsset;
@property (readonly, weak, nonatomic) HDDaemon *daemon; // @synthesize daemon=_daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) MAAsset *latestOntologyAsset; // @synthesize latestOntologyAsset=_latestOntologyAsset;
@property (nonatomic) long long simulatedCompatibilityVersion; // @synthesize simulatedCompatibilityVersion=_simulatedCompatibilityVersion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_bestAssetInArray:(id)arg1;
- (double)_catalogUpdateIntervalOverride;
- (void)_downloadManagerCallbackQueue_assetDownloadDidComplete:(id)arg1;
- (void)_downloadManagerCallbackQueue_assetDownloadDidFail:(id)arg1;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidComplete:(id)arg1;
- (void)_downloadManagerCallbackQueue_catalogUpdateDidFail:(id)arg1;
- (long long)_effectiveSystemCompatibilityVersion;
- (long long)_hoursSinceLastModifiedForFileAtURL:(id)arg1;
- (BOOL)_ignoreAssetEqualityComparison;
- (id)_lastModifiedDateForFileAtURL:(id)arg1;
- (id)_localFileURLForAsset:(id)arg1;
- (long long)_lock_assetAvailability;
- (id)_lock_currentOntologyAssetFileURL;
- (void)_lock_invokeAvailabilityHandlers;
- (void)_lock_invokeCompletionForPeriodicActivityName:(id)arg1 withResult:(long long)arg2 error:(id)arg3;
- (BOOL)_lock_saveContentInfoForAsset:(id)arg1;
- (void)_lock_schedulePeriodicActivity;
- (void)_lock_unschedulePeriodicActivity;
- (id)_newAssetDownloadManager;
- (id)_newPeriodicActivityWithName:(id)arg1;
- (double)_normalIntervalForActivityNamed:(id)arg1;
- (void)_postAWDMetricEventWithAssetDownloadPhase:(int)arg1;
- (void)_registerNotifyDispatchHandler;
- (double)_retryIntervalForActivityNamed:(id)arg1;
- (void)_startAssetDownload;
- (void)_updateAssetCatalogForReason:(unsigned long long)arg1;
- (id)_userDefaultOverrideAssetFileURL;
- (BOOL)clearUserDefaultOverrideAssetFileURLWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;
- (void)invalidateAndWait;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;
- (id)registerAssetAvailabilityHandler:(CDUnknownBlockType)arg1;
- (id)setUserDefaultOverrideAssetFileURL:(id)arg1 error:(id *)arg2;
- (void)unregisterHandlerForToken:(id)arg1;

@end

