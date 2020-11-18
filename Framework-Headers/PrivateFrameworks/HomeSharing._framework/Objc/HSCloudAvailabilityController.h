//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/HSCloudAvailability-Protocol.h>
#import <HomeSharing/ICEnvironmentMonitorObserver-Protocol.h>
#import <HomeSharing/RadiosPreferencesDelegate-Protocol.h>

@class NSString, RadiosPreferences;
@protocol OS_dispatch_queue;

@interface HSCloudAvailabilityController : NSObject <RadiosPreferencesDelegate, ICEnvironmentMonitorObserver, HSCloudAvailability>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasProperNetworkConditionsToShowCloudMedia;
    BOOL _isAirplaneModeActive;
    BOOL _isAutoDownloadOnCellularAllowed;
    BOOL _isCellularDataActive;
    BOOL _isCellularDataRestrictedForMusic;
    BOOL _isShowingAllMusic;
    BOOL _isShowingAllVideo;
    BOOL _isUpdateInProgress;
    BOOL _isWiFiEnabled;
    BOOL _isWiFiAssociated;
    BOOL _isNetworkReachable;
    BOOL _canShowCloudMusic;
    BOOL _canShowCloudVideo;
    BOOL _canShowCloudDownloadButtons;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    long long _networkType;
    RadiosPreferences *_radiosPreferences;
    unsigned long long _networkReachabilityObservationCount;
    struct __CTServerConnection *_ctServerConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;
- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (BOOL)_hasCellularCapability;
- (BOOL)_hasWiFiCapability;
- (BOOL)_isAutoDownloadOnCellularAllowed;
- (void)_onQueue_beginObservingReachabilityChanges;
- (void)_onQueue_endObservingReachabilityChanges;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(BOOL)arg1;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(BOOL)arg1;
- (void)_onQueue_updateIsCellularDataRestrictedForMusic;
- (void)_setNewIsNetworkReachable:(BOOL)arg1 networkType:(long long)arg2;
- (BOOL)_uncachedIsAutoDownloadOnCellularAllowed;
- (BOOL)_uncachedIsShowingAllMusic;
- (BOOL)_uncachedIsShowingAllVideo;
- (void)_wifiStateDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (void)beginObservingNetworkReachability;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (void)dealloc;
- (void)endObservingNetworkReachability;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (id)init;
- (BOOL)isCellularDataRestricted;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)isNetworkReachable;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;

@end

