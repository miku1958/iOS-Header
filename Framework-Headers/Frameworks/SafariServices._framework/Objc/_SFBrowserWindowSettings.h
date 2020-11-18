//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject
{
    NSMutableDictionary *_settingsDictionary;
}

@property (readonly, nonatomic) BOOL hasPrivateBrowsingWindow;

+ (void)setSharedSettings:(id)arg1;
+ (id)settings;
- (void).cxx_destruct;
- (BOOL)_boolValueForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_initializeSettingsDictionaryIfNeeded;
- (id)_numberForKey:(id)arg1 windowUUID:(id)arg2;
- (void)_setBool:(BOOL)arg1 forKey:(id)arg2 windowUUID:(id)arg3;
- (BOOL)activeDocumentIsValidForWindowWithUUID:(id)arg1;
- (id)init;
- (BOOL)isShowingTabViewForWindowWithUUID:(id)arg1;
- (BOOL)privateBrowsingEnabledForWindowWithUUID:(id)arg1;
- (void)removeWindowWithUUID:(id)arg1;
- (void)setActiveDocumentIsValid:(BOOL)arg1 forWindowWithUUID:(id)arg2;
- (void)setIsShowingTabView:(BOOL)arg1 forWindowWithUUID:(id)arg2;
- (void)setPrivateBrowsingEnabled:(BOOL)arg1 forWindowWithUUID:(id)arg2;
- (void)synchronize;
- (void)validateWindowSettingsWithUUIDs:(id)arg1;

@end
