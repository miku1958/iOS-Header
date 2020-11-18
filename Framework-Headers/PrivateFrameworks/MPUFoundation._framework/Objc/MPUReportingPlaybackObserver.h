//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPAVController, MPAVItem, MPUReportingController, NSData, NSString;

@interface MPUReportingPlaybackObserver : NSObject
{
    NSData *_currentJingleReportingTimedMetadata;
    BOOL _hasSetLastPlayEventTimeStamp;
    BOOL _isReloadingWithPlaybackContext;
    BOOL _isScrubbing;
    MPAVItem *_itemForCurrentTimeChange;
    double _lastPlayEventEndTimeForCurrentItem;
    double _lastPlayEventTimeStamp;
    NSString *_playbackSessionID;
    double _startTimeForCurrentTimeChange;
    BOOL _offline;
    BOOL _SBEnabled;
    MPAVController *_player;
    MPUReportingController *_reportingController;
    unsigned long long _storeAccountID;
}

@property (nonatomic, getter=isSBEnabled) BOOL SBEnabled; // @synthesize SBEnabled=_SBEnabled;
@property (nonatomic, getter=isOffline) BOOL offline; // @synthesize offline=_offline;
@property (readonly, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly, nonatomic) MPUReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property (nonatomic) unsigned long long storeAccountID; // @synthesize storeAccountID=_storeAccountID;

- (void).cxx_destruct;
- (double)_itemEndTimeForItem:(id)arg1 withProposedEndTime:(double)arg2;
- (void)_itemNewAccessLogEntryNotification:(id)arg1;
- (void)_itemReportingJingleTimedMetadataDidChangeNotification:(id)arg1;
- (double)_itemStartTimeForItem:(id)arg1;
- (void)_playerDidReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerDidSetCurrentTimeNotification:(id)arg1;
- (void)_playerItemDidChangeNotification:(id)arg1;
- (void)_playerItemWillChangeNotification:(id)arg1;
- (void)_playerPlaybackStateDidChangeNotification:(id)arg1;
- (void)_playerWillReloadWithPlaybackContextNotification:(id)arg1;
- (void)_playerWillSetCurrentTimeNotification:(id)arg1;
- (void)_reportPlaybackEndedForTimeoutWithItem:(id)arg1;
- (void)_setLastPlayEventEndTimeForCurrentItem:(double)arg1;
- (void)_updatePlaybackSessionID;
- (void)dealloc;
- (void)didHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)didTransitionItemForBan:(id)arg1;
- (id)initWithPlayer:(id)arg1 reportingController:(id)arg2;
- (id)newPlayActivityEventForMPAVItem:(id)arg1;
- (id)newReportingPlaybackActivityEventForPlayActivityEvent:(id)arg1 MPAVItem:(id)arg2;
- (void)willHitPlaybackTimeoutEndingPlayback:(BOOL)arg1 withCurrentItem:(id)arg2;
- (void)willTransitionItemForBan:(id)arg1;

@end
