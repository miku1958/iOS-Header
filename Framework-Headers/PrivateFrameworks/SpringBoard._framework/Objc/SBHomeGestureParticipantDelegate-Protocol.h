//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBHomeGestureParticipant;

@protocol SBHomeGestureParticipantDelegate <NSObject>
- (void)homeGestureParticipantOwningHomeGestureDidChange:(SBHomeGestureParticipant *)arg1;

@optional
- (void)homeGestureParticipantResolvedHomeAffordanceSuppressionDidChange:(SBHomeGestureParticipant *)arg1;
@end

