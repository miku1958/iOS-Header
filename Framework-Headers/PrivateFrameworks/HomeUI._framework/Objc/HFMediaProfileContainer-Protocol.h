//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HFAccessoryVendor-Protocol.h>
#import <HomeUI/HFFavoritable-Protocol.h>
#import <HomeUI/HFGroupableItemProtocol-Protocol.h>
#import <HomeUI/HFHomeKitObject-Protocol.h>
#import <HomeUI/HFPrettyDescription-Protocol.h>
#import <HomeUI/HFReorderableHomeKitObject-Protocol.h>
#import <HomeUI/HFRoomContextProviding-Protocol.h>
#import <HomeUI/HMMediaObject-Protocol.h>

@class ACAccount, HFAccessorySettingAdapterManager, HFMediaProfileContainerSettingsValueManager, HFServiceNameComponents, HMAccessory, HMHome, HMMediaSession, HMRemoteLoginHandler, NAFuture, NSDictionary, NSSet, NSString;
@protocol HFMediaValueSource;

@protocol HFMediaProfileContainer <HMMediaObject, HFAccessoryVendor, HFHomeKitObject, HFPrettyDescription, HFReorderableHomeKitObject, HFFavoritable, HFRoomContextProviding, HFGroupableItemProtocol>

@property (readonly, nonatomic) HMAccessory *hf_backingAccessory;
@property (readonly, nonatomic) NSSet *hf_dependentHomeKitObjects;
@property (readonly, nonatomic) HMHome *hf_home;
@property (readonly, nonatomic) BOOL hf_isCurrentAccessory;
@property (readonly, nonatomic) BOOL hf_isReachable;
@property (readonly, nonatomic) id<HFMediaValueSource> hf_mediaValueSource;
@property (readonly, nonatomic) NSString *hf_prettyDescription;
@property (readonly, nonatomic) HMRemoteLoginHandler *hf_remoteLoginHandler;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) HFAccessorySettingAdapterManager *hf_settingsAdapterManager;
@property (readonly, nonatomic) HFMediaProfileContainerSettingsValueManager *hf_settingsValueManager;
@property (readonly, nonatomic) BOOL hf_supportsSoftwareUpdate;
@property (readonly, copy, nonatomic) HMMediaSession *mediaSession;

- (NAFuture *)hf_appleMusicCompleteLoginWithAuthenticationResults:(NSDictionary *)arg1;
- (ACAccount *)hf_appleMusicCurrentLoggedInAccount;
- (NSString *)hf_appleMusicCurrentLoggedInAccountDSID;
- (NAFuture *)hf_appleMusicLoginWithAccount:(ACAccount *)arg1;
- (NAFuture *)hf_appleMusicLogout;
- (NAFuture *)hf_fetchLog:(NSString *)arg1 timeout:(double)arg2;
- (NAFuture *)hf_fetchLogListWithTimeout:(double)arg1;
@end

