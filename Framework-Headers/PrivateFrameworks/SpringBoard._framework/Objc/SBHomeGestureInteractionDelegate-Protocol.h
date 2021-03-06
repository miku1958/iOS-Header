//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>

@class SBHomeGestureInteraction, SBHomeGesturePanGestureRecognizer, UIGestureRecognizer, UITouch;

@protocol SBHomeGestureInteractionDelegate <SBSystemGestureRecognizerDelegate>
- (unsigned long long)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 systemGestureTypeForType:(long long)arg2;

@optional
- (SBHomeGesturePanGestureRecognizer *)customScreenEdgePanGestureRecognizerForHomeGestureInteraction:(SBHomeGestureInteraction *)arg1;
- (BOOL)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldBeginGestureRecognizerOfType:(long long)arg2;
- (BOOL)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (BOOL)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)arg2;
- (BOOL)homeGestureInteraction:(SBHomeGestureInteraction *)arg1 shouldRequireFailureOfGestureRecognizer:(UIGestureRecognizer *)arg2;
- (void)homeGestureInteractionBegan:(SBHomeGestureInteraction *)arg1;
- (void)homeGestureInteractionCancelled:(SBHomeGestureInteraction *)arg1;
- (void)homeGestureInteractionChanged:(SBHomeGestureInteraction *)arg1;
- (void)homeGestureInteractionEnded:(SBHomeGestureInteraction *)arg1;
@end

