//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class SBCPlaybackPositionDomain, SBCPlaybackPositionSyncService;
@protocol OS_dispatch_queue;

@interface MPUbiquitousPlaybackPositionController : NSObject
{
    BOOL _databaseHasBookmarkableContents;
    BOOL _isServiceActive;
    BOOL _externallyActive;
    BOOL _beganUsingPlaybackPositionMetadata;
    BOOL _applicationBecomingActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    SBCPlaybackPositionSyncService *_uppServiceProxy;
    SBCPlaybackPositionDomain *_uppDomain;
}

@property (readonly, nonatomic) BOOL applicationBecomingActive; // @synthesize applicationBecomingActive=_applicationBecomingActive;
@property (nonatomic, getter=isServiceActive) BOOL beganUsingPlaybackPositionMetadata; // @synthesize beganUsingPlaybackPositionMetadata=_beganUsingPlaybackPositionMetadata;
@property (nonatomic) BOOL databaseHasBookmarkableContents; // @synthesize databaseHasBookmarkableContents=_databaseHasBookmarkableContents;
@property (nonatomic) BOOL externallyActive; // @synthesize externallyActive=_externallyActive;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic, getter=isServiceActive) BOOL serviceActive; // @synthesize serviceActive=_isServiceActive;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue=_serviceQueue;
@property (strong, nonatomic) SBCPlaybackPositionDomain *uppDomain; // @synthesize uppDomain=_uppDomain;
@property (strong, nonatomic) SBCPlaybackPositionSyncService *uppServiceProxy; // @synthesize uppServiceProxy=_uppServiceProxy;

+ (id)sharedUbiquitousPlaybackPositionController;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationDidEnterForegroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (BOOL)_onQueue_isEnabled;
- (BOOL)_onQueue_shouldBeActive;
- (void)_onServiceQueue_becomeActiveService;
- (id)_onServiceQueue_connectedUPPServiceProxy;
- (void)_onServiceQueue_resignActiveService;
- (void)_onServiceQueue_setDatabaseHasBookmarkableContents:(BOOL)arg1;
- (void)_onServiceQueue_updateActiveServiceIfNeeded;
- (void)_onServiceQueue_updateBoomkarkabilityState;
- (id)_playbackPositionEntityWithValuesFromMusicLibraryTrackPersistentID:(long long)arg1;
- (void)beginUsingPlaybackPositionMetadata;
- (void)dealloc;
- (id)init;
- (void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2;

@end

