//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMMediaSystem.h>

#import <Home/HFMediaProfileContainer-Protocol.h>

@class HFAccessorySettingAdapterManager, HFMediaProfileContainerSettingsValueManager, HFServiceNameComponents, HMAccessory, HMAccessorySettings, HMHome, HMMediaSession, HMRemoteLoginHandler, HMRoom, NSDate, NSSet, NSString, NSUUID;
@protocol HFHomeKitObject, HFMediaValueSource, HMMediaObjectDelegate;

@interface HMMediaSystem (HFMediaAccessoryProfileAdditions) <HFMediaProfileContainer>

@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMMediaObjectDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property (readonly, copy, nonatomic) NSDate *hf_dateAdded;
@property (readonly, nonatomic) NSSet *hf_dependentHomeKitObjects;
@property (readonly, copy, nonatomic) NSString *hf_displayName;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) HMHome *hf_home;
@property (readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_isReachable;
@property (readonly, nonatomic) id<HFMediaValueSource> hf_mediaValueSource;
@property (readonly, weak, nonatomic) HMRoom *hf_parentRoom;
@property (readonly, nonatomic) NSString *hf_prettyDescription;
@property (readonly, nonatomic) HMRemoteLoginHandler *hf_remoteLoginHandler;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property (readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly) HMAccessorySettings *settings;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (id)accessories;
- (id)hf_appleMusicCompleteLoginWithAuthenticationResults:(id)arg1;
- (id)hf_appleMusicCurrentLoggedInAccount;
- (id)hf_appleMusicCurrentLoggedInAccountDSID;
- (id)hf_appleMusicLoginWithAccount:(id)arg1;
- (id)hf_appleMusicLogout;
- (id)hf_fetchLog:(id)arg1 timeout:(double)arg2;
- (id)hf_fetchLogListWithTimeout:(double)arg1;
- (id)hf_idsDeviceIdentifierWithError:(id *)arg1;
- (id)hf_prettyDescriptionOfType:(unsigned long long)arg1;
- (id)hf_serializedStateDumpRepresentation;
- (id)hf_updateDateAdded:(id)arg1;
- (id)hf_updateIsFavorite:(BOOL)arg1;
@end

