//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIFeedbackGenerator.h>

#import <UIKit/UIFeedbackGeneratorUserInteractionDriven-Protocol.h>

@class _UIFeedback, _UIFeedbackDragBehaviorConfiguration;
@protocol _UIFeedbackContinuousPlayable;

@interface _UIFeedbackDragBehavior : UIFeedbackGenerator <UIFeedbackGeneratorUserInteractionDriven>
{
    long long _state;
    _UIFeedback<_UIFeedbackContinuousPlayable> *_playingContinuousFeedback;
}

@property (readonly, nonatomic, getter=_dragConfiguration) _UIFeedbackDragBehaviorConfiguration *dragConfiguration;
@property (strong, nonatomic, getter=_playingContinuousFeedback, setter=_setPlayingContinuousFeedback:) _UIFeedback<_UIFeedbackContinuousPlayable> *playingContinuousFeedback; // @synthesize playingContinuousFeedback=_playingContinuousFeedback;
@property (nonatomic, getter=_state, setter=_setState:) long long state; // @synthesize state=_state;

+ (Class)_configurationClass;
+ (id)dragBehaviorWithCoordinateSpace:(id)arg1 configuration:(id)arg2;
+ (id)dragBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
+ (id)retargetBehaviorWithStyle:(long long)arg1 coordinateSpace:(id)arg2;
- (void).cxx_destruct;
- (void)_startPlayingContinuousFeedback;
- (void)_startPlayingContinuousFeedbackNow;
- (id)_stats_key;
- (void)_stopPlayingContinuousFeedback;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)snappedToFinalPosition;
- (void)targetUpdated;
- (void)userInteractionCancelled;
- (void)userInteractionEnded;
- (void)userInteractionStarted;

@end
