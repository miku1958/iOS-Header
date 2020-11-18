//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/ICEnvironmentMonitorObserver-Protocol.h>

@class MPAVController, MPAVItem, MPQueueFeeder, MPRTCReportingSessionSummaryEvent, NSMutableDictionary, NSNumber, NSString;

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver>
{
    long long _currentInterfaceType;
    MPAVItem *_currentItem;
    BOOL _isReloadingWithPlaybackContext;
    MPQueueFeeder *_pendingFailureQueueFeeder;
    NSNumber *_tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent *_tracklistSummaryEvent;
    NSMutableDictionary *_uniqueIdentifierToReportingSession;
    NSMutableDictionary *_uniqueIdentifierToSummaryEvent;
    int _clientType;
    NSString *_clientName;
    long long _clientVersion;
    MPAVController *_player;
}

@property (readonly, copy, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (readonly, nonatomic) int clientType; // @synthesize clientType=_clientType;
@property (readonly, nonatomic) long long clientVersion; // @synthesize clientVersion=_clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly) Class superclass;

+ (long long)defaultClientVersion;
+ (id)newHierarchyTokenFromParentToken:(id)arg1;
- (void).cxx_destruct;
- (void)_avControllerBufferingStateDidChangeNotification:(id)arg1;
- (void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avControllerItemWillChangeNotification:(id)arg1;
- (void)_avControllerPlaylistManagerFailedToQueueNotification:(id)arg1;
- (void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_avItemAssetLoadedNotification:(id)arg1;
- (void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg1;
- (void)_avItemTypeDidChangeNotification:(id)arg1;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2;
- (void)_completeSetupForReportingSession:(id)arg1 avItem:(id)arg2 fallbackQueueFeeder:(id)arg3;
- (void)_configureBaseEventPropertiesForEvent:(id)arg1;
- (void)_configureStartupStateForSummaryEvent:(id)arg1 withItem:(id)arg2;
- (void)_handleDeallocationForUniqueIdentifier:(id)arg1;
- (void)_initializeReportingSession:(id)arg1 forAVItem:(id)arg2;
- (BOOL)_isAVItemReadyForReportingSessionInitialization:(id)arg1;
- (BOOL)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (id)_newReportingSession;
- (id)_preparedSummaryEventForAVItem:(id)arg1;
- (id)_reportingSessionForAVItem:(id)arg1;
- (void)_setPerceivedTotalStartupTimeForItem:(id)arg1 withSummaryEvent:(id)arg2;
- (id)_uniqueIdentifierForAVItem:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 clientName:(id)arg2 clientType:(int)arg3 clientVersion:(long long)arg4;

@end

