//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/_HMAccesorySettingGroupDelegate-Protocol.h>

@class NSArray, NSMutableSet, NSString, _HMAccessorySettingGroup;
@protocol OS_dispatch_queue;

@interface HMAccessorySettingGroup : NSObject <_HMAccesorySettingGroupDelegate, HMFLogging>
{
    NSMutableSet *_settings;
    NSMutableSet *_groups;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    _HMAccessorySettingGroup *_internal;
    HMAccessorySettingGroup *_group;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) HMAccessorySettingGroup *group; // @synthesize group=_group;
@property (readonly, copy) NSArray *groups;
@property (readonly) unsigned long long hash;
@property (readonly) _HMAccessorySettingGroup *internal; // @synthesize internal=_internal;
@property (readonly, copy) NSString *keyPath;
@property (readonly, copy) NSString *localizedTitle;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, copy) NSArray *settings;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_notifyClientOfAddedGroup:(id)arg1;
- (void)_notifyClientOfAddedSetting:(id)arg1;
- (void)_notifyClientOfRemovedGroup:(id)arg1;
- (void)_notifyClientOfRemovedSetting:(id)arg1;
- (void)_settingGroup:(id)arg1 didAddSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didAddSettingGroup:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSetting:(id)arg2;
- (void)_settingGroup:(id)arg1 didRemoveSettingGroup:(id)arg2;
- (void)addGroup:(id)arg1;
- (void)addGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addSetting:(id)arg1;
- (void)addSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithInternal:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)removeGroup:(id)arg1;
- (void)removeGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeSetting:(id)arg1;
- (void)removeSetting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

