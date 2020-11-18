//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPStoreDownloadManagerObserver-Protocol.h>

@class MPAVController, MPArtworkCatalog, NSData, NSMutableDictionary, NSString, UIImage;
@protocol OS_dispatch_queue;

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    MPArtworkCatalog *_currentArtworkCatalog;
    UIImage *_currentArtworkImage;
    NSData *_currentArtworkData;
    BOOL _hasSeenAnyItem;
    NSMutableDictionary *_mediaItemCoalescedUpdateDateAccessedTimers;
    NSObject<OS_dispatch_queue> *_statusBarQueue;
    BOOL _scheduledNowPlayingInfoUpdate;
    BOOL _enabled;
    MPAVController *_player;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_additionalKeysForNowPlayingItem:(id)arg1;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_avItemDurationDidChangeNotification:(id)arg1;
- (void)_avItemIsExplicitDidChangeNotification:(id)arg1;
- (void)_avItemLikedStateDidChangeNotification:(id)arg1;
- (void)_avItemTitlesDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_coalescedUpdateLastUsedDateForCurrentItem;
- (void)_contentsDidChangeNotification:(id)arg1;
- (void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_crossedTimeMarkerNotification:(id)arg1;
- (BOOL)_hasProperConditionsToLoadArtwork;
- (void)_itemDidChangeNotification:(id)arg1;
- (BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_playbackErrorNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_postNowPlayingInfo;
- (void)_postNowPlayingInfoForItem:(id)arg1;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_registerForNotificationsForPlayer:(id)arg1;
- (BOOL)_reloadArtworkIfPossible;
- (void)_repeatTypeDidChangeNotification:(id)arg1;
- (void)_setNeedsNowPlayingInfoUpdate;
- (void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_unregisterForNotificationsForPlayer:(id)arg1;
- (void)configureArtworkCatalog:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;

@end

