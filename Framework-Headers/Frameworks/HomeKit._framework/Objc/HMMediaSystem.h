//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessorySettingsContainer-Protocol.h>
#import <HomeKit/HMApplicationData-Protocol.h>
#import <HomeKit/HMControllable-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMMediaDestination-Protocol.h>
#import <HomeKit/HMMediaDestinationInternal-Protocol.h>
#import <HomeKit/HMMediaObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMAccessorySettings, HMApplicationData, HMFUnfairLock, HMHome, HMMediaDestination, HMMediaSession, HMMutableArray, HMSymptomsHandler, NSArray, NSString, NSUUID, _HMContext;
@protocol HMMediaSystemDelegate, OS_dispatch_queue;

@interface HMMediaSystem : NSObject <HMFLogging, HMFMessageReceiver, HMControllable, HMMediaDestinationInternal, HMObjectMerge, NSSecureCoding, HMAccessorySettingsContainer, HMApplicationData, HMMediaDestination, HMMediaObject>
{
    HMFUnfairLock *_lock;
    BOOL _compatible;
    NSString *_name;
    NSString *_configuredName;
    NSUUID *_uniqueIdentifier;
    HMAccessorySettings *_settings;
    id<HMMediaSystemDelegate> _delegate;
    HMApplicationData *_applicationData;
    HMHome *_home;
    HMSymptomsHandler *_symptomsHandler;
    _HMContext *_context;
    NSUUID *_uuid;
    HMMutableArray *_componentsArray;
    HMMediaDestination *_audioDestination;
}

@property (strong, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property (strong) HMMediaDestination *audioDestination; // @synthesize audioDestination=_audioDestination;
@property (readonly, copy) NSString *audioDestinationIdentifier;
@property (readonly, copy) NSArray *audioDestinationMediaProfiles;
@property (readonly, copy) NSString *audioDestinationName;
@property (readonly, copy) NSString *audioDestinationParentIdentifier;
@property (readonly) long long audioDestinationType;
@property (readonly, nonatomic) HMAccessoryCategory *category;
@property (readonly, nonatomic, getter=isCompatible) BOOL compatible; // @synthesize compatible=_compatible;
@property (readonly, nonatomic) NSArray *components;
@property (strong, nonatomic) HMMutableArray *componentsArray; // @synthesize componentsArray=_componentsArray;
@property (readonly, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property (readonly, weak) HMHome *containerHome;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMMediaSystemDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (readonly, copy) HMMediaSession *mediaSession;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property (readonly) Class superclass;
@property (readonly) BOOL supportsAudioDestination;
@property (readonly) BOOL supportsAudioGroup;
@property (readonly, nonatomic) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)logCategory;
+ (id)mediaSystemWithDictionary:(id)arg1 home:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_handleRootSettingsUpdated:(id)arg1;
- (void)_handleSystemUpdatedNotification:(id)arg1;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 includeSettingsAndAppData:(BOOL)arg3;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)_updateAccessoryReference;
- (void)_updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHome:(id)arg1 uuid:(id)arg2 name:(id)arg3 configuredName:(id)arg4 compatible:(BOOL)arg5 components:(id)arg6 settings:(id)arg7 symptomHandler:(id)arg8;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)notifyDelegateOfUpdatedApplicationData:(id)arg1;
- (void)notifyDelegateOfUpdatedAudioDestination;
- (void)notifyDelegateOfUpdatedComponents:(id)arg1;
- (void)notifyDelegateOfUpdatedConfiguredName:(id)arg1;
- (void)notifyDelegateOfUpdatedMediaSession:(id)arg1;
- (void)notifyDelegateOfUpdatedName:(id)arg1;
- (void)notifyDelegateOfUpdatedSettings:(id)arg1;
- (void)setConfiguredName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateMediaSession:(id)arg1 forMediaProfile:(id)arg2;

@end

