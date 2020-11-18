//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryProfile.h>

@class HMDAccessorySettingGroup, HMDMediaSession, NSObject;
@protocol OS_dispatch_queue;

@interface HMDMediaProfile : HMDAccessoryProfile
{
    HMDAccessorySettingGroup *_rootSettings;
    HMDMediaSession *_mediaSession;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (strong) HMDMediaSession *mediaSession; // @synthesize mediaSession=_mediaSession;
@property (readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (strong) HMDAccessorySettingGroup *rootSettings; // @synthesize rootSettings=_rootSettings;

+ (id)logCategory;
+ (id)namespace;
+ (id)sessionNamespace;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleMediaSessionSetAudioControl:(id)arg1;
- (void)_handleMediaSessionSetPlayback:(id)arg1;
- (void)configureWithMessageDispatcher:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)notifyClientsOfUpdatedRootSettings:(id)arg1;
- (void)registerForMessages;
- (void)sessionAudioControlUpdated:(id)arg1;
- (void)sessionPlaybackStateUpdated:(id)arg1;

@end

