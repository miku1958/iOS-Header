//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Accounts/NSSecureCoding-Protocol.h>

@class ACAccountStore, NSSet, NSString, NSURL;

@interface ACAccountType : NSObject <NSSecureCoding>
{
    NSString *_accountTypeDescription;
    NSString *_identifier;
    NSString *_credentialType;
    NSURL *_objectID;
    int _visibility;
    NSString *_credentialProtectionPolicy;
    ACAccountStore *_accountStore;
    int _supportsAuthentication;
    BOOL _supportsMultipleAccounts;
    NSSet *_supportedDataclasses;
    NSSet *_syncableDataclasses;
    NSSet *_accessKeys;
    BOOL _encryptAccountProperties;
    NSString *_owningBundleID;
}

@property (readonly, nonatomic) BOOL accessGranted;
@property (readonly, nonatomic) NSSet *accessKeys; // @synthesize accessKeys=_accessKeys;
@property (weak, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property (readonly, nonatomic) NSString *accountTypeDescription; // @synthesize accountTypeDescription=_accountTypeDescription;
@property (copy, nonatomic) id credentialProtectionPolicy;
@property (strong, nonatomic) NSString *credentialType; // @synthesize credentialType=_credentialType;
@property (readonly, nonatomic) BOOL encryptAccountProperties; // @synthesize encryptAccountProperties=_encryptAccountProperties;
@property (readonly, nonatomic) NSString *fullDescription;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSURL *objectID; // @synthesize objectID=_objectID;
@property (strong, nonatomic) NSString *owningBundleID; // @synthesize owningBundleID=_owningBundleID;
@property (readonly, nonatomic) NSSet *supportedDataclasses; // @synthesize supportedDataclasses=_supportedDataclasses;
@property (nonatomic) int supportsAuthentication; // @synthesize supportsAuthentication=_supportsAuthentication;
@property (nonatomic) BOOL supportsMultipleAccounts; // @synthesize supportsMultipleAccounts=_supportsMultipleAccounts;
@property (readonly, nonatomic) NSSet *syncableDataclasses; // @synthesize syncableDataclasses=_syncableDataclasses;
@property (nonatomic) int visibility;

+ (id)allIdentifiers;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 description:(id)arg2;
- (id)initWithManagedAccountType:(id)arg1;
- (id)initWithManagedAccountType:(id)arg1 accountStore:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setAccountTypeDescription:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end

