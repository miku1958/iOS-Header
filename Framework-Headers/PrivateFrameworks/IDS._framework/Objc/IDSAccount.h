//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString, _IDSAccount;

@interface IDSAccount : NSObject
{
    _IDSAccount *_internal;
}

@property (strong, nonatomic) NSDictionary *accountInfo;
@property (readonly, nonatomic) int accountType;
@property (readonly, strong, nonatomic) NSArray *aliasStrings;
@property (readonly, strong, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) BOOL canSend;
@property (readonly, nonatomic) NSDate *dateRegistered;
@property (readonly, strong, nonatomic) NSArray *devices;
@property (readonly, strong, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL isActive;
@property (strong, nonatomic) NSString *loginID;
@property (readonly, strong, nonatomic) NSArray *nearbyDevices;
@property (readonly, nonatomic) NSDate *nextRegistrationDate;
@property (readonly, strong, nonatomic) NSString *primaryServiceName;
@property (readonly, nonatomic) NSString *profileID;
@property (readonly, strong, nonatomic) NSDictionary *profileInfo;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) NSString *regionBasePhoneNumber;
@property (readonly, nonatomic) NSString *regionID;
@property (readonly, nonatomic) NSDictionary *regionServerContext;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, nonatomic) NSData *registrationCertificate;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, strong, nonatomic) NSString *serviceName;
@property (readonly, strong, nonatomic) NSString *uniqueID;
@property (readonly, strong, nonatomic) NSArray *vettedAliases;

- (void)_callNearbyDevicesChanged;
- (id)_initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)_internal;
- (BOOL)_isEnabled;
- (void)_reregisterAndReidentify:(BOOL)arg1;
- (void)_setIsEnabled:(BOOL)arg1;
- (void)addAliases:(id)arg1;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (void)addRegistrationDelegate:(id)arg1 queue:(id)arg2;
- (void)authenticateAccount;
- (void)deactivateAndPurgeIdentify;
- (void)dealloc;
- (id)description;
- (id)initWithDictionary:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (id)initWithLoginID:(id)arg1 uniqueID:(id)arg2 serviceName:(id)arg3;
- (void)passwordUpdated;
- (void)registerAccount;
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

