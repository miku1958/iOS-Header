//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAssistantAccessControl, HMFPairingIdentity, HMHome, HMHomeAccessControl, HMThreadSafeMutableArrayCollection, NSString, NSUUID, _HMContext;
@protocol HMUserDelegatePrivate, OS_dispatch_queue;

@interface HMUser : NSObject <HMFLogging, HMFMessageReceiver, NSSecureCoding, HMObjectMerge>
{
    HMThreadSafeMutableArrayCollection *_pendingAccessoryInvitations;
    BOOL _currentUser;
    _HMContext *_context;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHomeAccessControl *_homeAccessControl;
    HMAssistantAccessControl *_assistantAccessControl;
    NSString *_userID;
    HMHome *_home;
    HMFPairingIdentity *_pairingIdentity;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    id<HMUserDelegatePrivate> _delegate;
    NSUUID *_uuid;
}

@property (copy) HMAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (strong) _HMContext *context; // @synthesize context=_context;
@property (nonatomic, getter=isCurrentUser) BOOL currentUser; // @synthesize currentUser=_currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMUserDelegatePrivate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) HMHomeAccessControl *homeAccessControl; // @synthesize homeAccessControl=_homeAccessControl;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_configureWith:(id)arg1 context:(id)arg2;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (void)_handleUpdatedAssistantAccessControl:(id)arg1;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_unconfigure;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)assistantAccessControlForHome:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 accessControls:(id)arg5;
- (id)logIdentifier;
- (BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (id)messageDestination;
- (id)pendingAccessoryInvitations;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)updateAssistantAccessControl:(id)arg1 forHome:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHomeAccessControl:(BOOL)arg1 remoteAccess:(BOOL)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

