//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMActionSet.h>

#import <Home/HFFavoritable-Protocol.h>
#import <Home/HFHomeKitObject-Protocol.h>
#import <Home/HFReorderableHomeKitObject-Protocol.h>
#import <Home/HFStateDumpBuildable-Protocol.h>

@class NSDate, NSSet, NSString, NSUUID;
@protocol HFIconDescriptor;

@interface HMActionSet (HFDebugging) <HFStateDumpBuildable, HFFavoritable, HFHomeKitObject, HFReorderableHomeKitObject>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSSet *hf_characteristicWriteActions;
@property (readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property (readonly, copy, nonatomic) NSString *hf_displayName;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) id<HFIconDescriptor> hf_iconDescriptor;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_requiresDeviceUnlock;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

+ (id)hf_standardIconDescriptorForActionSetType:(id)arg1;
- (id)hf_affectedCharacteristics;
- (id)hf_affectedMediaSessions;
- (id)hf_affectedProfiles;
- (id)hf_affectedServices;
- (BOOL)hf_affectsServiceWithIdentifier:(id)arg1;
- (BOOL)hf_isAnonymous;
- (BOOL)hf_isShortcutOwned;
- (id)hf_shortcutAction;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIconDescriptor:(id)arg1;
- (id)hf_updateIsFavorite:(BOOL)arg1;
@end

