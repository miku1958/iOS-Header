//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/NSCopying-Protocol.h>
#import <SpringBoardUI/NSMutableCopying-Protocol.h>
#import <SpringBoardUI/SBLockScreenPluginAppearance-Protocol.h>
#import <SpringBoardUI/SBLockScreenPluginMutableAppearance-Protocol.h>

@class NSArray, NSString, SBLockScreenLegibilitySettings;

@interface SBLockScreenPluginAppearanceContext : NSObject <SBLockScreenPluginMutableAppearance, SBLockScreenPluginAppearance, NSCopying, NSMutableCopying>
{
    BOOL hidden;
    unsigned long long restrictedCapabilities;
    long long backgroundStyle;
    long long presentationStyle;
    long long notificationBehavior;
    SBLockScreenLegibilitySettings *legibilitySettings;
    NSArray *elementOverrides;
    struct CGRect presentationRegion;
}

@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *elementOverrides;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, strong, nonatomic) SBLockScreenLegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) long long notificationBehavior;
@property (readonly, nonatomic) struct CGRect presentationRegion;
@property (readonly, nonatomic) long long presentationStyle;
@property (readonly, nonatomic) unsigned long long restrictedCapabilities;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithAppearance:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setElementOverrides:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setNotificationBehavior:(long long)arg1;
- (void)setPresentationRegion:(struct CGRect)arg1;
- (void)setPresentationStyle:(long long)arg1;
- (void)setRestrictedCapabilities:(unsigned long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
