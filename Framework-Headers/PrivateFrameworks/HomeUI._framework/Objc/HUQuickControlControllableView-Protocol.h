//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlPresentableView-Protocol.h>

@class HUQuickControlViewProfile;

@protocol HUQuickControlControllableView <HUQuickControlPresentableView>

@property (copy, nonatomic) HUQuickControlViewProfile *profile;
@property (strong, nonatomic) id secondaryValue;
@property (strong, nonatomic) id value;

- (id)initWithProfile:(HUQuickControlViewProfile *)arg1;

@optional
@end
