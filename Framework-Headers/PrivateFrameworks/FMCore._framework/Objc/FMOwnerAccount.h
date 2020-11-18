//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/FMOwnerAccountIdentity-Protocol.h>

@class ACAccount, NSString;

@interface FMOwnerAccount : NSObject <FMOwnerAccountIdentity>
{
    BOOL _legacyBehavior;
    NSString *_authToken;
    NSString *_hostName;
    ACAccount *_account;
    NSString *_username;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_personId;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property (copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (copy, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property (copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property (nonatomic) BOOL legacyBehavior; // @synthesize legacyBehavior=_legacyBehavior;
@property (copy, nonatomic) NSString *personId; // @synthesize personId=_personId;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;

+ (id)authTokenForSubAccount:(id)arg1 type:(long long)arg2 error:(id *)arg3;
+ (id)hostNameForAccount:(id)arg1 type:(long long)arg2;
+ (id)ownerAccount;
+ (id)ownerAccountWithType:(long long)arg1;
+ (id)personIdForAccount:(id)arg1 error:(id *)arg2;
+ (id)primaryAccountWithStore:(id)arg1 error:(id *)arg2;
+ (void)renewCredentialsWithBundleId:(id)arg1 force:(BOOL)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)sharedInstance;
+ (id)subAccountForAccount:(id)arg1 type:(long long)arg2;
- (void).cxx_destruct;
- (void)accountChanged;
- (void)dealloc;
- (id)description;
- (id)hostNameOfType:(long long)arg1;
- (id)init;
- (id)initWithAuthToken:(id)arg1 personId:(id)arg2;
- (void)initializeAccount;
- (id)tokenOfType:(long long)arg1;

@end

