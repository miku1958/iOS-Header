//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMSetting.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/_HMAccesorySettingDelegate-Protocol.h>

@class HMAccessorySettingGroup, NSString, NSUUID, _HMAccessorySetting;

@interface HMAccessorySetting : HMSetting <_HMAccesorySettingDelegate, HMFLogging>
{
    _HMAccessorySetting *_internal;
    HMAccessorySettingGroup *_group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) HMAccessorySettingGroup *group; // @synthesize group=_group;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *identifier;
@property (readonly) _HMAccessorySetting *internal; // @synthesize internal=_internal;
@property (readonly, copy) NSString *keyPath;
@property (readonly, getter=isReflected) BOOL reflected;
@property (readonly) Class superclass;
@property (readonly) Class valueClass;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)logCategory;
+ (id)settingForInternal:(id)arg1;
- (void).cxx_destruct;
- (void)_settingDidUpdateValue:(id)arg1;
- (void)_settingWillUpdateValue:(id)arg1;
- (id)init;
- (id)initWithInternal:(id)arg1;
- (id)initWithKey:(id)arg1 properties:(unsigned long long)arg2 value:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isWritable;
- (id)logIdentifier;
- (void)settingDidUpdateReflected;
- (void)settingWillUpdateReflected;
- (void)updateReflected:(BOOL)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)value;

@end

