//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/NSObject-Protocol.h>

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginAppearance <NSObject>

@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, copy, nonatomic) NSArray *elementOverrides;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, strong, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) struct CGRect presentationRegion;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;

@end

