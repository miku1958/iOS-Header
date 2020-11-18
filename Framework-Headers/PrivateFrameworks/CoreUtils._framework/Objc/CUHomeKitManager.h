//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/HMAccessoryDelegatePrivate-Protocol.h>
#import <CoreUtils/HMHomeDelegate-Protocol.h>
#import <CoreUtils/HMHomeDelegatePrivate-Protocol.h>
#import <CoreUtils/HMHomeManagerDelegate-Protocol.h>
#import <CoreUtils/HMHomeManagerDelegatePrivate-Protocol.h>
#import <CoreUtils/HMMediaSystemDelegate-Protocol.h>
#import <CoreUtils/HMUserDelegatePrivate-Protocol.h>

@class HMAccessory, HMHomeManager, HMMediaSystem, HMMediaSystemRole, HMUser, NSDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CUHomeKitManager : NSObject <HMAccessoryDelegatePrivate, HMHomeDelegate, HMHomeDelegatePrivate, HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMMediaSystemDelegate, HMUserDelegatePrivate>
{
    HMHomeManager *_homeManager;
    BOOL _homeManagerDidUpdateHomes;
    struct NSMutableDictionary *_homes;
    NSDictionary *_selfAccessoryAppData;
    BOOL _selfAccessoryEnabled;
    NSUUID *_selfAccessoryRoomID;
    BOOL _selfAccessoryMediaAccessEnabled;
    BOOL _selfAccessoryMediaSystemEnabled;
    BOOL _selfAccessorySiriAccessEnabled;
    HMUser *_selfAccessoryUser;
    struct NSMutableDictionary *_users;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    BOOL _selfAccessorySiriEnabled;
    unsigned int _flags;
    unsigned int _state;
    unsigned int _selfAccessoryMediaAccessFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_label;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CDUnknownBlockType _stateChangedHandler;
    HMAccessory *_selfAccessory;
    CDUnknownBlockType _selfAccessoryAppDataChangedHandler;
    CDUnknownBlockType _selfAccessoryUpdatedHandler;
    NSString *_selfAccessoryMediaAccessPassword;
    CDUnknownBlockType _selfAccessoryMediaAccessUpdatedHandler;
    HMMediaSystem *_selfAccessoryMediaSystem;
    HMAccessory *_selfAccessoryMediaSystemCounterpart;
    HMMediaSystemRole *_selfAccessoryMediaSystemRole;
    CDUnknownBlockType _selfAccessoryMediaSystemUpdatedHandler;
    CDUnknownBlockType _selfAccessorySiriAccessUpdatedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic) HMAccessory *selfAccessory; // @synthesize selfAccessory=_selfAccessory;
@property (readonly, copy, nonatomic) NSDictionary *selfAccessoryAppData; // @synthesize selfAccessoryAppData=_selfAccessoryAppData;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryAppDataChangedHandler; // @synthesize selfAccessoryAppDataChangedHandler=_selfAccessoryAppDataChangedHandler;
@property (readonly, nonatomic) unsigned int selfAccessoryMediaAccessFlags; // @synthesize selfAccessoryMediaAccessFlags=_selfAccessoryMediaAccessFlags;
@property (readonly, copy, nonatomic) NSString *selfAccessoryMediaAccessPassword; // @synthesize selfAccessoryMediaAccessPassword=_selfAccessoryMediaAccessPassword;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryMediaAccessUpdatedHandler; // @synthesize selfAccessoryMediaAccessUpdatedHandler=_selfAccessoryMediaAccessUpdatedHandler;
@property (readonly, nonatomic) HMMediaSystem *selfAccessoryMediaSystem; // @synthesize selfAccessoryMediaSystem=_selfAccessoryMediaSystem;
@property (readonly, nonatomic) HMAccessory *selfAccessoryMediaSystemCounterpart; // @synthesize selfAccessoryMediaSystemCounterpart=_selfAccessoryMediaSystemCounterpart;
@property (readonly, nonatomic) HMMediaSystemRole *selfAccessoryMediaSystemRole; // @synthesize selfAccessoryMediaSystemRole=_selfAccessoryMediaSystemRole;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryMediaSystemUpdatedHandler; // @synthesize selfAccessoryMediaSystemUpdatedHandler=_selfAccessoryMediaSystemUpdatedHandler;
@property (copy, nonatomic) CDUnknownBlockType selfAccessorySiriAccessUpdatedHandler; // @synthesize selfAccessorySiriAccessUpdatedHandler=_selfAccessorySiriAccessUpdatedHandler;
@property (readonly, nonatomic) BOOL selfAccessorySiriEnabled; // @synthesize selfAccessorySiriEnabled=_selfAccessorySiriEnabled;
@property (copy, nonatomic) CDUnknownBlockType selfAccessoryUpdatedHandler; // @synthesize selfAccessoryUpdatedHandler=_selfAccessoryUpdatedHandler;
@property (readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property (copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (id)_bestPairingIdentity;
- (id)_cuPairingIdentityWithHMFPairingIdentity:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_getPairingIdentityForAccessoryWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getPairingIdentityForUserWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_interrupted;
- (void)_invalidated;
- (BOOL)_isOwnerOfHome:(id)arg1;
- (id)_selfAccessoryMediaSystemUncached:(id *)arg1;
- (id)_selfAccessoryUncached;
- (void)_updateHomes;
- (void)_updateSelfAccessoryIfNeeded;
- (void)_updateSelfAccessoryMediaAccess;
- (void)_updateSelfAccessoryMediaSystem;
- (void)_updateSelfAccessorySiriAccess;
- (void)_updateState;
- (void)_updateUsers;
- (void)accessory:(id)arg1 didUpdatePairingIdentity:(id)arg2;
- (void)accessoryDidUpdateApplicationData:(id)arg1;
- (void)activate;
- (void)dealloc;
- (void)findPairedPeer:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getPairingIdentityWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didAddMediaSystem:(id)arg2;
- (void)home:(id)arg1 didAddUser:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveMediaSystem:(id)arg2;
- (void)home:(id)arg1 didRemoveUser:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPassword:(id)arg2;
- (void)home:(id)arg1 didUpdateMediaPeerToPeerEnabled:(BOOL)arg2;
- (void)home:(id)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(id)arg1 didUpdateRoom:(id)arg2 forAccessory:(id)arg3;
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;
- (void)homeManagerDidUpdateHomes:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)mediaSystem:(id)arg1 didUpdateComponents:(id)arg2;
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;
- (void)user:(id)arg1 didUpdatePairingIdentity:(id)arg2;

@end

