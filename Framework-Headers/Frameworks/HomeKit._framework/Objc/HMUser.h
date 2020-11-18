//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDelegateCaller, HMHome, HMHomeAccessControl, HMThreadSafeMutableArrayCollection, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMUser : NSObject <NSSecureCoding, HMObjectMerge>
{
    HMThreadSafeMutableArrayCollection *_pendingAccessoryInvitations;
    BOOL _currentUser;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHomeAccessControl *_homeAccessControl;
    NSString *_userID;
    HMHome *_home;
    NSObject<OS_dispatch_queue> *_clientQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSUUID *_uuid;
    HMDelegateCaller *_delegateCaller;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property (nonatomic, getter=isCurrentUser) BOOL currentUser; // @synthesize currentUser=_currentUser;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) HMDelegateCaller *delegateCaller; // @synthesize delegateCaller=_delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMHome *home; // @synthesize home=_home;
@property (strong, nonatomic) HMHomeAccessControl *homeAccessControl; // @synthesize homeAccessControl=_homeAccessControl;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_configure:(id)arg1 clientQueue:(id)arg2 delegateCaller:(id)arg3;
- (id)_filterAccessoryInvitationsFromOutgoingInvitation:(id)arg1;
- (BOOL)_mergeWithNewAccessoryInvitations:(id)arg1 operations:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_unconfigure;
- (void)_updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4;
- (id)initWithUserID:(id)arg1 name:(id)arg2 uuid:(id)arg3 home:(id)arg4 owner:(BOOL)arg5 administrator:(BOOL)arg6;
- (BOOL)mergePendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1 operations:(id)arg2;
- (id)pendingAccessoryInvitations;
- (void)setPendingAccessoryInvitationsWithOutgoingInvitation:(id)arg1;
- (void)updateHomeAccessControl:(BOOL)arg1 remoteAccess:(BOOL)arg2;
- (void)updatePresenceAuthorizationStatus:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

