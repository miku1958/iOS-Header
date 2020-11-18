//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBLockScreenPluginAppearance-Protocol.h>

@class NSArray, SBLockScreenLegibilitySettings;

@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>

@property (nonatomic) long long backgroundStyle;
@property (copy, nonatomic) NSArray *elementOverrides;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (strong, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (nonatomic) long long notificationBehavior;
@property (nonatomic) struct CGRect presentationRegion;
@property (nonatomic) long long presentationStyle;
@property (nonatomic) unsigned long long restrictedCapabilities;

@end

