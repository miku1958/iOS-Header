//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMSettings.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAccessory, HMAccessorySettingGroup, HMFUnfairLock, NSString, NSUUID, _HMContext;
@protocol HMAccessorySettingsContainer, HMAccessorySettingsDelegate, HMControllable;

@interface HMAccessorySettings : HMSettings <HMFLogging, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    id<HMAccessorySettingsContainer> _settingsContainer;
    id<HMControllable> _settingsControl;
    id<HMAccessorySettingsDelegate> _delegate;
    HMAccessorySettingGroup *_rootGroup;
    _HMContext *_context;
}

@property (readonly, weak) HMAccessory *accessory;
@property (readonly, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMAccessorySettingsDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMAccessorySettingGroup *rootGroup; // @synthesize rootGroup=_rootGroup;
@property (weak) id<HMAccessorySettingsContainer> settingsContainer; // @synthesize settingsContainer=_settingsContainer;
@property (weak) id<HMControllable> settingsControl; // @synthesize settingsControl=_settingsControl;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

+ (id)localizationKeyForKeyPath:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
- (void)__notifyDelegateSettingsDidUpdate;
- (void)__notifyDelegateSettingsWillUpdateWithCompletionHanlder:(CDUnknownBlockType)arg1;
- (void)_configureWithContext:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_updateSettingsWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithSettingsContainer:(id)arg1 settingsControl:(id)arg2 rootGroup:(id)arg3;

@end
