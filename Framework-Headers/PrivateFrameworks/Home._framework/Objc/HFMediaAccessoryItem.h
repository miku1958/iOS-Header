//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFItem.h>

#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFMediaAccessoryLikeItem-Protocol.h>

@class HMHome, NSSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFHomeKitSettingsVendor, HFMediaProfileContainer, HFMediaValueSource;

@interface HFMediaAccessoryItem : HFItem <HFMediaAccessoryLikeItem, HFActionBuilderFactory>
{
    BOOL _isItemInActionBuilder;
    id<HFHomeKitObject> _homeKitObject;
    id<HFHomeKitSettingsVendor> _homeKitSettingsVendor;
    id<HFCharacteristicValueSource> _valueSource;
    id<HFMediaProfileContainer> _mediaProfileContainer;
    long long _mediaAccessoryItemType;
}

@property (readonly, nonatomic) NSSet *accessoriesSupportingSoftwareUpdate;
@property (readonly, nonatomic) BOOL allowsAppleMusicAccount;
@property (readonly, nonatomic) NSSet *availableSoftwareUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject; // @synthesize homeKitObject=_homeKitObject;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor; // @synthesize homeKitSettingsVendor=_homeKitSettingsVendor;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (nonatomic) BOOL isItemInActionBuilder; // @synthesize isItemInActionBuilder=_isItemInActionBuilder;
@property (readonly, nonatomic) long long mediaAccessoryItemType; // @synthesize mediaAccessoryItemType=_mediaAccessoryItemType;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer; // @synthesize mediaProfileContainer=_mediaProfileContainer;
@property (readonly, nonatomic) id<HFMediaValueSource> mediaValueSource;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMediaAction;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;

- (void).cxx_destruct;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)arg1;
- (void)_decorateServiceLikeItemKeys:(id)arg1;
- (void)_decorateSettingsSyncKeys:(id)arg1;
- (void)_decorateWithMediaSessionKeys:(id)arg1;
- (void)_decorateWithMediaSystemSpecificKeys:(id)arg1;
- (void)_decorateWithSoftwareUpdateStateKeys:(id)arg1;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;
- (BOOL)_isDumbSpeaker;
- (BOOL)_isHAPCapableSpeaker;
- (BOOL)_isInstallingSoftwareUpdate;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (BOOL)actionsMayRequireDeviceUnlock;
- (BOOL)containsActions;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createControlItems;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)enableDoorbellChime:(BOOL)arg1;
- (unsigned long long)homePodVariant;
- (id)iconDescriptor:(id)arg1;
- (id)init;
- (id)initWithValueSource:(id)arg1 homeKitObject:(id)arg2;
- (id)initWithValueSource:(id)arg1 mediaProfileContainer:(id)arg2;
- (BOOL)isAirPort;
- (BOOL)isAnnounceEnabled;
- (BOOL)isAppleTV;
- (BOOL)isAudioReceiver;
- (BOOL)isContainedWithinMediaSystem;
- (BOOL)isDoorbellChimeEnabled;
- (BOOL)isHomePod;
- (BOOL)isHomePodAndIsInMediaSystem;
- (BOOL)isHomePodMediaSystem;
- (BOOL)isSiriDisabled;
- (BOOL)isStandaloneHomePod;
- (id)namingComponentForHomeKitObject;
- (id)performStandardUpdateWithOptions:(id)arg1;
- (unsigned long long)preferredActionOnTap:(id)arg1;
- (id)room;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)serviceNameComponents;
- (id)setEnableAnnounce:(BOOL)arg1;
- (id)settings;
- (BOOL)supportsAlarmQuickControls;
- (BOOL)supportsMediaQuickControls;
- (BOOL)supportsMultiUser;

@end

