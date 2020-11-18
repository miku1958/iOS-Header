//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICRadioPlaybackHistory, ICRadioPlaybackHistoryStore, ICStoreRequestContext, MPModelRadioStation, MPSectionedCollection, NSMutableArray, NSString, _MPCModelRadioPlaybackQueueAVItemSection, _MPCModelRadioPlaybackQueueStationTracksSection;

@interface MPCModelRadioPlaybackQueue : NSObject
{
    NSString *_originalStationName;
    _MPCModelRadioPlaybackQueueAVItemSection *_placeholderItemSection;
    ICRadioPlaybackHistoryStore *_playbackHistoryStore;
    _MPCModelRadioPlaybackQueueAVItemSection *_prefixItemSection;
    MPModelRadioStation *_radioStation;
    NSMutableArray *_sections;
    _MPCModelRadioPlaybackQueueStationTracksSection *_stationTracksSection;
    ICStoreRequestContext *_storeRequestContext;
}

@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, copy, nonatomic) ICRadioPlaybackHistory *playbackHistory;
@property (strong, nonatomic) MPModelRadioStation *radioStation; // @synthesize radioStation=_radioStation;
@property (readonly, nonatomic) MPSectionedCollection *trackModels;
@property (readonly, nonatomic) MPSectionedCollection *tracks;

+ (BOOL)identifiersIdentifyRadioStation:(id)arg1;
- (void).cxx_destruct;
- (id)AVItemAtIndex:(long long)arg1;
- (id)AVItemQueueIdentifierAtIndex:(long long)arg1;
- (long long)_globalIndexForIndexPath:(id)arg1;
- (id)_indexPathForGlobalIndex:(long long)arg1;
- (long long)indexOfItemWithAVItemQueueIdentifier:(id)arg1;
- (id)initWithPlaybackContext:(id)arg1;
- (BOOL)isExplicitItemAtIndex:(long long)arg1;
- (BOOL)isPlaceholderAVItem:(id)arg1;
- (BOOL)isPlaceholderItemForQueueIdentifier:(id)arg1;
- (BOOL)needsMoreTracksForPlaybackIndex:(long long)arg1;
- (long long)removeExplicitItems;
- (void)removeTrailingLoadingPlaceholder;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1;
- (void)savePlaybackHistoryWithUpdates:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)trackForItemAtIndex:(long long)arg1;
- (id)tracksByApplyingTracksResponse:(id)arg1 currentIndex:(long long)arg2;
- (void)updateWithPersonalizedResponse:(id)arg1;

@end

