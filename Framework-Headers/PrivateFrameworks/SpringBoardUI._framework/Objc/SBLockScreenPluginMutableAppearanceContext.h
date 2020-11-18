//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBLockScreenPluginAppearanceContext.h>

#import <SpringBoardUI/SBLockScreenPluginMutableAppearance-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginMutableAppearanceContext : SBLockScreenPluginAppearanceContext <SBLockScreenPluginMutableAppearance>
{
}

@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *elementOverrides;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, strong, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end

