//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPCPlaybackEngineEventConsumer-Protocol.h>

@class ICPlayActivityController, NSMutableArray, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription;

@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>
{
    id<MPCPlaybackEngineEventStreamSubscription> _subscription;
    NSMutableArray *_radioPlayActivityEvents;
    ICPlayActivityController *_playActivityController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) ICPlayActivityController *playActivityController; // @synthesize playActivityController=_playActivityController;
@property (readonly, nonatomic) NSMutableArray *radioPlayActivityEvents; // @synthesize radioPlayActivityEvents=_radioPlayActivityEvents;
@property (readonly, nonatomic) id<MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property (readonly) Class superclass;

+ (id)identifier;
- (void).cxx_destruct;
- (void)_clampTimeValuesForPAFEvent:(id)arg1 withDuration:(double)arg2;
- (BOOL)_finalizePAFEvents:(id)arg1;
- (id)_findRecentPlaybackStartFromTypes:(id)arg1 matchingPayload:(id)arg2 cursor:(id)arg3;
- (id)_generateAggregateNoncatalogEndEventForCursor:(id)arg1;
- (id)_generatePlaybackEndEventFromEvent:(id)arg1 withQueueSectionIdentifier:(id)arg2 itemIdentifier:(id)arg3 cursor:(id)arg4;
- (double)_getStartTimeForMostRecentPlaybackStart:(id)arg1 withItemBeginEvent:(id)arg2 cursor:(id)arg3;
- (BOOL)_handleApplicationTerminationEvent:(id)arg1 cursor:(id)arg2;
- (BOOL)_handleItemEndEvent:(id)arg1 cursor:(id)arg2;
- (BOOL)_handleItemPauseEvent:(id)arg1 cursor:(id)arg2;
- (BOOL)_handleItemPositionJumpEvent:(id)arg1 cursor:(id)arg2;
- (BOOL)_handleItemResumeEvent:(id)arg1 cursor:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withAccountIdentifier:(id)arg2 cursor:(id)arg3;
- (void)_updatePAFEvent:(id)arg1 withDeviceInfoFromCursor:(id)arg2;
- (void)_updatePAFEvent:(id)arg1 withEnqueuerAccountIdentifier:(id)arg2 queueAddEvent:(id)arg3 cursor:(id)arg4;
- (void)_updatePAFEvent:(id)arg1 withItemBeginEvent:(id)arg2 containerBeginPayload:(id)arg3 cursor:(id)arg4 forEventType:(id)arg5;
- (void)_updatePAFEvent:(id)arg1 withQueueAddEvent:(id)arg2 queueSectionIdentifier:(id)arg3 cursor:(id)arg4;
- (id)init;
- (void)subscribeToEventStream:(id)arg1;
- (void)unsubscribeFromEventStream:(id)arg1;

@end

