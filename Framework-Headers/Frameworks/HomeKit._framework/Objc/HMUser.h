//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/HMSettingsContainer-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAssistantAccessControl, HMFPairingIdentity, HMFUnfairLock, HMHome, HMHomeAccessControl, HMMediaContentProfileAccessControl, HMMutableArray, HMSettings, HMSettingsController, NSString, NSUUID, _HMContext;
@protocol HMUserDelegatePrivate, OS_dispatch_queue;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, HMSettingsContainer, NSSecureCoding, HMObjectMerge>
{
    HMFUnfairLock *_lock;
    HMMutableArray *_pendingAccessoryInvitations;
    BOOL _currentUser;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHomeAccessControl *_homeAccessControl;
    HMAssistantAccessControl *_assistantAccessControl;
    HMMediaContentProfileAccessControl *_mediaContentProfileAccessControl;
    NSString *_userID;
    HMHome *_home;
    HMFPairingIdentity *_pairingIdentity;
    HMSettings *_settings;
    HMSettings *_privateSettings;
    _HMContext *_context;
    id<HMUserDelegatePrivate> _delegate;
    HMSettingsController *_settingsController;
    HMSettingsController *_privateSettingsController;
    NSUUID *_uuid;
}

@property (copy) HMAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property (strong) _HMContext *context; // @synthesize context=_context;
@property (nonatomic, getter=isCurrentUser) BOOL currentUser; // @synthesize currentUser=_currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMUserDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) HMHomeAccessControl *homeAccessControl; // @synthesize homeAccessControl=_homeAccessControl;
@property (copy) HMMediaContentProfileAccessControl *mediaContentProfileAccessControl; // @synthesize mediaContentProfileAccessControl=_mediaContentProfileAccessControl;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property (readonly) HMSettings *privateSettings; // @synthesize privateSettings=_privateSettings;
@property (readonly) HMSettingsController *privateSettingsController; // @synthesize privateSettingsController=_privateSettingsController;
@property (readonly) HMSettings *settings; // @synthesize settings=_settings;
@property (readonly) HMSettingsController *settingsController; // @synthesize settingsController=_settingsController;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (void)_handleMultiUserStatusChangedNotification:(id)arg1;
- (void)_handleUpdatedAssistantAccessControl:(id)arg1;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)assistantAccessControlForHome:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchShareLookupInfo:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 homeAccessControl:(id)arg5;
- (id)logIdentifier;
- (id)mediaContentProfileAccessControlForHome:(id)arg1;
- (BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (id)messageDestination;
- (void)pairingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)pendingAccessoryInvitations;
- (void)sendClientShareURL:(id)arg1 shareToken:(id)arg2 containerID:(id)arg3 fromUser:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHomeAccessControl:(BOOL)arg1 remoteAccess:(BOOL)arg2 camerasAccess:(id)arg3;
- (void)updateMediaContentProfileAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)userSettingsForHome:(id)arg1;

@end
