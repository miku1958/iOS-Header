//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSArray, NSData, NSDate, NSDictionary, NSMapTable, NSMutableArray, NSString;

@interface _IDSAccount : NSObject <IDSDaemonListenerProtocol>
{
    NSDictionary *_accountConfig;
    NSString *_serviceToken;
    NSString *_uniqueID;
    NSString *_service;
    NSMutableArray *_devices;
    NSMutableArray *_suppressedDevices;
    id _delegateContext;
    NSMapTable *_delegateToInfo;
    NSMapTable *_registrationDelegateToInfo;
    BOOL _devicesLoaded;
    BOOL _isEnabled;
}

@property (nonatomic, setter=_setIsEnabled:) BOOL _isEnabled;
@property (strong, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) int accountType;
@property (readonly, strong, nonatomic) NSArray *aliasStrings;
@property (readonly, strong, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, nonatomic) NSDate *dateRegistered;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) NSArray *devices;
@property (readonly, strong, nonatomic) NSString *displayName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isInTransientRegistrationState;
@property (readonly, nonatomic) BOOL isUserDisabled;
@property (strong, nonatomic) NSString *loginID;
@property (readonly, strong, nonatomic) NSArray *nearbyDevices;
@property (readonly, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, strong, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, strong, nonatomic) NSDictionary *profileInfo;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, strong, nonatomic) NSString *pushTopic;
@property (readonly, nonatomic) NSString *regionBasePhoneNumber;
@property (readonly, nonatomic) NSString *regionID;
@property (readonly, nonatomic) NSDictionary *regionServerContext;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, strong, nonatomic) NSString *serviceName;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSArray *suppressedDevices;
@property (readonly, strong, nonatomic) NSString *uniqueID;
@property (readonly, strong, nonatomic) NSArray *vettedAliases;

- (void)_callCloudConnectedDevicesChanged;
- (void)_callConnectedDevicesChanged;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4;
- (void)_callDelegatesRespondingToSelector:(SEL)arg1 withPreCallbacksBlock:(CDUnknownBlockType)arg2 callbackBlock:(CDUnknownBlockType)arg3 postCallbacksBlock:(CDUnknownBlockType)arg4 group:(id)arg5;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 group:(id)arg2;
- (void)_callDevicesChanged;
- (void)_callNearbyDevicesChanged;
- (void)_callRegistrationDelegatesWithBlock:(CDUnknownBlockType)arg1;
- (void)_connect;
- (BOOL)_isiCloudPairingService;
- (id)_keychainRegistration;
- (void)_loadCachedDevices;
- (id)_objectForKey:(id)arg1;
- (id)_registeredURIs;
- (void)_reloadCachedDevices;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)_setObject:(id)arg1 forKey:(id)arg2;
- (void)_updateDependentDevicesWithDevicesInfo:(id)arg1;
- (void)account:(id)arg1 aliasesChanged:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdated:(id)arg2;
- (void)account:(id)arg1 dependentDevicesUpdatedUponReconnect:(id)arg2;
- (void)account:(id)arg1 displayNameChanged:(id)arg2;
- (void)account:(id)arg1 localDeviceAdded:(id)arg2;
- (void)account:(id)arg1 localDeviceRemoved:(id)arg2;
- (void)account:(id)arg1 loginChanged:(id)arg2;
- (void)account:(id)arg1 profileChanged:(id)arg2;
- (void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
- (void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (void)authenticateAccount;
- (id)connectedDevices;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3 delegateContext:(id)arg4;
- (void)passwordUpdated;
- (void)refreshRegistrationForAccount:(id)arg1;
- (void)registerAccount;
- (id)registrationInfo;
- (void)removeAliases:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRegistrationDelegate:(id)arg1;
- (void)setAuthToken:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)unregisterAccount;
- (void)unvalidateAliases:(id)arg1;
- (void)updateAccountWithAccountInfo:(id)arg1;
- (void)updateAuthorizationCredentials:(id)arg1 token:(id)arg2;
- (void)validateAliases:(id)arg1;
- (void)validateProfile;

@end

