//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSAnimationSettings, SBBarSwipeAffordanceView;

@protocol SBBarSwipeAffordanceDelegate <NSObject>
- (unsigned long long)barSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1 systemGestureTypeForType:(long long)arg2;

@optional
- (BSAnimationSettings *)hideAnimationSettingsForBarSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1;
- (BSAnimationSettings *)unhideAnimationSettingsForBarSwipeAffordanceView:(SBBarSwipeAffordanceView *)arg1;
@end

