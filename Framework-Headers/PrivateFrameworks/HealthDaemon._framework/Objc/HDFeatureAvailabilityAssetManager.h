//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDPeriodicActivityDelegate-Protocol.h>

@class HDPeriodicActivity, NPSManager, NSString, NSURL, NSUserDefaults, _HKMobileAssetDownloadManager;

@interface HDFeatureAvailabilityAssetManager : NSObject <HDPeriodicActivityDelegate>
{
    NPSManager *_syncManager;
    NSURL *_assetDirectoryOverride;
    double _retryInterval;
    _HKMobileAssetDownloadManager *_downloadManager;
    HDPeriodicActivity *_periodicActivity;
    NSUserDefaults *_unitTest_defaults;
    CDUnknownBlockType _unitTest_errorObserver;
}

@property (readonly, nonatomic) NSURL *assetDirectoryOverride; // @synthesize assetDirectoryOverride=_assetDirectoryOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _HKMobileAssetDownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HDPeriodicActivity *periodicActivity; // @synthesize periodicActivity=_periodicActivity;
@property (readonly, nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;
@property (strong, nonatomic) NSUserDefaults *unitTest_defaults; // @synthesize unitTest_defaults=_unitTest_defaults;
@property (copy, nonatomic) CDUnknownBlockType unitTest_errorObserver; // @synthesize unitTest_errorObserver=_unitTest_errorObserver;

- (void).cxx_destruct;
- (void)_configureDownloadManager;
- (void)_downloadDidCompleteWithAssets:(id)arg1;
- (void)_downloadDidCompleteWithError:(id)arg1;
- (id)initWithProfile:(id)arg1;
- (void)performPeriodicActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)periodicActivity:(id)arg1 configureXPCActivityCriteria:(id)arg2;

@end

