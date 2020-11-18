//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPQueueFeeder.h>

#import <MediaPlaybackCore/MPCQueueBehaviorManaging-Protocol.h>

@class MPAVItem, MPPlaceholderAVItem, NSArray, NSMapTable, NSString, RadioStation, RadioStationSkipController;

@interface MPCRadioQueueFeeder : MPQueueFeeder <MPCQueueBehaviorManaging>
{
    BOOL _canSeek;
    MPAVItem *_currentItem;
    BOOL _didReceiveTracklistEnd;
    unsigned long long _feederRevisionID;
    NSMapTable *_fetchingTracksCompletionHandlersByStation;
    BOOL _hasReceivedStreamTrack;
    BOOL _hasVerifiedCloudStatus;
    BOOL _isPreparingStation;
    long long _maximumGetTracksRetryCount;
    MPPlaceholderAVItem *_placeholderAVItem;
    NSArray *_previousDatabaseTrackPlaybackDescriptorQueue;
    RadioStation *_station;
    RadioStationSkipController *_stationSkipController;
    NSMapTable *_stationTracklistRetrievalRetryCount;
    NSArray *_tracks;
    BOOL _wasUsingBackgroundNetwork;
}

@property (readonly, nonatomic) BOOL allowsUserVisibleUpcomingItems;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, nonatomic) BOOL canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) long long playbackMode;
@property (strong, nonatomic) RadioStation *station;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property (readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;

+ (void)_explicitContentAllowedDidChangeNotification:(id)arg1;
+ (id)_tracksByRemovingPromotionalContentFromTracks:(id)arg1;
+ (id)_tracksWithPromotionalContentFromTracks:(id)arg1;
+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(BOOL)arg1 removeTracks:(BOOL)arg2;
+ (BOOL)isExplicitTracksEnabled;
+ (BOOL)isProfileExplicitContentRestricted;
+ (BOOL)isUserDefaultExplicitTracksEnabled;
+ (long long)maximumNumberOfTracksToFetch;
+ (void)setIgnoresUserDefaultExplicitTracksEnabled:(BOOL)arg1;
+ (void)setUserDefaultExplicitTracksEnabled:(BOOL)arg1;
+ (BOOL)supportsStateRestoration;
- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_applicationWillTerminateNotification:(id)arg1;
- (BOOL)_canHavePlaceholderTrack;
- (void)_commonInit;
- (void)_configurePlaceholderAVItem;
- (id)_currentTrackPlaybackDescriptorQueueWithCurrentItem:(id)arg1 shouldIncludePlaybackInformation:(BOOL)arg2 skipDate:(id)arg3;
- (void)_fetchAdditionalTracksWithBaseIndex:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_hasReceivedStreamTrack;
- (unsigned long long)_indexOfCurrentItem;
- (unsigned long long)_indexOfItem:(id)arg1;
- (unsigned long long)_indexOfItem:(id)arg1 inTracks:(id)arg2;
- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_numberOfAvailableSkipsDidChangeNotification:(id)arg1;
- (void)_performGetTracksOperationForStation:(id)arg1 withNumberOfTracks:(long long)arg2;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_removeAllTracks;
- (void)_sendContentsDidChangeWithCurrentItem;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (id)_trackAtIndex:(unsigned long long)arg1 shouldFetchAddtionalTracks:(BOOL)arg2;
- (id)_tracksByRemovingPlayedTracks:(id)arg1;
- (void)_updateForLoadedStoreBag:(id)arg1;
- (void)_updateTracksForChangedTrackPlaybackDescriptorQueue;
- (void)_updateWithTracks:(id)arg1 tracklistActionType:(long long)arg2 options:(long long)arg3;
- (void)_verifyCloudStatusIfNeeded;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (BOOL)canReorder;
- (BOOL)canSkipItem:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (BOOL)isRadioQueueFeeder;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)modelPlayEvent;
- (id)playbackInfoForIdentifier:(id)arg1;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (BOOL)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id *)arg3;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (BOOL)preventsHardQueueModificationsForItem:(id)arg1;
- (long long)realRepeatType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)restoreState:(CDUnknownBlockType)arg1;
- (BOOL)shouldContinuePlaybackForNetworkType:(long long)arg1 player:(id)arg2;
- (BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (CDStruct_8ff95007)skipLimit;

@end
