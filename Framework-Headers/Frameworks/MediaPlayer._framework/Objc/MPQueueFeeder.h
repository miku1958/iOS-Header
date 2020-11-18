//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/MPQueueBehaviorManaging-Protocol.h>
#import <MediaPlayer/NSCoding-Protocol.h>

@class MPModelPlayEvent, NSMutableDictionary, NSString;
@protocol MPQueueFeederDelegate;

@interface MPQueueFeeder : NSObject <MPQueueBehaviorManaging, NSCoding>
{
    long long _repeatType;
    long long _shuffleType;
    NSMutableDictionary *_nextStartTimes;
    BOOL _requiresQueueChangeVerification;
    id<MPQueueFeederDelegate> _delegate;
    unsigned long long _state;
    long long _activeShuffleType;
    MPModelPlayEvent *_modelPlayEvent;
    CDStruct_dcf4dde6 _skipLimit;
}

@property (nonatomic) long long activeShuffleType; // @synthesize activeShuffleType=_activeShuffleType;
@property (readonly, nonatomic) BOOL allowsUserVisibleUpcomingItems;
@property (readonly, nonatomic) BOOL canReorder;
@property (readonly, nonatomic) BOOL canSeek;
@property (readonly, nonatomic) BOOL canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPQueueFeederDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) Class itemClass;
@property (readonly, nonatomic) unsigned long long itemCount;
@property (readonly, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property (readonly, nonatomic) long long playbackMode;
@property (readonly, nonatomic) BOOL playerPreparesItemsForPlaybackAsynchronously;
@property (readonly, nonatomic) long long realRepeatType;
@property (readonly, nonatomic) long long realShuffleType;
@property (nonatomic) long long repeatType; // @synthesize repeatType=_repeatType;
@property (nonatomic) BOOL requiresQueueChangeVerification; // @synthesize requiresQueueChangeVerification=_requiresQueueChangeVerification;
@property (nonatomic) long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property (nonatomic) CDStruct_dcf4dde6 skipLimit; // @synthesize skipLimit=_skipLimit;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL trackChangesCanEndPlayback;
@property (readonly, nonatomic) BOOL userCanChangeShuffleAndRepeatType;

+ (BOOL)supportsStateRestoration;
- (void).cxx_destruct;
- (BOOL)_canPurgeNextStartTimes;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (BOOL)canSkipItem:(id)arg1;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1;
- (void)contentsDidChangeWithPreferredStartIndex:(unsigned long long)arg1 error:(id)arg2;
- (void)contentsDidChangeWithReplacementPlaybackContext:(id)arg1;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)hasItemForIndex:(unsigned long long)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (void)invalidateAssets;
- (void)invalidateRealRepeatType;
- (void)invalidateRealShuffleType;
- (id)itemForIdentifier:(id)arg1;
- (id)itemForIndex:(unsigned long long)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)metadataItemForIdentifier:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (void)player:(id)arg1 currentItemDidChangeToItem:(id)arg2;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (BOOL)player:(id)arg1 shouldContinuePlaybackForNetworkType:(long long)arg2 returningError:(id *)arg3;
- (id)preferredLanguages;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)restoreState:(CDUnknownBlockType)arg1;
- (void)setNextStartTime:(double)arg1 forIndentifier:(id)arg2;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id *)arg2;
- (BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (void)shuffleItemsWithAnchor:(unsigned long long *)arg1;

@end

