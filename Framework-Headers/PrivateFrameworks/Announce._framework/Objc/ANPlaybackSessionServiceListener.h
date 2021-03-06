//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Announce/ANAnnouncementCoordinationServiceDelegate-Protocol.h>
#import <Announce/ANAnnouncementManagerDelegte-Protocol.h>
#import <Announce/ANLocalPlaybackSessionServiceInterface-Protocol.h>
#import <Announce/ANRemotePlaybackSessionServiceInterface-Protocol.h>
#import <Announce/ANTrackPlayerDelegate-Protocol.h>
#import <Announce/NSXPCListenerDelegate-Protocol.h>

@class ANAnnouncementCoordinationService, ANAnnouncementStatePublisher, ANTrackPlayer, ANVolumeController, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface ANPlaybackSessionServiceListener : NSObject <ANLocalPlaybackSessionServiceInterface, ANRemotePlaybackSessionServiceInterface, ANAnnouncementManagerDelegte, NSXPCListenerDelegate, ANTrackPlayerDelegate, ANAnnouncementCoordinationServiceDelegate>
{
    NSXPCListener *_localPlaybackSessionListener;
    NSXPCListener *_remotePlaybackSessionListener;
    NSMutableDictionary *_recentPlaybackInfo;
    NSMutableSet *_remotePlaybackClients;
    NSMutableSet *_localPlaybackClients;
    ANTrackPlayer *_audioPlayer;
    ANVolumeController *_volumeController;
    NSMutableOrderedSet *_announcementsToPlay;
    long long _lastAnnoucementIndex;
    ANAnnouncementStatePublisher *_playbackStatePublisher;
    CDUnknownBlockType _localPlaybackCompletionHandler;
    unsigned long long _playbackOptions;
    ANAnnouncementCoordinationService *_coordinationService;
    NSObject<OS_dispatch_queue> *_playbackQueue;
}

@property (strong, nonatomic) NSMutableOrderedSet *announcementsToPlay; // @synthesize announcementsToPlay=_announcementsToPlay;
@property (strong, nonatomic) ANTrackPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property (strong, nonatomic) ANAnnouncementCoordinationService *coordinationService; // @synthesize coordinationService=_coordinationService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isLocalPlaybackSessionActive;
@property (nonatomic) long long lastAnnoucementIndex; // @synthesize lastAnnoucementIndex=_lastAnnoucementIndex;
@property (strong) NSMutableSet *localPlaybackClients; // @synthesize localPlaybackClients=_localPlaybackClients;
@property (copy, nonatomic) CDUnknownBlockType localPlaybackCompletionHandler; // @synthesize localPlaybackCompletionHandler=_localPlaybackCompletionHandler;
@property (readonly, nonatomic) NSXPCListener *localPlaybackSessionListener; // @synthesize localPlaybackSessionListener=_localPlaybackSessionListener;
@property (readonly, nonatomic) unsigned long long playbackOptions; // @synthesize playbackOptions=_playbackOptions;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property (strong, nonatomic) ANAnnouncementStatePublisher *playbackStatePublisher; // @synthesize playbackStatePublisher=_playbackStatePublisher;
@property (strong, nonatomic) NSMutableDictionary *recentPlaybackInfo; // @synthesize recentPlaybackInfo=_recentPlaybackInfo;
@property (strong) NSMutableSet *remotePlaybackClients; // @synthesize remotePlaybackClients=_remotePlaybackClients;
@property (readonly, nonatomic) NSXPCListener *remotePlaybackSessionListener; // @synthesize remotePlaybackSessionListener=_remotePlaybackSessionListener;
@property (readonly, nonatomic) BOOL remoteSessionsActive;
@property (readonly) Class superclass;
@property (strong, nonatomic) ANVolumeController *volumeController; // @synthesize volumeController=_volumeController;

- (void).cxx_destruct;
- (id)_announcementsForPlaybackOptions:(unsigned long long)arg1 fromAnnouncements:(id)arg2;
- (id)_clientForConnection:(id)arg1;
- (id)_createTrackPlayerWithPlaybackDeadline:(id)arg1 options:(unsigned long long)arg2 adjustedAnchorPoint:(double *)arg3;
- (BOOL)_endSessionForConnection:(id)arg1;
- (void)_handlePlaybackEndedWithError:(id)arg1;
- (id)_nextAnnouncementToPlay;
- (void)_playAnnouncementsWithIDs:(id)arg1 announceIDToStart:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_removeConnection:(id)arg1;
- (void)_setTimersActive:(BOOL)arg1;
- (void)_setVolume:(unsigned long long)arg1;
- (void)_startPlayingAnnouncementsWithOptions:(unsigned long long)arg1 fromSource:(id)arg2;
- (void)_stopAudioPlayer;
- (void)_updatePlaybackInfoForAnnouncementID:(id)arg1 options:(unsigned long long)arg2;
- (void)_updatePlayerState;
- (void)announcementsDidChangeForGroupID:(id)arg1;
- (void)audioSessionInterruptionActive:(BOOL)arg1;
- (void)cleanForExit;
- (void)dealloc;
- (void)didPlayAnnouncement:(id)arg1;
- (void)endSessionWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (void)lastPlayedAnnouncementInfo:(CDUnknownBlockType)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)nextAnnouncementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)playAnnouncementsWithIDs:(id)arg1 announceIDToStart:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)playAnnouncementsWithIDs:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)playAnnouncementsWithOptions:(unsigned long long)arg1 startingAt:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)playbackState:(CDUnknownBlockType)arg1;
- (void)previousAnnouncementWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setPlaybackStartedForAnnouncement:(id)arg1;
- (void)setPlaybackStoppedForAnnouncement:(id)arg1;
- (void)startSessionForGroupID:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopPlayingAnnouncementsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)trackDidFinishPlaying:(id)arg1 trackType:(long long)arg2 withError:(id)arg3;

@end

