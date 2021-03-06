//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSHomeAffordanceControlling-Protocol.h>

@class BSAnimationSettings, NSString, SBNotificationHomeAffordanceController, UIPanGestureRecognizer;
@protocol UIViewSpringAnimationBehaviorDescribing;

@interface SBDashBoardHomeAffordanceController : NSObject <CSHomeAffordanceControlling>
{
    SBNotificationHomeAffordanceController *_notificationHomeAffordanceController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BSAnimationSettings *hideHomeAffordanceAnimationSettings;
@property (readonly, nonatomic) UIPanGestureRecognizer *screenEdgePanGesture;
@property (readonly, nonatomic) id<UIViewSpringAnimationBehaviorDescribing> settleHomeAffordanceAnimationBehaviorDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BSAnimationSettings *unhideHomeAffordanceAnimationSettings;

- (void).cxx_destruct;
- (id)init;
- (id)keyboardAssertionForGestureWindow:(id)arg1;
- (void)registerHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;
- (void)unregisterHomeGestureParticipant:(id)arg1 withIdentifier:(long long)arg2;

@end

